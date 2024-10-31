#include <iostream>
#include <string>
#include <cctype>

bool hasUpperCase(const std::string &password) {
    for (size_t i = 0; i < password.length(); ++i) {
        if (std::isupper((char)password[i])) return true;
    }
    return false;
}

bool hasLowerCase(const std::string &password) {
    for (size_t i = 0; i < password.length(); ++i) {
        if (std::islower((char)password[i])) return true;
    }
    return false;
}

bool hasDigit(const std::string &password) {
    for (size_t i = 0; i < password.length(); ++i) {
        if (std::isdigit((int)password[i])) return true;
    }
    return false;
    
}

bool hasSpecialChar(const std::string &password) {
    std::string specialChars = "!@#$%^&*()-_=+[]{}|;:'\",.<>?/~`";
    for (size_t i = 0; i < password.length(); ++i) {
        if (specialChars.find(password[i]) != std::string::npos) return true;
    }
    return false;
}

std::string evaluatePasswordStrength(const std::string &password) {
    int score = 0;

    // Add 1 to the score for each condition met
    if (password.length() >= 8) score++;
    if (hasUpperCase(password)) score++;
    if (hasLowerCase(password)) score++;
    if (hasDigit(password)) score++;
    if (hasSpecialChar(password)) score++;

    // Evaluate strength based on the score
    switch (score) {
        case 5: return "Very Strong";
        case 4: return "Strong";
        case 3: return "Moderate";
        case 2: return "Weak";
        default: return "Very Weak";
    }
}

int main() {
    std::string password;
    std::cout << "Enter a password to evaluate its strength: ";
    std::getline(std::cin, password);

    std::string strength = evaluatePasswordStrength(password);
    std::cout << "Password strength: " << strength << std::endl;

    return 0;
}

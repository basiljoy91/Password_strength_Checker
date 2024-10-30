# Password_strength_Checker
This is a simple C++ application that evaluates password strength based on several key security factors. Designed as part of a cybersecurity project, the program helps users understand the strength of their passwords by checking for various criteria such as length, uppercase letters, lowercase letters, digits, and special characters.

## Features
* Checks Password Length: Ensures the password is at least 8 characters long.
* Uppercase & Lowercase Validation: Verifies the presence of both uppercase and lowercase characters.
* Digit and Special Character Detection: Requires at least one digit and one special character for added security.
* Strength Rating: Provides ratings from "Very Weak" to "Very Strong" based on the password’s characteristics.

## How It Works
1. Input: The user inputs a password they wish to evaluate.
2. Checks: The program evaluates the password using five factors:
  * Length of at least 8 characters
* Contains uppercase letters
* Contains lowercase letters
* Contains digits
* Contains special characters (from a predefined list)
3. Scoring: Each criterion is worth one point, with a maximum score of 5.
4. Strength Evaluation: The program rates the password as:
- `Very Weak` (score 0 or 1)
- `Weak` (score 2)
- `Moderate` (score 3)
- `Strong` (score 4)
- `Very Strong` (score 5)
## Example Usage
To evaluate a password, run the program and enter the password when prompted:
The program rates the password as:

```cpp
Enter a password to evaluate its strength: MyS3cur3Pass!
Password strength: Very Strong
```


## Language and Libraries
* Language: C++
* Libraries: Standard C++ libraries including
  `<iostream>`, `<string>`, and `<cctype>` for character checking functions.
  
## Benefits
* Educational Tool: Great for beginners learning about password security principles.
* Immediate Feedback: Provides users with a quick and clear understanding of their passwords' strength.
* C++ Practice: Useful for those practising C++ programming, especially with strings and conditional logic.

## Limitations
* Limited Special Characters: Only a predefined set of special characters is accepted.
* Basic Scoring System: The scoring is simple and may not reflect the complexity or randomness of a truly strong password.
* No Real Encryption: This checker evaluates password strength but does not hash or secure passwords, making it unsuitable for production use.

## Future Improvements
Consider adding features such as:
* Dynamic special character recognition.
* Incorporating entropy-based scoring for better accuracy.
* Additional checks against common weak passwords or leaked password lists.

## Contribution
Feel free to contribute by submitting issues, making pull requests, or suggesting enhancements.


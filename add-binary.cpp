#include <string> // Include for std::string
#include <algorithm> // Include for std::reverse

class Solution {
 public:
  std::string addBinary(std::string a, std::string b) {
    std::string ans; // Result string
    int carry = 0; // Initialize carry to 0
    int i = a.length() - 1; // Index for string a
    int j = b.length() - 1; // Index for string b

    // Loop until all bits are processed or there is a carry
    while (i >= 0 || j >= 0 || carry) {
      if (i >= 0)
        carry += a[i--] - '0'; // Add bit of a to carry if i is valid
      if (j >= 0)
        carry += b[j--] - '0'; // Add bit of b to carry if j is valid
      ans += carry % 2 + '0'; // Append the least significant bit of carry to result
      carry /= 2; // Update carry to the most significant bit
    }

    std::reverse(std::begin(ans), std::end(ans)); // Reverse the result string using predefined functions
    return ans; // Return the result
  }
};

#include <cassert>
#include <iostream>
#include <string>

using namespace std;

class Solution {
 public:
  int lengthOfLastWord(string s) {
    int pos = s.size() - 1;
    while (s[pos] == ' ') { --pos; }
    int length = 0;
    while (0 <= pos && s[pos] != ' ') {
      --pos;
      ++length;
    }

    return length;
  }
};

void TestLengthOfLastWord() {
  Solution s;
  {
    string in{"a"s};
    assert(1 == s.lengthOfLastWord(in));
  }
  {
    string in{"Hello world"s};
    assert(5 == s.lengthOfLastWord(in));
  }
  {
    string in{"luffy is still joyboy"s};
    assert(6 == s.lengthOfLastWord(in));
  }
  {
    string in{"   fly me   to   the moon  "s};
    assert(4 == s.lengthOfLastWord(in));
  }
}

int main() {
  TestLengthOfLastWord();
  cout << "Ok!"s << endl;
  return 0;
}

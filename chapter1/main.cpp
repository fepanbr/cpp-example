#include <iostream> // C++ 표준 입출력 라이브러리
#include <string>
#include <stdlib.h>

using namespace std;

// namespace A
// {
//   void function()
//   {
//     cout << "A Namespace" << endl;
//   }
// }
// namespace B
// {
//   void function()
//   {
//     cout << "B Namespace" << endl;
//   }
// }

// >>: 입력받는다.
// <<: 출력한다.

// namespace ::를 통해 접근가능하다.

int main()
{
  string input;
  // cin >> input;
  getline(cin, input);
  for (int i = 0; input.size(); i++)
  {
    cout << input[i] << '\n';
  }
  return 0;
}
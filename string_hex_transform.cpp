#include <iostream>
#include <string>

using namespace std;

string msgToHexConverter(const string& msg)
{
  std::string msgToHex;
  for (size_t i = 0; i <msg.length(); ++i)
  {
    static const char* HexConverter = "0123456789ABCDEF";

    msgToHex += HexConverter[ ( msg[i] & 0xF0 ) >> 4 ];
    msgToHex += HexConverter[ ( msg[i] & 0x0F ) >> 0 ];
  }

  return msgToHex;
}

string msgFromHexConverter(const string& msg)
{
  std::string msgFromHex;
  for (size_t i = 0; i <msg.length(); i += 2)
  {
    char left = (msg[i] >= 'A') ? msg[i] - 'A' + 10 : msg[i] - '0';
    char right = (msg[i + 1] >= 'A') ? msg[i + 1] - 'A' + 10 : msg[i + 1] - '0';
    msgFromHex += (left << 4) | (right << 0);
  }

  return msgFromHex;
}

int main()
{
  cout << "Please input a string to test the func" << endl;
  string testNormal/* = "fjkdsljfjgfdzzkflls"*/;
  cin >> testNormal;

  string testHex = msgToHexConverter(testNormal);
  string testConvertBackResult = msgFromHexConverter(testHex);

  cout << "input:" << testNormal << endl;
  cout << "HexType:" << testHex << endl;
  cout << "convert back result:" << testConvertBackResult << endl;

  return 0;
}

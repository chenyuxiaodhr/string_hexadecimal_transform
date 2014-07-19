string_hexadecimal_transform
============================

a simple way to convert char string to hexadecimal string

Sometimes we use different encode format to save strings. But when we transfer them to each other, it will be changed.
Here I provide a way to convert chars in a string to hexadecimal type string, and the function will make the string double length. The hexadecimal string will just include '0' ~ '9' & 'A' ~ 'F'. It's just like a string stream then.

string msgToHexConverter(const string& msg)  can convert a string to a hexadecimal type string.
string msgFromHexConverter(const string& msg)can convert a hexadecimal string back to normal.

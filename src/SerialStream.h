#ifndef Serial_Stream_H_
#define Serial_Stream_H_
#include <Print.h>

#define endl "\n"
#define space " "
#define tab "\t"

template<class T> inline Print &operator <<(Print &obj, T arg) { obj.print(arg); return obj; }

#endif //Serial_Stream_H_

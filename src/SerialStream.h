#ifndef Serial_Stream_H_
#define Serial_Stream_H_
#include <Print.h>

extern const char *endl;
extern const char *space;
extern const char *tab;
extern const char *comma;
extern const char *separator;

template <class T>
inline Print &operator<<(Print &obj, T arg)
{
    obj.print(arg);
    return obj;
}

template <>
inline Print &operator<<(Print &obj, float arg)
{
    obj.print(arg, 4);
    return obj;
}

template <>
inline Print &operator<<(Print &obj, double arg)
{
    obj.print(arg, 4);
    return obj;
}

#endif //Serial_Stream_H_

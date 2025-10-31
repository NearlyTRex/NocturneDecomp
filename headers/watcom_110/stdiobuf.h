//
//  stdiobuf.h	Standard I/O streams
//
//  Copyright by WATCOM International Corp. 1988-1996.  All rights reserved.
//
#ifndef _STDIOBUF_H_INCLUDED
#define _STDIOBUF_H_INCLUDED
#if !defined(_ENABLE_AUTODEPEND)
  #pragma read_only_file;
#endif

#ifndef __cplusplus
#error stdiobuf.h is for use with C++
#endif

#ifndef _COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif
#ifndef _STDIO_H_INCLUDED
 #include <stdio.h>
#endif
#ifndef _IOSTREAM_H_INCLUDED
 #include <iostream.h>
#endif

// **************************** STDIOBUF *************************************
#if defined(_M_IX86)
  #pragma pack(__push,1);
#else
  #pragma pack(__push,8);
#endif
class _WPRTLINK stdiobuf : public streambuf {
public:
    stdiobuf();
    stdiobuf( FILE *__fptr );
    ~stdiobuf();

    FILE *stdiofile();
    
    virtual int overflow( int = EOF );
    virtual int underflow();
    virtual int	sync();

private:
    FILE *__file_pointer;
    char __unbuffered_get_area[ DEFAULT_PUTBACK_SIZE+1 ];
    int : 0;
};
#pragma pack(__pop);

inline FILE *stdiobuf::stdiofile() {
    return __file_pointer;
}

#endif

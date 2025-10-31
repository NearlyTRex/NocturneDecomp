//
//  exstring.h
//
//  Copyright by WATCOM International Corp. 1988-1996.  All rights reserved.
//
#ifndef _EXSTRING_H_INCLUDED
#define _EXSTRING_H_INCLUDED
#if !defined(_ENABLE_AUTODEPEND)
  #pragma read_only_file;
#endif

#ifndef __cplusplus
#error exstring.h is for use with C++
#endif
#ifndef _COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

// This class is temporary. It is used only to implement StdException.
// 
// It will be replaced later, once the standard has settled down.
//

class _WPRTLINK __ExcString {
    char _value[100];
public:
    __ExcString( char const * );
    __ExcString( void );
    __ExcString( __ExcString const & );
    operator char const* () const;
};

#endif

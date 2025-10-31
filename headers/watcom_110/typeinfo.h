//
//  typeinfo.h	Type Information
//
//  Copyright by WATCOM International Corp. 1988-1996.  All rights reserved.
//
#ifndef _TYPEINFO_H_INCLUDED
#define _TYPEINFO_H_INCLUDED
#if !defined(_ENABLE_AUTODEPEND)
  #pragma read_only_file;
#endif

#ifndef __cplusplus
#error typeinfo.h is for use with C++
#endif

#ifndef _COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#include <exception>

class _WPRTLINK type_info {
public:
    ~type_info();
    bool operator ==( type_info const & ) const;
    bool operator !=( type_info const & ) const;
    bool before( type_info const & ) const;
    const char *name() const;
    const char *raw_name() const;
private:
    type_info( type_info const & );
    type_info & operator =( type_info const & );
    mutable void const *__data;
    char const __raw[1];
};

class _WPRTLINK bad_cast : public exception {
public:
    bad_cast( string const& what_arg ) _WCTHROWS(())
        : exception( what_arg ) {
    }
};

class _WPRTLINK bad_typeid : public exception {
public:
    bad_typeid( string const& what_arg ) _WCTHROWS(())
        : exception( what_arg ) {
    }
};

#endif

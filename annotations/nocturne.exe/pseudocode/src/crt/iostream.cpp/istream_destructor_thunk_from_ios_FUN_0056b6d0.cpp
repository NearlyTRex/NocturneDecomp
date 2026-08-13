// Name: crt_iostream.cpp_istream_destructor_thunk_from_ios_FUN_0056b6d0
// Address: 0056b6d0
// Address Range: [[0056b6d0, 0056b6e7]]
// Convention: __cdecl
// Signature: void __cdecl crt_iostream_cpp_istream_destructor_thunk_from_ios_FUN_0056b6d0(ios *this_ptr,int dtor_flags)

#include "nocturne.h"

void __cdecl crt_iostream_cpp_istream_destructor_thunk_from_ios_FUN_0056b6d0(ios *this_ptr,int dtor_flags)

{
  crt_iostream_cpp_istream_dtor_FUN_0056b6e8
            ((_istream *)((int)this_ptr - (int)this_ptr[-1].cleanup_vtable),dtor_flags);
  return;
}

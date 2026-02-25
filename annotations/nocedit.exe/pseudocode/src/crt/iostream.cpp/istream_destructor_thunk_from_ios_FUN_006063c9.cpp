// Name: crt_iostream.cpp_istream_destructor_thunk_from_ios_FUN_006063c9
// Address: 006063c9
// Address Range: [[006063c9, 006063e0]]
// Convention: __cdecl
// Signature: void __cdecl crt_iostream_cpp_istream_destructor_thunk_from_ios_FUN_006063c9(ios *this_ptr,int dtor_flags)

#include "nocturne.h"

void __cdecl crt_iostream_cpp_istream_destructor_thunk_from_ios_FUN_006063c9(ios *this_ptr,int dtor_flags)

{
  crt_iostream_cpp_istream_dtor_FUN_006063e1
            ((_istream *)((int)this_ptr - (int)this_ptr[-1].cleanup_vtable),dtor_flags);
  return;
}

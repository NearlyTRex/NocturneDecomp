// Name: crt_strstream.cpp_istrstream_destructor_thunk_from_ios_FUN_005ff5b2
// Address: 005ff5b2
// Address Range: [[005ff5b2, 005ff5c9]]
// Convention: __cdecl
// Signature: void __cdecl crt_strstream_cpp_istrstream_destructor_thunk_from_ios_FUN_005ff5b2(ios *this_ptr,int dtor_flags)

#include "nocturne.h"

void __cdecl crt_strstream_cpp_istrstream_destructor_thunk_from_ios_FUN_005ff5b2(ios *this_ptr,int dtor_flags)

{
  crt_strstream_cpp_istrstream_dtor_FUN_005ff5ca
            ((istrstream *)((int)this_ptr - (int)this_ptr[-1].cleanup_vtable),dtor_flags);
  return;
}

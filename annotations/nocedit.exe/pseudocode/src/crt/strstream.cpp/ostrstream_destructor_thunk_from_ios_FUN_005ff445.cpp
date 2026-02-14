// Name: crt_strstream.cpp_ostrstream_destructor_thunk_from_ios_FUN_005ff445
// Address: 005ff445
// Address Range: [[005ff445, 005ff45c]]
// Convention: __cdecl
// Signature: void __cdecl crt_strstream_cpp_ostrstream_destructor_thunk_from_ios_FUN_005ff445(ios *this_ptr,int dtor_flags)

#include "nocturne.h"

void __cdecl crt_strstream_cpp_ostrstream_destructor_thunk_from_ios_FUN_005ff445(ios *this_ptr,int dtor_flags)

{
  crt_strstream_cpp_ostrstream_dtor_FUN_005ff48a
            ((ostrstream *)((int)this_ptr - (int)this_ptr[-1].cleanup_vtable),dtor_flags);
  return;
}

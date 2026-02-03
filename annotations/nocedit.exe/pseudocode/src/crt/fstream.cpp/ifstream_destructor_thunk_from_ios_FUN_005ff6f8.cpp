// Name: crt_fstream.cpp_ifstream_destructor_thunk_from_ios_FUN_005ff6f8
// Address: 005ff6f8
// Address Range: [[005ff6f8, 005ff70f]]
// Convention: __cdecl
// Signature: void __cdecl crt_fstream_cpp_ifstream_destructor_thunk_from_ios_FUN_005ff6f8(ios *this_ptr,int dtor_flags)

#include "nocturne.h"

void __cdecl
crt_fstream_cpp_ifstream_destructor_thunk_from_ios_FUN_005ff6f8(ios *this_ptr,int dtor_flags)

{
  crt_fstream_cpp_ifstream_dtor_FUN_005ff856
            ((ifstream *)((int)this_ptr - (int)this_ptr[-1].cleanup_vtable),dtor_flags);
  return;
}

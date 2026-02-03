// Name: crt_fstream.cpp_ofstream_destructor_thunk_from_ios_FUN_005ff7a4
// Address: 005ff7a4
// Address Range: [[005ff7a4, 005ff7bb]]
// Convention: __cdecl
// Signature: void __cdecl crt_fstream_cpp_ofstream_destructor_thunk_from_ios_FUN_005ff7a4(ios *this_ptr,int dtor_flags)

#include "nocturne.h"

void __cdecl
crt_fstream_cpp_ofstream_destructor_thunk_from_ios_FUN_005ff7a4(ios *this_ptr,int dtor_flags)

{
  crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc
            ((ofstream *)((int)this_ptr - (int)this_ptr[-1].cleanup_vtable),dtor_flags);
  return;
}

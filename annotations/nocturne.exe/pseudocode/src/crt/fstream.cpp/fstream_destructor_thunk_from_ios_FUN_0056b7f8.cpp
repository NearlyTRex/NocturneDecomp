// Name: crt_fstream.cpp_fstream_destructor_thunk_from_ios_FUN_0056b7f8
// Address: 0056b7f8
// Address Range: [[0056b7f8, 0056b80f]]
// Convention: __cdecl
// Signature: void __cdecl crt_fstream_cpp_fstream_destructor_thunk_from_ios_FUN_0056b7f8(ios *this_ptr,int dtor_flags)

#include "nocturne.h"

void __cdecl crt_fstream_cpp_fstream_destructor_thunk_from_ios_FUN_0056b7f8(ios *this_ptr,int dtor_flags)

{
  crt_fstream_cpp_fstreambase_dtor_FUN_0056b810
            ((fstreambase *)((int)this_ptr - (int)this_ptr[-1].cleanup_vtable),dtor_flags);
  return;
}

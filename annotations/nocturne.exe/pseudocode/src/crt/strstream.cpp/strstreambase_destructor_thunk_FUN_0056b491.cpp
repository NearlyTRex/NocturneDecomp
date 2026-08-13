// Name: crt_strstream.cpp_strstreambase_destructor_thunk_FUN_0056b491
// Address: 0056b491
// Address Range: [[0056b491, 0056b4a8]]
// Convention: __cdecl
// Signature: void __cdecl crt_strstream_cpp_strstreambase_destructor_thunk_FUN_0056b491(ios *this_ptr,int dtor_flags)

#include "nocturne.h"

void __cdecl crt_strstream_cpp_strstreambase_destructor_thunk_FUN_0056b491(ios *this_ptr,int dtor_flags)

{
  crt_strstream_cpp_strstreambase_dtor_FUN_0056b5ad
            ((strstreambase *)((int)this_ptr - (int)this_ptr[-1].cleanup_vtable),dtor_flags);
  return;
}

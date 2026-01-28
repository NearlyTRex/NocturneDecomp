// Name: crt_fstream.cpp_fstream_destructor_thunk_from_ios_FUN_006064f1
// Address: 006064f1
// Address Range: [[006064f1, 00606508]]
// Convention: __cdecl
// Signature: void __cdecl crt_fstream_cpp_fstream_destructor_thunk_from_ios_FUN_006064f1(ios *this_ptr,int dtor_flags)

#include "nocturne.h"

void __cdecl
crt_fstream_cpp_fstream_destructor_thunk_from_ios_FUN_006064f1(ios *this_ptr,int dtor_flags)

{
  uint unaff_retaddr;
  
  crt_fstream_cpp_fstreambase_dtor_FUN_00606509
            ((fstreambase *)((int)this_ptr - (int)this_ptr[-1].cleanup_vtable),dtor_flags,
             unaff_retaddr,(uint)this_ptr);
  return;
}

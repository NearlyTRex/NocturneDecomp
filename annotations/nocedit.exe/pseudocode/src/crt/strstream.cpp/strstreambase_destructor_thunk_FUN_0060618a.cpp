// Name: crt_strstream.cpp_strstreambase_destructor_thunk_FUN_0060618a
// Address: 0060618a
// Address Range: [[0060618a, 006061a1]]
// Convention: __cdecl
// Signature: void __cdecl crt_strstream_cpp_strstreambase_destructor_thunk_FUN_0060618a(ios *this_ptr,int dtor_flags)

#include "nocturne.h"

void __cdecl
crt_strstream_cpp_strstreambase_destructor_thunk_FUN_0060618a(ios *this_ptr,int dtor_flags)

{
  uint unaff_retaddr;
  
  crt_strstream_cpp_strstreambase_dtor_FUN_006062a6
            ((strstreambase *)((int)this_ptr - (int)this_ptr[-1].cleanup_vtable),dtor_flags,
             unaff_retaddr,(uint)this_ptr);
  return;
}

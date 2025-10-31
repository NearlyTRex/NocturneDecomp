// Name: crt_strstream.cpp_strstreambase_destructor_thunk_FUN_0060618a
// Address: 0060618a
// Address Range: [[0060618a, 006061a1]]
// Convention: __cdecl
// Signature: void crt_strstream.cpp_strstreambase_destructor_thunk_FUN_0060618a(ios * this_ptr, int dtor_flags)
// Function calls:
//   crt_strstream.cpp_strstreambase_dtor_FUN_006062a6

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


// Assembly code:
// 0060618a: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_strstream.cpp_strstreambase_destructor_thunk_FUN_0060618a
//   XREF to: Stack[0x4] (READ)
// 0060618e: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00606192: MOV EDX,dword ptr [EAX + -0x4]
// 00606195: PUSH ECX
// 00606196: SUB EAX,EDX
// 00606198: PUSH EAX
// 00606199: CALL crt_strstream.cpp_strstreambase_dtor_FUN_006062a6
//   XREF to: 006062a6 (UNCONDITIONAL_CALL)
// 0060619e: ADD ESP,0x8
// 006061a1: RET

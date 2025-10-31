// Name: crt_fstream.cpp_ofstream_destructor_thunk_from_ios_FUN_005ff7a4
// Address: 005ff7a4
// Address Range: [[005ff7a4, 005ff7bb]]
// Convention: __cdecl
// Signature: void crt_fstream.cpp_ofstream_destructor_thunk_from_ios_FUN_005ff7a4(ios * this_ptr, int dtor_flags)
// Function calls:
//   crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc

#include "nocturne.h"

void __cdecl
crt_fstream_cpp_ofstream_destructor_thunk_from_ios_FUN_005ff7a4(ios *this_ptr,int dtor_flags)

{
  uint unaff_retaddr;
  
  crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc
            ((ofstream *)((int)this_ptr - (int)this_ptr[-1].cleanup_vtable),dtor_flags,unaff_retaddr
             ,(uint)this_ptr,dtor_flags);
  return;
}


// Assembly code:
// 005ff7a4: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_fstream.cpp_ofstream_destructor_thunk_from_ios_FUN_005ff7a4
//   XREF to: Stack[0x4] (READ)
// 005ff7a8: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005ff7ac: MOV EDX,dword ptr [EAX + -0x4]
// 005ff7af: PUSH ECX
// 005ff7b0: SUB EAX,EDX
// 005ff7b2: PUSH EAX
// 005ff7b3: CALL crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc
//   XREF to: 005ff7bc (UNCONDITIONAL_CALL)
// 005ff7b8: ADD ESP,0x8
// 005ff7bb: RET

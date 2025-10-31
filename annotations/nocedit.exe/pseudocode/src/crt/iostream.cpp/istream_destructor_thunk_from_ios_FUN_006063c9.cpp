// Name: crt_iostream.cpp_istream_destructor_thunk_from_ios_FUN_006063c9
// Address: 006063c9
// Address Range: [[006063c9, 006063e0]]
// Convention: __cdecl
// Signature: void crt_iostream.cpp_istream_destructor_thunk_from_ios_FUN_006063c9(ios * this_ptr, int dtor_flags)
// Function calls:
//   crt_iostream.cpp_istream_dtor_FUN_006063e1

#include "nocturne.h"

void __cdecl
crt_iostream_cpp_istream_destructor_thunk_from_ios_FUN_006063c9(ios *this_ptr,int dtor_flags)

{
  uint unaff_retaddr;
  
  crt_iostream_cpp_istream_dtor_FUN_006063e1
            ((istream *)((int)this_ptr - (int)this_ptr[-1].cleanup_vtable),dtor_flags,unaff_retaddr)
  ;
  return;
}


// Assembly code:
// 006063c9: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_iostream.cpp_istream_destructor_thunk_from_ios_FUN_006063c9
//   XREF to: Stack[0x4] (READ)
// 006063cd: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 006063d1: MOV EDX,dword ptr [EAX + -0x4]
// 006063d4: PUSH ECX
// 006063d5: SUB EAX,EDX
// 006063d7: PUSH EAX
// 006063d8: CALL crt_iostream.cpp_istream_dtor_FUN_006063e1
//   XREF to: 006063e1 (UNCONDITIONAL_CALL)
// 006063dd: ADD ESP,0x8
// 006063e0: RET

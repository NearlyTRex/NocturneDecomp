// Name: crt_iostream.cpp_ostream_destructor_thunk_FUN_006061e4
// Address: 006061e4
// Address Range: [[006061e4, 006061fb]]
// Convention: __cdecl
// Signature: void crt_iostream.cpp_ostream_destructor_thunk_FUN_006061e4(ios * this_ptr, int dtor_flags)
// Function calls:
//   crt_iostream.cpp_ostream_dtor_FUN_00606231

#include "nocturne.h"

void __cdecl crt_iostream_cpp_ostream_destructor_thunk_FUN_006061e4(ios *this_ptr,int dtor_flags)

{
  uint unaff_retaddr;
  
  crt_iostream_cpp_ostream_dtor_FUN_00606231
            ((ostream *)((int)this_ptr - (int)this_ptr[-1].cleanup_vtable),dtor_flags,unaff_retaddr)
  ;
  return;
}


// Assembly code:
// 006061e4: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_iostream.cpp_ostream_destructor_thunk_FUN_006061e4
//   XREF to: Stack[0x4] (READ)
// 006061e8: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 006061ec: MOV EDX,dword ptr [EAX + -0x4]
// 006061ef: PUSH ECX
// 006061f0: SUB EAX,EDX
// 006061f2: PUSH EAX
// 006061f3: CALL crt_iostream.cpp_ostream_dtor_FUN_00606231
//   XREF to: 00606231 (UNCONDITIONAL_CALL)
// 006061f8: ADD ESP,0x8
// 006061fb: RET

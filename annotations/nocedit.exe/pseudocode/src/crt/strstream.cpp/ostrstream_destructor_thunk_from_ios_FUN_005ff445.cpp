// Name: crt_strstream.cpp_ostrstream_destructor_thunk_from_ios_FUN_005ff445
// Address: 005ff445
// Address Range: [[005ff445, 005ff45c]]
// Convention: __cdecl
// Signature: void crt_strstream.cpp_ostrstream_destructor_thunk_from_ios_FUN_005ff445(ios * this_ptr, int dtor_flags)
// Function calls:
//   crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a

#include "nocturne.h"

void __cdecl
crt_strstream_cpp_ostrstream_destructor_thunk_from_ios_FUN_005ff445(ios *this_ptr,int dtor_flags)

{
  crt_strstream_cpp_ostrstream_dtor_FUN_005ff48a
            ((ostrstream *)((int)this_ptr - (int)this_ptr[-1].cleanup_vtable),dtor_flags);
  return;
}


// Assembly code:
// 005ff445: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_strstream.cpp_ostrstream_destructor_thunk_from_ios_FUN_005ff445
//   XREF to: Stack[0x4] (READ)
// 005ff449: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005ff44d: MOV EDX,dword ptr [EAX + -0x4]
// 005ff450: PUSH ECX
// 005ff451: SUB EAX,EDX
// 005ff453: PUSH EAX
// 005ff454: CALL crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a
//   XREF to: 005ff48a (UNCONDITIONAL_CALL)
// 005ff459: ADD ESP,0x8
// 005ff45c: RET

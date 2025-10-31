// Name: crt_strstream.cpp_istrstream_destructor_thunk_from_ios_FUN_005ff5b2
// Address: 005ff5b2
// Address Range: [[005ff5b2, 005ff5c9]]
// Convention: __cdecl
// Signature: void crt_strstream.cpp_istrstream_destructor_thunk_from_ios_FUN_005ff5b2(ios * this_ptr, int dtor_flags)
// Function calls:
//   crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca

#include "nocturne.h"

void __cdecl
crt_strstream_cpp_istrstream_destructor_thunk_from_ios_FUN_005ff5b2(ios *this_ptr,int dtor_flags)

{
  crt_strstream_cpp_istrstream_dtor_FUN_005ff5ca
            ((istrstream *)((int)this_ptr - (int)this_ptr[-1].cleanup_vtable),dtor_flags);
  return;
}


// Assembly code:
// 005ff5b2: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_strstream.cpp_istrstream_destructor_thunk_from_ios_FUN_005ff5b2
//   XREF to: Stack[0x4] (READ)
// 005ff5b6: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005ff5ba: MOV EDX,dword ptr [EAX + -0x4]
// 005ff5bd: PUSH ECX
// 005ff5be: SUB EAX,EDX
// 005ff5c0: PUSH EAX
// 005ff5c1: CALL crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca
//   XREF to: 005ff5ca (UNCONDITIONAL_CALL)
// 005ff5c6: ADD ESP,0x8
// 005ff5c9: RET

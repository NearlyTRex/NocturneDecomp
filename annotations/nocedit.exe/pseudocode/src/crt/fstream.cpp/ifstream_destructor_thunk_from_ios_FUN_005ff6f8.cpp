// Name: crt_fstream.cpp_ifstream_destructor_thunk_from_ios_FUN_005ff6f8
// Address: 005ff6f8
// Address Range: [[005ff6f8, 005ff70f]]
// Convention: __cdecl
// Signature: void crt_fstream.cpp_ifstream_destructor_thunk_from_ios_FUN_005ff6f8(ios * this_ptr, int dtor_flags)
// Function calls:
//   crt_fstream.cpp_ifstream_dtor_FUN_005ff856

#include "nocturne.h"

void __cdecl
crt_fstream_cpp_ifstream_destructor_thunk_from_ios_FUN_005ff6f8(ios *this_ptr,int dtor_flags)

{
  uint unaff_retaddr;
  
  crt_fstream_cpp_ifstream_dtor_FUN_005ff856
            ((ifstream *)((int)this_ptr - (int)this_ptr[-1].cleanup_vtable),dtor_flags,unaff_retaddr
             ,(uint)this_ptr,dtor_flags);
  return;
}


// Assembly code:
// 005ff6f8: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_fstream.cpp_ifstream_destructor_thunk_from_ios_FUN_005ff6f8
//   XREF to: Stack[0x4] (READ)
// 005ff6fc: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005ff700: MOV EDX,dword ptr [EAX + -0x4]
// 005ff703: PUSH ECX
// 005ff704: SUB EAX,EDX
// 005ff706: PUSH EAX
// 005ff707: CALL crt_fstream.cpp_ifstream_dtor_FUN_005ff856
//   XREF to: 005ff856 (UNCONDITIONAL_CALL)
// 005ff70c: ADD ESP,0x8
// 005ff70f: RET

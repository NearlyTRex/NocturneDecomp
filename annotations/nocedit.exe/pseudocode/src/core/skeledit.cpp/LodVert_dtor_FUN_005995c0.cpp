// Name: core_skeledit.cpp_LodVert_dtor_FUN_005995c0
// Address: 005995c0
// Address Range: [[005995c0, 005995ce]]
// Convention: __cdecl
// Signature: CLodVert * core_skeledit.cpp_LodVert_dtor_FUN_005995c0(CLodVert * this_ptr, CLodVert * other, CLodVert * other2)
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

CLodVert * __cdecl
core_skeledit_cpp_LodVert_dtor_FUN_005995c0(CLodVert *this_ptr,CLodVert *other,CLodVert *other2)

{
  crt_stack_c_stack_probe_FUN_005ff9f3(4);
  return other2;
}


// Assembly code:
// 005995c0: PUSH 0x4
//   Label: core_skeledit.cpp_LodVert_dtor_FUN_005995c0
// 005995c5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 005995ca: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005995ce: RET

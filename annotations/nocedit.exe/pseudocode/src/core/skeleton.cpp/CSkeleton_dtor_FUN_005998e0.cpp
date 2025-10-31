// Name: core_skeleton.cpp_CSkeleton_dtor_FUN_005998e0
// Address: 005998e0
// Address Range: [[005998e0, 0059990f]]
// Convention: __cdecl
// Signature: CSkeleton * core_skeleton.cpp_CSkeleton_dtor_FUN_005998e0(CSkeleton * this_ptr)
// Function calls:
//   core_curtain.cpp_FUN_0044baf0
//   core_skeleton.cpp_CSkeleton_free_FUN_00599a50
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: this_ptr */

CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_dtor_FUN_005998e0(CSkeleton *this_ptr)

{
  int iVar1;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x10);
  core_skeleton_cpp_CSkeleton_free_FUN_00599a50();
  iVar1 = core_curtain_cpp_FUN_0044baf0();
  return (CSkeleton *)(iVar1 + -0x2937c);
}


// Assembly code:
// 005998e0: PUSH 0x10
//   Label: core_skeleton.cpp_CSkeleton_dtor_FUN_005998e0
// 005998e5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 005998ea: PUSH EBX
// 005998eb: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005998ef: PUSH EBX
// 005998f0: CALL core_skeleton.cpp_CSkeleton_free_FUN_00599a50
//   XREF to: 00599a50 (UNCONDITIONAL_CALL)
// 005998f5: ADD ESP,0x4
// 005998f8: PUSH 0x0
// 005998fa: ADD EBX,0x2937c
// 00599900: PUSH EBX
// 00599901: CALL core_curtain.cpp_FUN_0044baf0
//   XREF to: 0044baf0 (UNCONDITIONAL_CALL)
// 00599906: ADD ESP,0x8
// 00599909: SUB EAX,0x2937c
// 0059990e: POP EBX
// 0059990f: RET

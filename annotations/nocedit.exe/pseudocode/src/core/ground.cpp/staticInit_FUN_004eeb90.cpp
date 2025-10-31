// Name: core_ground.cpp_staticInit_FUN_004eeb90
// Address: 004eeb90
// Address Range: [[004eeb90, 004eebb4]]
// Convention: __cdecl
// Signature: void core_ground.cpp_staticInit_FUN_004eeb90(void)
// Globals:
//   WatcomStaticDestructorNode g_CGroundDestructorNode
//   CGround g_CGroundInstance
// Function calls:
//   core_ground.cpp_CGround_ctor_FUN_004eee80
//   crt_stdlib.c_atexit_FUN_005ff060

#include "nocturne.h"

void __cdecl core_ground_cpp_staticInit_FUN_004eeb90(void)

{
  core_ground_cpp_CGround_ctor_FUN_004eee80(&g_CGroundInstance,0x100,0x100);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CGroundDestructorNode);
  return;
}


// Assembly code:
// 004eeb90: PUSH 0x100
//   Label: core_ground.cpp_staticInit_FUN_004eeb90
// 004eeb95: PUSH 0x100
// 004eeb9a: PUSH 0x2db8668
//   XREF to: 02db8668 (DATA)
// 004eeb9f: CALL core_ground.cpp_CGround_ctor_FUN_004eee80
//   XREF to: 004eee80 (UNCONDITIONAL_CALL)
// 004eeba4: ADD ESP,0xc
// 004eeba7: PUSH 0x67cbb8
//   XREF to: 0067cbb8 (DATA)
// 004eebac: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004eebb1: ADD ESP,0x4
// 004eebb4: RET

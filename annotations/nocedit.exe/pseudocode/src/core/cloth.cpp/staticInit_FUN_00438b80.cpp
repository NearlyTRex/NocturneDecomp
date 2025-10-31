// Name: core_cloth.cpp_staticInit_FUN_00438b80
// Address: 00438b80
// Address Range: [[00438b80, 00438b9a]]
// Convention: __cdecl
// Signature: void core_cloth.cpp_staticInit_FUN_00438b80(void)
// Globals:
//   WatcomStaticDestructorNode g_CDeformableModelInstanceDestructorNode
//   CDeformableModelInstance g_CDeformableModelInstanceInstance
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
//   crt_stdlib.c_atexit_FUN_005ff060

#include "nocturne.h"

void __cdecl core_cloth_cpp_staticInit_FUN_00438b80(void)

{
  core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(&g_CDeformableModelInstanceInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CDeformableModelInstanceDestructorNode);
  return;
}


// Assembly code:
// 00438b80: PUSH 0x838e58
//   Label: core_cloth.cpp_staticInit_FUN_00438b80
//   XREF to: 00838e58 (DATA)
// 00438b85: CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
//   XREF to: 0059ddc0 (UNCONDITIONAL_CALL)
// 00438b8a: ADD ESP,0x4
// 00438b8d: PUSH 0x66e808
//   XREF to: 0066e808 (DATA)
// 00438b92: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 00438b97: ADD ESP,0x4
// 00438b9a: RET

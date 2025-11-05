// Name: core_morph.cpp_FUN_0052aa30
// Address: 0052aa30
// Address Range: [[0052aa30, 0052aa7b]]
// Convention: __cdecl
// Signature: undefined core_morph.cpp_FUN_0052aa30()
// Cross-references:
//   core_morph.cpp_FUN_0052b600 (0052b600) at 0052b627 [UNCONDITIONAL_CALL]
// Function calls:
//   core_morph.cpp_CMorphModel_animate_FUN_0052a920
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000

#include "nocturne.h"

void __cdecl
core_morph_cpp_FUN_0052aa30
          (undefined4 param_1,undefined4 param_2,CDeformableModelInstance *param_3,
          CMorphModel *param_4)

{
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(param_3);
  core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(param_3,0);
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(param_3);
  core_morph_cpp_CMorphModel_animate_FUN_0052a920(param_4);
  return;
}


// Assembly code:
// 0052aa30: PUSH EBX
//   Label: core_morph.cpp_FUN_0052aa30
// 0052aa31: PUSH ESI
// 0052aa32: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0052aa36: PUSH EBX
// 0052aa37: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
//   XREF to: 0059e000 (UNCONDITIONAL_CALL)
// 0052aa3c: ADD ESP,0x4
// 0052aa3f: PUSH 0x0
// 0052aa41: PUSH EBX
// 0052aa42: CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
//   XREF to: 005a01d0 (UNCONDITIONAL_CALL)
// 0052aa47: ADD ESP,0x8
// 0052aa4a: PUSH EBX
// 0052aa4b: MOV ESI,dword ptr [EBX + 0x2230]
// 0052aa51: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 0052aa56: ADD ESP,0x4
// 0052aa59: MOV EDX,dword ptr [EAX + ESI*0x4 + 0x2c]
// 0052aa5d: PUSH EDX
// 0052aa5e: PUSH 0x0
// 0052aa60: MOV ECX,dword ptr [EBX + 0x2234]
// 0052aa66: PUSH ECX
// 0052aa67: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0052aa6b: PUSH EBX
// 0052aa6c: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0052aa70: PUSH ESI
// 0052aa71: CALL core_morph.cpp_CMorphModel_animate_FUN_0052a920
//   XREF to: 0052a920 (UNCONDITIONAL_CALL)
// 0052aa76: ADD ESP,0x14
// 0052aa79: POP ESI
// 0052aa7a: POP EBX
// 0052aa7b: RET

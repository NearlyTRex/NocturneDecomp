// Name: core_health.cpp_FUN_004f1e60
// Address: 004f1e60
// Address Range: [[004f1e60, 004f1ec5]]
// Convention: unknown
// Signature: undefined core_health.cpp_FUN_004f1e60()
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20

#include "nocturne.h"

/* Signature: undefined1 actors_other_health.cpp_FUN_004f1e60(undefined4 param_1) */

int core_health_cpp_FUN_004f1e60(void)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float fStack_14;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  this_ptr = (*((in_stack_00000004->metadata).vtable)->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffe4);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
    return 0;
  }
  fStack_14 = 7.266016e-39;
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),0.0,-1);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return iVar1;
}


// Assembly code:
// 004f1e60: PUSH EBX
//   Label: core_health.cpp_FUN_004f1e60
// 004f1e61: PUSH ESI
// 004f1e62: SUB ESP,0x18
// 004f1e65: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 004f1e69: PUSH EBX
// 004f1e6a: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 004f1e6f: ADD ESP,0x4
// 004f1e72: MOV EAX,ESP
// 004f1e74: PUSH EAX
// 004f1e75: MOV ESI,dword ptr [EBX + 0x154]
// 004f1e7b: PUSH EBX
// 004f1e7c: CALL dword ptr [ESI + 0x14]
// 004f1e7f: ADD ESP,0x8
// 004f1e82: PUSH EAX
// 004f1e83: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 004f1e88: ADD ESP,0x4
// 004f1e8b: MOV ESI,EAX
// 004f1e8d: TEST EAX,EAX
// 004f1e8f: JNZ 0x004f1ea2
//   XREF to: 004f1ea2 (CONDITIONAL_JUMP)
// 004f1e91: PUSH EBX
// 004f1e92: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 004f1e97: ADD ESP,0x4
// 004f1e9a: MOV EAX,ESI
// 004f1e9c: ADD ESP,0x18
// 004f1e9f: POP ESI
// 004f1ea0: POP EBX
// 004f1ea1: RET
// 004f1ea2: PUSH -0x1
//   Label: LAB_004f1ea2
// 004f1ea4: LEA EAX,[EBX + 0x158]
// 004f1eaa: PUSH 0x0
// 004f1eac: PUSH EAX
// 004f1ead: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 004f1eb2: ADD ESP,0xc
// 004f1eb5: PUSH EBX
// 004f1eb6: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 004f1ebb: ADD ESP,0x4
// 004f1ebe: MOV EAX,ESI
// 004f1ec0: ADD ESP,0x18
// 004f1ec3: POP ESI
// 004f1ec4: POP EBX
// 004f1ec5: RET

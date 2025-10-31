// Name: core_pendulum.cpp_FUN_0054a2f0
// Address: 0054a2f0
// Address Range: [[0054a2f0, 0054a355]]
// Convention: unknown
// Signature: undefined core_pendulum.cpp_FUN_0054a2f0()
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20

#include "nocturne.h"

/* Signature: undefined1 actors_other_pendulum.cpp_FUN_0054a2f0(undefined4 param_1) */

int core_pendulum_cpp_FUN_0054a2f0(void)

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
  fStack_14 = 7.772748e-39;
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),0.0,-1);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return iVar1;
}


// Assembly code:
// 0054a2f0: PUSH EBX
//   Label: core_pendulum.cpp_FUN_0054a2f0
// 0054a2f1: PUSH ESI
// 0054a2f2: SUB ESP,0x18
// 0054a2f5: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0054a2f9: PUSH EBX
// 0054a2fa: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 0054a2ff: ADD ESP,0x4
// 0054a302: MOV EAX,ESP
// 0054a304: PUSH EAX
// 0054a305: MOV ESI,dword ptr [EBX + 0x154]
// 0054a30b: PUSH EBX
// 0054a30c: CALL dword ptr [ESI + 0x14]
// 0054a30f: ADD ESP,0x8
// 0054a312: PUSH EAX
// 0054a313: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 0054a318: ADD ESP,0x4
// 0054a31b: MOV ESI,EAX
// 0054a31d: TEST EAX,EAX
// 0054a31f: JNZ 0x0054a332
//   XREF to: 0054a332 (CONDITIONAL_JUMP)
// 0054a321: PUSH EBX
// 0054a322: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 0054a327: ADD ESP,0x4
// 0054a32a: MOV EAX,ESI
// 0054a32c: ADD ESP,0x18
// 0054a32f: POP ESI
// 0054a330: POP EBX
// 0054a331: RET
// 0054a332: PUSH -0x1
//   Label: LAB_0054a332
// 0054a334: LEA EAX,[EBX + 0x158]
// 0054a33a: PUSH 0x0
// 0054a33c: PUSH EAX
// 0054a33d: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 0054a342: ADD ESP,0xc
// 0054a345: PUSH EBX
// 0054a346: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 0054a34b: ADD ESP,0x4
// 0054a34e: MOV EAX,ESI
// 0054a350: ADD ESP,0x18
// 0054a353: POP ESI
// 0054a354: POP EBX
// 0054a355: RET

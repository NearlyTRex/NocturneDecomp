// Name: core_keyactor.cpp_FUN_005017c0
// Address: 005017c0
// Address Range: [[005017c0, 00501825]]
// Convention: unknown
// Signature: undefined core_keyactor.cpp_FUN_005017c0()
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20

#include "nocturne.h"

/* Signature: undefined1 actors_other_keyactor.cpp_FUN_005017c0(undefined4 param_1) */

int core_keyactor_cpp_FUN_005017c0(void)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float fStack_14;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  this_ptr = (*in_stack_00000004->vtable->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffe4);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
    return 0;
  }
  fStack_14 = 7.355474e-39;
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),0.0,-1);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return iVar1;
}


// Assembly code:
// 005017c0: PUSH EBX
//   Label: core_keyactor.cpp_FUN_005017c0
// 005017c1: PUSH ESI
// 005017c2: SUB ESP,0x18
// 005017c5: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 005017c9: PUSH EBX
// 005017ca: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 005017cf: ADD ESP,0x4
// 005017d2: MOV EAX,ESP
// 005017d4: PUSH EAX
// 005017d5: MOV ESI,dword ptr [EBX + 0x154]
// 005017db: PUSH EBX
// 005017dc: CALL dword ptr [ESI + 0x14]
// 005017df: ADD ESP,0x8
// 005017e2: PUSH EAX
// 005017e3: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 005017e8: ADD ESP,0x4
// 005017eb: MOV ESI,EAX
// 005017ed: TEST EAX,EAX
// 005017ef: JNZ 0x00501802
//   XREF to: 00501802 (CONDITIONAL_JUMP)
// 005017f1: PUSH EBX
// 005017f2: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 005017f7: ADD ESP,0x4
// 005017fa: MOV EAX,ESI
// 005017fc: ADD ESP,0x18
// 005017ff: POP ESI
// 00501800: POP EBX
// 00501801: RET
// 00501802: PUSH -0x1
//   Label: LAB_00501802
// 00501804: LEA EAX,[EBX + 0x158]
// 0050180a: PUSH 0x0
// 0050180c: PUSH EAX
// 0050180d: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 00501812: ADD ESP,0xc
// 00501815: PUSH EBX
// 00501816: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 0050181b: ADD ESP,0x4
// 0050181e: MOV EAX,ESI
// 00501820: ADD ESP,0x18
// 00501823: POP ESI
// 00501824: POP EBX
// 00501825: RET

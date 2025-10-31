// Name: core_lever.cpp_FUN_00504cf0
// Address: 00504cf0
// Address Range: [[00504cf0, 00504d7b]]
// Convention: unknown
// Signature: undefined core_lever.cpp_FUN_00504cf0()
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20

#include "nocturne.h"

/* Signature: undefined1 actors_other_lever.cpp_FUN_00504cf0(undefined4 param_1) */

int core_lever_cpp_FUN_00504cf0(void)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  CKeyFramedModel *pCVar2;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  this_ptr = (*((in_stack_00000004->metadata).vtable)->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffd4);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
    return 0;
  }
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),
             (float)(pCVar2->frame_count + -1) * (float)in_stack_00000004[2].location.area_id,
             unaff_EBP);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return iVar1;
}


// Assembly code:
// 00504cf0: PUSH EBX
//   Label: core_lever.cpp_FUN_00504cf0
// 00504cf1: PUSH ESI
// 00504cf2: PUSH EDI
// 00504cf3: PUSH EBP
// 00504cf4: MOV EBP,ESP
// 00504cf6: SUB ESP,0x1c
// 00504cf9: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00504cfc: PUSH EBX
// 00504cfd: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 00504d02: ADD ESP,0x4
// 00504d05: LEA ESI,[EBP + -0x1c]
//   XREF to: Stack[-0x2c] (DATA)
// 00504d08: PUSH ESI
// 00504d09: MOV EAX,dword ptr [EBX + 0x154]
// 00504d0f: PUSH EBX
// 00504d10: CALL dword ptr [EAX + 0x14]
// 00504d13: ADD ESP,0x8
// 00504d16: PUSH EAX
// 00504d17: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 00504d1c: ADD ESP,0x4
// 00504d1f: MOV EDI,EAX
// 00504d21: TEST EAX,EAX
// 00504d23: JNZ 0x00504d37
//   XREF to: 00504d37 (CONDITIONAL_JUMP)
// 00504d25: PUSH EBX
// 00504d26: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 00504d2b: ADD ESP,0x4
// 00504d2e: MOV EAX,EDI
// 00504d30: MOV ESP,EBP
// 00504d32: POP EBP
// 00504d33: POP EDI
// 00504d34: POP ESI
// 00504d35: POP EBX
// 00504d36: RET
// 00504d37: PUSH -0x1
//   Label: LAB_00504d37
// 00504d39: LEA ESI,[EBX + 0x158]
// 00504d3f: PUSH ESI
// 00504d40: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00504d45: MOV EAX,dword ptr [EAX + 0x100]
// 00504d4b: DEC EAX
// 00504d4c: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00504d4f: ADD ESP,0x4
// 00504d52: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00504d55: FMUL float ptr [EBX + 0x2dc]
// 00504d5b: SUB ESP,0x4
// 00504d5e: FSTP float ptr [ESP]
// 00504d61: PUSH ESI
// 00504d62: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 00504d67: ADD ESP,0xc
// 00504d6a: PUSH EBX
// 00504d6b: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 00504d70: ADD ESP,0x4
// 00504d73: MOV EAX,EDI
// 00504d75: MOV ESP,EBP
// 00504d77: POP EBP
// 00504d78: POP EDI
// 00504d79: POP ESI
// 00504d7a: POP EBX
// 00504d7b: RET

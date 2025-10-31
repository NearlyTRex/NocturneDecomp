// Name: core_spike.cpp_FUN_005b8730
// Address: 005b8730
// Address Range: [[005b8730, 005b8795]]
// Convention: unknown
// Signature: undefined core_spike.cpp_FUN_005b8730()
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20

#include "nocturne.h"

/* Signature: undefined1 actors_other_spike.cpp_FUN_005b8730(undefined4 param_1) */

int core_spike_cpp_FUN_005b8730(void)

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
  fStack_14 = 8.405641e-39;
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),0.0,-1);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return iVar1;
}


// Assembly code:
// 005b8730: PUSH EBX
//   Label: core_spike.cpp_FUN_005b8730
// 005b8731: PUSH ESI
// 005b8732: SUB ESP,0x18
// 005b8735: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 005b8739: PUSH EBX
// 005b873a: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 005b873f: ADD ESP,0x4
// 005b8742: MOV EAX,ESP
// 005b8744: PUSH EAX
// 005b8745: MOV ESI,dword ptr [EBX + 0x154]
// 005b874b: PUSH EBX
// 005b874c: CALL dword ptr [ESI + 0x14]
// 005b874f: ADD ESP,0x8
// 005b8752: PUSH EAX
// 005b8753: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 005b8758: ADD ESP,0x4
// 005b875b: MOV ESI,EAX
// 005b875d: TEST EAX,EAX
// 005b875f: JNZ 0x005b8772
//   XREF to: 005b8772 (CONDITIONAL_JUMP)
// 005b8761: PUSH EBX
// 005b8762: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 005b8767: ADD ESP,0x4
// 005b876a: MOV EAX,ESI
// 005b876c: ADD ESP,0x18
// 005b876f: POP ESI
// 005b8770: POP EBX
// 005b8771: RET
// 005b8772: PUSH -0x1
//   Label: LAB_005b8772
// 005b8774: LEA EAX,[EBX + 0x158]
// 005b877a: PUSH 0x0
// 005b877c: PUSH EAX
// 005b877d: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 005b8782: ADD ESP,0xc
// 005b8785: PUSH EBX
// 005b8786: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 005b878b: ADD ESP,0x4
// 005b878e: MOV EAX,ESI
// 005b8790: ADD ESP,0x18
// 005b8793: POP ESI
// 005b8794: POP EBX
// 005b8795: RET

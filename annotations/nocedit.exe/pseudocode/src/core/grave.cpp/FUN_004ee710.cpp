// Name: core_grave.cpp_FUN_004ee710
// Address: 004ee710
// Address Range: [[004ee710, 004ee785]]
// Convention: unknown
// Signature: undefined core_grave.cpp_FUN_004ee710()
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20

#include "nocturne.h"

/* Signature: undefined1 actors_other_grave.cpp_FUN_004ee710(undefined4 param_1, undefined4 param_2)
    */

void core_grave_cpp_FUN_004ee710(void)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  float fStack_10;
  
  if (in_stack_00000008 != 0) {
    if (in_stack_00000004[2].location.area_id == 0) {
      if (in_stack_00000004[2].orient.pitch != 2.8026e-45) {
        return;
      }
      in_stack_00000004[2].location.area_id = 1;
    }
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
    this_ptr = (*in_stack_00000004->vtable->getBoundingBox)
                         (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffe8);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
    if (iVar1 != 0) {
      fStack_10 = 7.2462e-39;
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),
                 in_stack_00000004[2].location.position.y,-1);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  }
  return;
}


// Assembly code:
// 004ee710: PUSH EBX
//   Label: core_grave.cpp_FUN_004ee710
// 004ee711: SUB ESP,0x18
// 004ee714: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004ee718: CMP dword ptr [ESP + 0x24],0x0
//   XREF to: Stack[0x8] (READ)
// 004ee71d: JZ 0x004ee781
//   XREF to: 004ee781 (CONDITIONAL_JUMP)
// 004ee71f: CMP dword ptr [EBX + 0x2dc],0x0
// 004ee726: JNZ 0x004ee73b
//   XREF to: 004ee73b (CONDITIONAL_JUMP)
// 004ee728: CMP dword ptr [EBX + 0x2e0],0x2
// 004ee72f: JNZ 0x004ee781
//   XREF to: 004ee781 (CONDITIONAL_JUMP)
// 004ee731: MOV dword ptr [EBX + 0x2dc],0x1
// 004ee73b: PUSH EBX
//   Label: LAB_004ee73b
// 004ee73c: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 004ee741: ADD ESP,0x4
// 004ee744: MOV EDX,ESP
// 004ee746: PUSH EDX
// 004ee747: MOV EAX,dword ptr [EBX + 0x154]
// 004ee74d: PUSH EBX
// 004ee74e: CALL dword ptr [EAX + 0x14]
// 004ee751: ADD ESP,0x8
// 004ee754: PUSH EAX
// 004ee755: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 004ee75a: ADD ESP,0x4
// 004ee75d: TEST EAX,EAX
// 004ee75f: JZ 0x004ee778
//   XREF to: 004ee778 (CONDITIONAL_JUMP)
// 004ee761: PUSH -0x1
// 004ee763: LEA EAX,[EBX + 0x158]
// 004ee769: PUSH dword ptr [EBX + 0x2d4]
// 004ee76f: PUSH EAX
// 004ee770: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 004ee775: ADD ESP,0xc
// 004ee778: PUSH EBX
//   Label: LAB_004ee778
// 004ee779: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 004ee77e: ADD ESP,0x4
// 004ee781: ADD ESP,0x18
//   Label: LAB_004ee781
// 004ee784: POP EBX
// 004ee785: RET

// Name: core_grave.cpp_FUN_004ee680
// Address: 004ee680
// Address Range: [[004ee680, 004ee70b]]
// Convention: unknown
// Signature: undefined core_grave.cpp_FUN_004ee680()
// Globals:
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f33744
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20

#include "nocturne.h"

/* Signature: undefined1 actors_other_grave.cpp_FUN_004ee680(undefined4 param_1) */

int core_grave_cpp_FUN_004ee680(void)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float fStack_14;
  
  if ((in_stack_00000004[2].location.area_id == 0) &&
     (((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0 ||
       (in_stack_00000004[2].orient.bank == 0.0)) || (in_stack_00000004[2].orient.pitch != 0.0)))) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
    this_ptr = (*((in_stack_00000004->metadata).vtable)->getBoundingBox)
                         (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffe8);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
    if (iVar1 != 0) {
      fStack_14 = 7.246015e-39;
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),
                 in_stack_00000004[2].location.position.y,-1);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
    return iVar1;
  }
  return 0;
}


// Assembly code:
// 004ee680: PUSH EBX
//   Label: core_grave.cpp_FUN_004ee680
// 004ee681: SUB ESP,0x18
// 004ee684: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004ee688: CMP dword ptr [EBX + 0x2dc],0x0
// 004ee68f: JNZ 0x004ee705
//   XREF to: 004ee705 (CONDITIONAL_JUMP)
// 004ee695: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 004ee69a: CMP dword ptr [EAX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 004ee69e: JNZ 0x004ee6b2
//   XREF to: 004ee6b2 (CONDITIONAL_JUMP)
// 004ee6a0: CMP dword ptr [EBX + 0x2e4],0x0
// 004ee6a7: JZ 0x004ee6b2
//   XREF to: 004ee6b2 (CONDITIONAL_JUMP)
// 004ee6a9: CMP dword ptr [EBX + 0x2e0],0x0
// 004ee6b0: JZ 0x004ee705
//   XREF to: 004ee705 (CONDITIONAL_JUMP)
// 004ee6b2: PUSH ESI
//   Label: LAB_004ee6b2
// 004ee6b3: PUSH EBX
// 004ee6b4: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 004ee6b9: ADD ESP,0x4
// 004ee6bc: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x1c] (DATA)
// 004ee6c0: PUSH EAX
// 004ee6c1: MOV EDX,dword ptr [EBX + 0x154]
// 004ee6c7: PUSH EBX
// 004ee6c8: CALL dword ptr [EDX + 0x14]
// 004ee6cb: ADD ESP,0x8
// 004ee6ce: PUSH EAX
// 004ee6cf: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 004ee6d4: ADD ESP,0x4
// 004ee6d7: MOV ESI,EAX
// 004ee6d9: TEST EAX,EAX
// 004ee6db: JZ 0x004ee6f4
//   XREF to: 004ee6f4 (CONDITIONAL_JUMP)
// 004ee6dd: PUSH -0x1
// 004ee6df: LEA EAX,[EBX + 0x158]
// 004ee6e5: PUSH dword ptr [EBX + 0x2d4]
// 004ee6eb: PUSH EAX
// 004ee6ec: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 004ee6f1: ADD ESP,0xc
// 004ee6f4: PUSH EBX
//   Label: LAB_004ee6f4
// 004ee6f5: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 004ee6fa: ADD ESP,0x4
// 004ee6fd: MOV EAX,ESI
// 004ee6ff: POP ESI
// 004ee700: ADD ESP,0x18
// 004ee703: POP EBX
// 004ee704: RET
// 004ee705: XOR EAX,EAX
//   Label: LAB_004ee705
// 004ee707: ADD ESP,0x18
// 004ee70a: POP EBX
// 004ee70b: RET

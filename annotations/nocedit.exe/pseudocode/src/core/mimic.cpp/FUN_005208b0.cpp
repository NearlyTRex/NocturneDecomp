// Name: core_mimic.cpp_FUN_005208b0
// Address: 005208b0
// Address Range: [[005208b0, 0052092d]]
// Convention: unknown
// Signature: undefined core_mimic.cpp_FUN_005208b0()
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_cloth.cpp_FUN_0043bae0
//   core_skeleton.cpp_CDeformableModelInstance_GetPtr_RotateVerts_Render_FUN_005a0150

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_mimic.cpp_FUN_005208b0(undefined4 param_1, undefined4 param_2)
    */

void core_mimic_cpp_FUN_005208b0(void)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  float fStack_18;
  CDemonActor *pCStack_14;
  float fStack_10;
  float fStack_c;
  
  if (*(int *)(in_stack_00000004[0x8d].create_event + 0x38) != 0) {
    if (in_stack_00000008 != 0) {
      in_stack_00000004[0x1a].field21_0x11c = 1;
    }
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
    this_ptr = (*((in_stack_00000004->metadata).vtable)->getBoundingBox)
                         (in_stack_00000004,(CBoundingBox3D *)&fStack_18);
    fStack_c = 7.533718e-39;
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
    if (iVar1 != 0) {
      fStack_c = -NAN;
      fStack_10 = -NAN;
      pCStack_14 = in_stack_00000004 + 1;
      fStack_18 = 7.533756e-39;
      core_skeleton_cpp_CDeformableModelInstance_GetPtr_RotateVerts_Render_FUN_005a0150();
      core_cloth_cpp_FUN_0043bae0();
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  }
  return;
}


// Assembly code:
// 005208b0: PUSH EBX
//   Label: core_mimic.cpp_FUN_005208b0
// 005208b1: SUB ESP,0x18
// 005208b4: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005208b8: CMP dword ptr [EBX + 0xbe28],0x0
// 005208bf: JZ 0x00520929
//   XREF to: 00520929 (CONDITIONAL_JUMP)
// 005208c1: CMP dword ptr [ESP + 0x24],0x0
//   XREF to: Stack[0x8] (READ)
// 005208c6: JZ 0x005208d2
//   XREF to: 005208d2 (CONDITIONAL_JUMP)
// 005208c8: MOV dword ptr [EBX + 0x240c],0x1
// 005208d2: PUSH EBX
//   Label: LAB_005208d2
// 005208d3: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 005208d8: ADD ESP,0x4
// 005208db: MOV EAX,ESP
// 005208dd: PUSH EAX
// 005208de: MOV EDX,dword ptr [EBX + 0x154]
// 005208e4: PUSH EBX
// 005208e5: CALL dword ptr [EDX + 0x14]
// 005208e8: ADD ESP,0x8
// 005208eb: PUSH EAX
// 005208ec: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 005208f1: ADD ESP,0x4
// 005208f4: TEST EAX,EAX
// 005208f6: JZ 0x00520920
//   XREF to: 00520920 (CONDITIONAL_JUMP)
// 005208f8: PUSH 0x0
// 005208fa: PUSH 0x1
// 005208fc: PUSH -0x1
// 005208fe: PUSH -0x1
// 00520900: LEA EAX,[EBX + 0x158]
// 00520906: PUSH EAX
// 00520907: CALL core_skeleton.cpp_CDeformableModelInstance_GetPtr_RotateVerts_Render_FUN_005a0150
//   XREF to: 005a0150 (UNCONDITIONAL_CALL)
// 0052090c: ADD ESP,0x14
// 0052090f: PUSH 0x0
// 00520911: LEA EAX,[EBX + 0xbf84]
// 00520917: PUSH EAX
// 00520918: CALL core_cloth.cpp_FUN_0043bae0
//   XREF to: 0043bae0 (UNCONDITIONAL_CALL)
// 0052091d: ADD ESP,0x8
// 00520920: PUSH EBX
//   Label: LAB_00520920
// 00520921: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 00520926: ADD ESP,0x4
// 00520929: ADD ESP,0x18
//   Label: LAB_00520929
// 0052092c: POP EBX
// 0052092d: RET

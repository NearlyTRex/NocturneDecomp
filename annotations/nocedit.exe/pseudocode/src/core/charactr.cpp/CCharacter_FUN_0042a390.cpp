// Name: core_charactr.cpp_CCharacter_FUN_0042a390
// Address: 0042a390
// Address Range: [[0042a390, 0042a3e2]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042a390(CCharacter * this_ptr)
// Cross-references:
//   core_enemy.cpp_CEnemy_FUN_004a9fa0 (004a9fa0) at 004a9fc1 [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_FUN_00544b70 (00544b70) at 00544b91 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_charactr.cpp_CCharacter_FUN_00429aa0

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042a390(CCharacter *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  BADSPACEBASE *in_ESP;
  float fStack_c;
  
  if (*(int *)this_ptr->field2_0x240c == 0) {
    return;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
  this_ptr_00 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                          (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffe8);
  fStack_c = 6.119892e-39;
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 != 0) {
    core_charactr_cpp_CCharacter_FUN_00429aa0(this_ptr);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
  return;
}


// Assembly code:
// 0042a390: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042a390
// 0042a391: SUB ESP,0x18
// 0042a394: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0042a398: CMP dword ptr [EBX + 0x240c],0x0
// 0042a39f: JNZ 0x0042a3a6
//   XREF to: 0042a3a6 (CONDITIONAL_JUMP)
// 0042a3a1: ADD ESP,0x18
// 0042a3a4: POP EBX
// 0042a3a5: RET
// 0042a3a6: PUSH EBX
//   Label: LAB_0042a3a6
// 0042a3a7: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 0042a3ac: ADD ESP,0x4
// 0042a3af: MOV EDX,ESP
// 0042a3b1: PUSH EDX
// 0042a3b2: MOV EAX,dword ptr [EBX + 0x154]
// 0042a3b8: PUSH EBX
// 0042a3b9: CALL dword ptr [EAX + 0x14]
// 0042a3bc: ADD ESP,0x8
// 0042a3bf: PUSH EAX
// 0042a3c0: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 0042a3c5: ADD ESP,0x4
// 0042a3c8: TEST EAX,EAX
// 0042a3ca: JZ 0x0042a3d5
//   XREF to: 0042a3d5 (CONDITIONAL_JUMP)
// 0042a3cc: PUSH EBX
// 0042a3cd: CALL core_charactr.cpp_CCharacter_FUN_00429aa0
//   XREF to: 00429aa0 (UNCONDITIONAL_CALL)
// 0042a3d2: ADD ESP,0x4
// 0042a3d5: PUSH EBX
//   Label: LAB_0042a3d5
// 0042a3d6: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 0042a3db: ADD ESP,0x4
// 0042a3de: ADD ESP,0x18
// 0042a3e1: POP EBX
// 0042a3e2: RET

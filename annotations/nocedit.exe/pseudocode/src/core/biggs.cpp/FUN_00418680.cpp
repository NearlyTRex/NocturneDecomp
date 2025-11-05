// Name: core_biggs.cpp_FUN_00418680
// Address: 00418680
// Address Range: [[00418680, 004186f7]]
// Convention: unknown
// Signature: undefined core_biggs.cpp_FUN_00418680()
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   core_enemy.cpp_CEnemy_FUN_004a9650
//   core_morph.cpp_CMorph_getReady_FUN_0052b680
//   core_morph.cpp_FUN_0052b430
//   core_morph.cpp_FUN_0052b470
//   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_biggs.cpp_FUN_00418680(undefined4 param_1) */

void core_biggs_cpp_FUN_00418680(void)

{
  CKeyFramedModelInstance *this_ptr;
  CCharacter *pCVar1;
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_FUN_004a9650(in_stack_00000004);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450
            (&(in_stack_00000004->base_character).model);
  this_ptr = (CKeyFramedModelInstance *)
             (in_stack_00000004[1].base_character.base_actor.actor_name + 8);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(this_ptr);
  core_morph_cpp_FUN_0052b430();
  core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr);
  core_morph_cpp_FUN_0052b470();
  core_morph_cpp_CMorph_getReady_FUN_0052b680
            ((CMorph *)
             (in_stack_00000004[1].base_character.model.motion_controller.current_motion_name + 4));
  in_stack_00000004[1].base_character.model.motion_controller.in_transition = 0;
  pCVar1 = &in_stack_00000004[1].base_character;
  (pCVar1->model).motion_controller.current_motion_name[0] = '\0';
  (pCVar1->model).motion_controller.current_motion_name[1] = '\0';
  (pCVar1->model).motion_controller.current_motion_name[2] = '\0';
  (pCVar1->model).motion_controller.current_motion_name[3] = '\0';
  return;
}


// Assembly code:
// 00418680: PUSH EBX
//   Label: core_biggs.cpp_FUN_00418680
// 00418681: PUSH ESI
// 00418682: PUSH EDI
// 00418683: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00418687: PUSH EBX
// 00418688: CALL core_enemy.cpp_CEnemy_FUN_004a9650
//   XREF to: 004a9650 (UNCONDITIONAL_CALL)
// 0041868d: ADD ESP,0x4
// 00418690: LEA ESI,[EBX + 0x158]
// 00418696: PUSH ESI
// 00418697: CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 0041869c: ADD ESP,0x4
// 0041869f: LEA EDI,[EBX + 0xbebc]
// 004186a5: PUSH EDI
// 004186a6: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 004186ab: ADD ESP,0x4
// 004186ae: PUSH ESI
// 004186af: PUSH 0x0
// 004186b1: LEA ESI,[EBX + 0xc040]
// 004186b7: PUSH ESI
// 004186b8: CALL core_morph.cpp_FUN_0052b430
//   XREF to: 0052b430 (UNCONDITIONAL_CALL)
// 004186bd: ADD ESP,0xc
// 004186c0: PUSH 0x0
// 004186c2: PUSH EDI
// 004186c3: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 004186c8: ADD ESP,0x4
// 004186cb: PUSH EAX
// 004186cc: PUSH 0x1
// 004186ce: PUSH ESI
// 004186cf: CALL core_morph.cpp_FUN_0052b470
//   XREF to: 0052b470 (UNCONDITIONAL_CALL)
// 004186d4: ADD ESP,0x10
// 004186d7: PUSH ESI
// 004186d8: CALL core_morph.cpp_CMorph_getReady_FUN_0052b680
//   XREF to: 0052b680 (UNCONDITIONAL_CALL)
// 004186dd: MOV dword ptr [EBX + 0xc038],0x0
// 004186e7: ADD ESP,0x4
// 004186ea: MOV dword ptr [EBX + 0xc03c],0x0
// 004186f4: POP EDI
// 004186f5: POP ESI
// 004186f6: POP EBX
// 004186f7: RET

// Name: core_hotdemon.cpp_CHotDemon_ctor_FUN_004f6ca0
// Address: 004f6ca0
// Address Range: [[004f6ca0, 004f6cfb]]
// Convention: __cdecl
// Signature: CHotDemon * core_hotdemon.cpp_CHotDemon_ctor_FUN_004f6ca0(CHotDemon * this_ptr)
// Cross-references:
//   core_hotdemon.cpp_FUN_004f6c60 (004f6c60) at 004f6c7a [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_process_FUN_005c6e90 (005c6e90) at 005c714c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_hotdemon_dfm_0062f357
//   undefined4 DAT_0065fcd0
//   undefined4 DAT_0065fcd4
//   CDemonActor_vtable PTR_core_hotdemon.cpp_FUN_004f6d00_0065fce4
// Function calls:
//   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CHotDemon * __cdecl core_hotdemon_cpp_CHotDemon_ctor_FUN_004f6ca0(CHotDemon *this_ptr)

{
  CEnemy *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CHotDemon *pCVar4;
  
  pCVar4 = (CHotDemon *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar4->base_enemy).base_character.base_actor.vtable =
       &PTR_core_hotdemon_cpp_FUN_004f6d00_0065fce4;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840
            (&(pCVar4->base_enemy).base_character.model);
  uVar3 = _DAT_0065fcd4;
  uVar2 = _DAT_0065fcd0;
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x344] = -0x66;
  (pCVar1->base_character).cloth_data[0x345] = -0x67;
  (pCVar1->base_character).cloth_data[0x346] = '\x19';
  (pCVar1->base_character).cloth_data[0x347] = '?';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x348] = 'f';
  (pCVar1->base_character).cloth_data[0x349] = 'f';
  (pCVar1->base_character).cloth_data[0x34a] = 'f';
  (pCVar1->base_character).cloth_data[0x34b] = '?';
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x34c) = uVar2;
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x350) = uVar3;
  return pCVar4;
}


// Assembly code:
// 004f6ca0: PUSH EBX
//   Label: core_hotdemon.cpp_CHotDemon_ctor_FUN_004f6ca0
// 004f6ca1: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f6ca5: PUSH EDX
// 004f6ca6: CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   XREF to: 004a9500 (UNCONDITIONAL_CALL)
// 004f6cab: ADD ESP,0x4
// 004f6cae: PUSH 0x62f357
//   XREF to: 0062f357 (DATA)
// 004f6cb3: MOV EBX,EAX
// 004f6cb5: ADD EAX,0x158
// 004f6cba: PUSH EAX
// 004f6cbb: MOV dword ptr [EAX + -0x4],0x65fce4
//   XREF to: 0065fce4 (DATA)
// 004f6cc2: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 004f6cc7: FLD float ptr [0x0065fcd0]
//   XREF to: 0065fcd0 (READ)
// 004f6ccd: FLD float ptr [0x0065fcd4]
//   XREF to: 0065fcd4 (READ)
// 004f6cd3: MOV dword ptr [EBX + 0x2ddc],0x3f19999a
// 004f6cdd: ADD ESP,0x8
// 004f6ce0: MOV dword ptr [EBX + 0x2de0],0x3f666666
// 004f6cea: MOV EAX,EBX
// 004f6cec: FXCH
// 004f6cee: FSTP float ptr [EBX + 0x2de4]
// 004f6cf4: FSTP float ptr [EBX + 0x2de8]
// 004f6cfa: POP EBX
// 004f6cfb: RET

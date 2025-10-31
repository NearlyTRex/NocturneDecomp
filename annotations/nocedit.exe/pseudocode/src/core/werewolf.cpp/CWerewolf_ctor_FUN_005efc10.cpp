// Name: core_werewolf.cpp_CWerewolf_ctor_FUN_005efc10
// Address: 005efc10
// Address Range: [[005efc10, 005efcbd]]
// Convention: __cdecl
// Signature: CWerewolf * core_werewolf.cpp_CWerewolf_ctor_FUN_005efc10(CWerewolf * this_ptr)
// Cross-references:
//   core_werewolf.cpp_FUN_005efbd0 (005efbd0) at 005efbea [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_wolfbrn_dfm_00657c53
//   undefined4 DAT_00665760
//   undefined4 PTR_FUN_00665761+3
//   undefined4 DAT_00665768
//   CDemonActor_vtable PTR_core_werewolf.cpp_FUN_00665784
// Function calls:
//   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   core_skeleton.cpp_FUN_005a0840

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CWerewolf * __cdecl core_werewolf_cpp_CWerewolf_ctor_FUN_005efc10(CWerewolf *this_ptr)

{
  CEnemy *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  CWerewolf *pCVar5;
  
  pCVar5 = (CWerewolf *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar5->base_enemy).base_character.base_actor.metadata.vtable =
       &PTR_core_werewolf_cpp_FUN_00665784;
  core_skeleton_cpp_FUN_005a0840();
  pCVar1 = &pCVar5->base_enemy;
  (pCVar1->base_character).cloth_data[0x344] = '\0';
  (pCVar1->base_character).cloth_data[0x345] = '\0';
  (pCVar1->base_character).cloth_data[0x346] = -0x80;
  (pCVar1->base_character).cloth_data[0x347] = '?';
  pCVar1 = &pCVar5->base_enemy;
  (pCVar1->base_character).cloth_data[0x348] = '\0';
  (pCVar1->base_character).cloth_data[0x349] = '\0';
  (pCVar1->base_character).cloth_data[0x34a] = '\0';
  (pCVar1->base_character).cloth_data[0x34b] = '@';
  pCVar5->type = 0;
  pCVar5->light_up_eyes = 1;
  pCVar5->field6_0xbed8[0x10] = '\0';
  uVar2 = _DAT_00665760;
  pCVar5->field6_0xbed8[0x11] = '\0';
  pCVar5->field6_0xbed8[0x12] = '\0';
  pCVar5->field6_0xbed8[0x13] = '\0';
  pCVar5->chain_length = 5.0;
  uVar3 = _PTR_FUN_00665761_3;
  pCVar5->field8_0xbef0[0] = '\0';
  fVar4 = DAT_00665768;
  pCVar5->field8_0xbef0[1] = '\0';
  pCVar5->field8_0xbef0[2] = '\0';
  pCVar5->field8_0xbef0[3] = '\0';
  pCVar5->field8_0xbef0[4] = '\0';
  pCVar5->field8_0xbef0[5] = '\0';
  pCVar5->field8_0xbef0[6] = '\0';
  pCVar5->field8_0xbef0[7] = '\0';
  pCVar5->phase = 0;
  *(undefined4 *)((pCVar5->base_enemy).base_character.cloth_data + 0x34c) = uVar2;
  *(undefined4 *)((pCVar5->base_enemy).base_character.cloth_data + 0x350) = uVar3;
  pCVar5->phase_timer = fVar4;
  return pCVar5;
}


// Assembly code:
// 005efc10: PUSH EBX
//   Label: core_werewolf.cpp_CWerewolf_ctor_FUN_005efc10
// 005efc11: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005efc15: PUSH EDX
// 005efc16: CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   XREF to: 004a9500 (UNCONDITIONAL_CALL)
// 005efc1b: ADD ESP,0x4
// 005efc1e: PUSH 0x657c53
//   XREF to: 00657c53 (DATA)
// 005efc23: MOV EBX,EAX
// 005efc25: ADD EAX,0x158
// 005efc2a: PUSH EAX
// 005efc2b: MOV dword ptr [EAX + -0x4],0x665784
//   XREF to: 00665784 (DATA)
// 005efc32: CALL core_skeleton.cpp_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 005efc37: MOV dword ptr [EBX + 0x2ddc],0x3f800000
// 005efc41: MOV dword ptr [EBX + 0x2de0],0x40000000
// 005efc4b: MOV dword ptr [EBX + 0xbebc],0x0
// 005efc55: MOV dword ptr [EBX + 0xbed4],0x1
// 005efc5f: MOV dword ptr [EBX + 0xbee8],0x0
// 005efc69: FLD float ptr [0x00665760]
//   XREF to: 00665760 (READ)
// 005efc6f: MOV dword ptr [EBX + 0xbeec],0x40a00000
// 005efc79: FLD float ptr [0x00665764]
//   XREF to: 00665764 (READ)
// 005efc7f: MOV dword ptr [EBX + 0xbef0],0x0
// 005efc89: FLD float ptr [0x00665768]
//   XREF to: 00665768 (READ)
// 005efc8f: MOV dword ptr [EBX + 0xbef4],0x0
// 005efc99: ADD ESP,0x8
// 005efc9c: MOV dword ptr [EBX + 0xbef8],0x0
// 005efca6: MOV EAX,EBX
// 005efca8: FXCH ST2
// 005efcaa: FSTP float ptr [EBX + 0x2de4]
// 005efcb0: FSTP float ptr [EBX + 0x2de8]
// 005efcb6: FSTP float ptr [EBX + 0xbefc]
// 005efcbc: POP EBX
// 005efcbd: RET

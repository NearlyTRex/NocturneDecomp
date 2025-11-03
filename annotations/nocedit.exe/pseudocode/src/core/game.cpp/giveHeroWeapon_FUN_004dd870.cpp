// Name: core_game.cpp_giveHeroWeapon_FUN_004dd870
// Address: 004dd870
// Address Range: [[004dd870, 004dd924]]
// Convention: __cdecl
// Signature: void core_game.cpp_giveHeroWeapon_FUN_004dd870(char * p1)
// Cross-references:
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004deec0 [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004dd9d0 (004dd9d0) at 004dda3c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_game_cpp_0062b995
//   TerminatedCString s_giveHeroWeapon_This_is_n_0062b9a6
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonMission g_CDemonMissionInstance
//   undefined4 g_CWeaponClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_createActorByName_FUN_0040c430
//   core_inv.cpp_CInventory_addItem_FUN_004fd600
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700

#include "nocturne.h"

/* Signature: undefined1 core_game.cpp_giveHeroWeapon(undefined4 sActorClassName) */

void __cdecl core_game_cpp_giveHeroWeapon_FUN_004dd870(char *p1)

{
  CDemonActor *this_ptr;
  CDemonActor *pCVar1;
  undefined4 uStack00000010;
  
  this_ptr = core_actor_cpp_createActorByName_FUN_0040c430(p1);
  core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(g_CDemonMissionPtr);
  (*this_ptr->vtable->setup)(this_ptr);
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(this_ptr,g_CWeaponClassInfo.name_hash);
  if (pCVar1 == (CDemonActor *)0x0) {
    g_CurrentFilename = "..\\core\\game.cpp";
    g_CurrentLineNumber = 0xa14;
    core_main_c_displayErrorAndQuit_FUN_00506f10("giveHeroWeapon - This is not a weapon");
  }
  pCVar1[4].actor_name[8] = -0xc;
  pCVar1[4].actor_name[9] = '\x01';
  pCVar1[4].actor_name[10] = '\0';
  pCVar1[4].actor_name[0xb] = '\0';
  (*this_ptr->vtable->pickup)(this_ptr,(CDemonActor *)g_HeroActors[g_LocalHeroIndex]);
  uStack00000010 = 0x4dd8f9;
  core_inv_cpp_CInventory_addItem_FUN_004fd600
            (&g_HeroActors[g_LocalHeroIndex]->inventory,this_ptr,1);
  return;
}


// Assembly code:
// 004dd870: PUSH EBX
//   Label: core_game.cpp_giveHeroWeapon_FUN_004dd870
// 004dd871: PUSH ESI
// 004dd872: PUSH EDI
// 004dd873: PUSH EBP
// 004dd874: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004dd878: PUSH EDX
// 004dd879: CALL core_actor.cpp_createActorByName_FUN_0040c430
//   XREF to: 0040c430 (UNCONDITIONAL_CALL)
// 004dd87e: ADD ESP,0x4
// 004dd881: PUSH EAX
// 004dd882: MOV ECX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 004dd888: PUSH ECX
//   XREF to: 02f33740 (DATA)
// 004dd889: MOV EBX,EAX
// 004dd88b: MOV ESI,EAX
// 004dd88d: CALL core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   XREF to: 00524700 (UNCONDITIONAL_CALL)
// 004dd892: ADD ESP,0x8
// 004dd895: MOV EAX,dword ptr [EBX + 0x154]
// 004dd89b: PUSH EBX
// 004dd89c: CALL dword ptr [EAX]
// 004dd89e: ADD ESP,0x4
// 004dd8a1: MOV EDI,dword ptr [0x03f95d78]
//   XREF to: 03f95d78 (READ)
// 004dd8a7: PUSH EDI
// 004dd8a8: PUSH EBX
// 004dd8a9: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004dd8ae: ADD ESP,0x8
// 004dd8b1: MOV EBX,EAX
// 004dd8b3: TEST EAX,EAX
// 004dd8b5: JZ 0x004dd901
//   XREF to: 004dd901 (CONDITIONAL_JUMP)
// 004dd8b7: MOV dword ptr [EBX + 0x568],0x1f4
//   Label: LAB_004dd8b7
// 004dd8c1: MOV EBX,dword ptr [0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004dd8c7: MOV EDX,dword ptr [EBX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004dd8ce: PUSH EDX
// 004dd8cf: MOV EAX,dword ptr [ESI + 0x154]
// 004dd8d5: PUSH ESI
// 004dd8d6: CALL dword ptr [EAX + 0x80]
// 004dd8dc: ADD ESP,0x8
// 004dd8df: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004dd8e4: PUSH 0x1
// 004dd8e6: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004dd8ed: PUSH ESI
// 004dd8ee: ADD EAX,0x1f738
// 004dd8f3: PUSH EAX
// 004dd8f4: CALL core_inv.cpp_CInventory_addItem_FUN_004fd600
//   XREF to: 004fd600 (UNCONDITIONAL_CALL)
// 004dd8f9: ADD ESP,0xc
// 004dd8fc: POP EBP
// 004dd8fd: POP EDI
// 004dd8fe: POP ESI
// 004dd8ff: POP EBX
// 004dd900: RET
// 004dd901: MOV EBP,0x62b995
//   Label: LAB_004dd901
//   XREF to: 0062b995 (DATA)
// 004dd906: MOV EAX,0xa14
// 004dd90b: PUSH 0x62b9a6
//   XREF to: 0062b9a6 (DATA)
// 004dd910: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 004dd916: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004dd91b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004dd920: ADD ESP,0x4
// 004dd923: JMP 0x004dd8b7
//   XREF to: 004dd8b7 (UNCONDITIONAL_JUMP)

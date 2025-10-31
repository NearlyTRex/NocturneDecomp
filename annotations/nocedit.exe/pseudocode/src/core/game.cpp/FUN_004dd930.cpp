// Name: core_game.cpp_FUN_004dd930
// Address: 004dd930
// Address Range: [[004dd930, 004dd9c3]]
// Convention: __cdecl
// Signature: void core_game.cpp_FUN_004dd930(char * p1, int p2)
// Cross-references:
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004defa6 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_game_cpp_0062b9cc
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   CDemonMission g_CDemonMissionInstance
// Function calls:
//   core_ammo.cpp_CAmmo_ctor_FUN_00410dc0
//   core_ammo.cpp_CAmmo_FUN_00410fd0
//   core_inv.cpp_CInventory_addItem_FUN_004fd600
//   core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

/* Signature: undefined1 core_game.cpp_FUN_004dd930() */

void __cdecl core_game_cpp_FUN_004dd930(char *p1,int p2)

{
  CAmmo *pCVar1;
  int in_stack_00000020;
  
  pCVar1 = (CAmmo *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x31c,"..\\core\\game.cpp",0xa1c);
  if (pCVar1 == (CAmmo *)0x0) {
    return;
  }
  pCVar1 = core_ammo_cpp_CAmmo_ctor_FUN_00410dc0(pCVar1);
  if (pCVar1 != (CAmmo *)0x0) {
    core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(g_CDemonMissionPtr);
    (*((pCVar1->base_actor).metadata.vtable)->setup)(&pCVar1->base_actor);
    pCVar1->ammo_type = in_stack_00000020;
    core_ammo_cpp_CAmmo_FUN_00410fd0();
    pCVar1->ammo_count = 500;
    core_inv_cpp_CInventory_addItem_FUN_004fd600
              (&g_HeroActors[g_LocalHeroIndex]->inventory,&pCVar1->base_actor,1);
    return;
  }
  return;
}


// Assembly code:
// 004dd930: PUSH EBX
//   Label: core_game.cpp_FUN_004dd930
// 004dd931: PUSH 0xa1c
// 004dd936: PUSH 0x62b9cc
//   XREF to: 0062b9cc (DATA)
// 004dd93b: PUSH 0x31c
// 004dd940: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004dd945: MOV EBX,EAX
// 004dd947: ADD ESP,0xc
// 004dd94a: TEST EAX,EAX
// 004dd94c: JNZ 0x004dd954
//   XREF to: 004dd954 (CONDITIONAL_JUMP)
// 004dd94e: TEST EBX,EBX
// 004dd950: JNZ 0x004dd965
//   XREF to: 004dd965 (CONDITIONAL_JUMP)
// 004dd952: POP EBX
// 004dd953: RET
// 004dd954: PUSH EAX
//   Label: LAB_004dd954
// 004dd955: CALL core_ammo.cpp_CAmmo_ctor_FUN_00410dc0
//   XREF to: 00410dc0 (UNCONDITIONAL_CALL)
// 004dd95a: MOV EBX,EAX
// 004dd95c: ADD ESP,0x4
// 004dd95f: TEST EBX,EBX
// 004dd961: JNZ 0x004dd965
//   XREF to: 004dd965 (CONDITIONAL_JUMP)
// 004dd963: POP EBX
// 004dd964: RET
// 004dd965: PUSH EBX
//   Label: LAB_004dd965
// 004dd966: MOV EDX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 004dd96c: PUSH EDX
//   XREF to: 02f33740 (DATA)
// 004dd96d: CALL core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   XREF to: 00524700 (UNCONDITIONAL_CALL)
// 004dd972: ADD ESP,0x8
// 004dd975: MOV EAX,dword ptr [EBX + 0x154]
// 004dd97b: PUSH EBX
// 004dd97c: CALL dword ptr [EAX]
// 004dd97e: ADD ESP,0x4
// 004dd981: MOV ECX,dword ptr [ESP + 0x8]
// 004dd985: PUSH ECX
// 004dd986: MOV EAX,dword ptr [ESP + 0x10]
// 004dd98a: PUSH EBX
// 004dd98b: MOV dword ptr [EBX + 0x318],EAX
// 004dd991: CALL core_ammo.cpp_CAmmo_FUN_00410fd0
//   XREF to: 00410fd0 (UNCONDITIONAL_CALL)
// 004dd996: ADD ESP,0x8
// 004dd999: PUSH 0x1
// 004dd99b: MOV dword ptr [EBX + 0x314],0x1f4
// 004dd9a5: PUSH EBX
// 004dd9a6: MOV EBX,dword ptr [0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004dd9ac: MOV EBX,dword ptr [EBX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004dd9b3: ADD EBX,0x1f738
// 004dd9b9: PUSH EBX
// 004dd9ba: CALL core_inv.cpp_CInventory_addItem_FUN_004fd600
//   XREF to: 004fd600 (UNCONDITIONAL_CALL)
// 004dd9bf: ADD ESP,0xc
// 004dd9c2: POP EBX
// 004dd9c3: RET

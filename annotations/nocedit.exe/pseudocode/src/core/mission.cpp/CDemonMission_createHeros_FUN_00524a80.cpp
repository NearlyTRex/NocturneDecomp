// Name: core_mission.cpp_CDemonMission_createHeros_FUN_00524a80
// Address: 00524a80
// Address Range: [[00524a80, 00524c12]]
// Convention: __cdecl
// Signature: int core_mission.cpp_CDemonMission_createHeros_FUN_00524a80(CDemonMission * this_ptr, int creation_flags)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 (004bda20) at 004bddd6 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 (004e1cb0) at 004e2036 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_run_FUN_00524420 (00524420) at 00524576 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0 (00538ba0) at 00538c05 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_FUN_00541390 (00541390) at 005419bd [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_mission_cpp_00639470
//   TerminatedCString s_CDemonMission_createHero_00639484
//   TerminatedCString s_CHeroPlaceholder_006394c7
//   CGame* g_CGamePtr = 02d81a9c
//   CNetGame* g_CNetGameInstance = 02f7c740
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.hero_number
//   undefined4 DAT_02d81b60
//   int g_HeroCount
//   CHero*[4] g_HeroActors
//   undefined4 DAT_02db87c4
//   int g_LocalHeroIndex
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_02f7c740
//   undefined4 DAT_02f7c75c
//   undefined4 DAT_02f7c774
//   undefined4 DAT_02f7c778
//   undefined4 DAT_02f7c7ec
//   undefined4 DAT_02f7c854
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
//   core_mission.cpp_CDemonMission_createOneHero_FUN_00524920
//   core_mission.cpp_CDemonMission_FUN_00523f20

#include "nocturne.h"

int __cdecl
core_mission_cpp_CDemonMission_createHeros_FUN_00524a80(CDemonMission *this_ptr,int creation_flags)

{
  CDemonActor *actor_ptr;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar2 = iVar4 + 4;
    *(undefined4 *)((int)g_HeroActors + iVar4) = 0;
    iVar4 = iVar2;
  } while (iVar2 != 0x10);
  if (g_CNetGameInstance->connection_type == 0) {
    g_HeroCount = 1;
    g_LocalHeroIndex = g_CNetGameInstance->connection_type;
    iVar4 = core_mission_cpp_CDemonMission_createOneHero_FUN_00524920(this_ptr);
    if (iVar4 == 0) {
      return 0;
    }
    *(int *)(g_HeroActors[g_LocalHeroIndex]->field3_0xbe2c + 0x13908) = g_CGamePtr->aim_mode;
  }
  else {
    g_HeroCount = g_CNetGameInstance->player_count;
    if (3 < g_HeroCount) {
      g_CurrentFilename = "..\\core\\mission.cpp";
      g_CurrentLineNumber = 0x639;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::createHeros - too many network players for MAX_HERO");
    }
    iVar4 = 0;
    if (0 < g_HeroCount) {
      iVar3 = 0;
      iVar2 = 0;
      do {
        iVar1 = core_mission_cpp_CDemonMission_createOneHero_FUN_00524920(this_ptr);
        if (iVar1 == 0) {
          return 0;
        }
        *(undefined4 *)(*(int *)((int)g_HeroActors + iVar2) + 0xbe28) = 1;
        iVar4 = iVar4 + 1;
        *(undefined4 *)(*(int *)((int)g_HeroActors + iVar2) + 0x1f734) =
             *(undefined4 *)(g_CNetGameInstance->players[0].name + iVar3 + 0x18);
        iVar3 = iVar3 + 0x78;
        iVar2 = iVar2 + 4;
      } while (iVar4 < g_HeroCount);
    }
    g_LocalHeroIndex = g_CNetGameInstance->local_player_index;
  }
  g_HeroActors[g_LocalHeroIndex]->control_type = 0;
  actor_ptr = this_ptr->first_actor;
  while (actor_ptr != (CDemonActor *)0x0) {
    iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CHeroPlaceholder");
    if (iVar4 == 0) {
      actor_ptr = (actor_ptr->metadata).next_actor;
    }
    else {
      core_mission_cpp_CDemonMission_FUN_00523f20(this_ptr);
      actor_ptr = this_ptr->first_actor;
    }
  }
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(this_ptr);
  return 1;
}


// Assembly code:
// 00524a80: PUSH EBX
//   Label: core_mission.cpp_CDemonMission_createHeros_FUN_00524a80
// 00524a81: PUSH ESI
// 00524a82: PUSH EDI
// 00524a83: PUSH EBP
// 00524a84: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00524a88: XOR EBX,EBX
// 00524a8a: ADD EBX,0x4
//   Label: LAB_00524a8a
// 00524a8d: XOR EDX,EDX
// 00524a8f: MOV dword ptr [EBX + 0x2db87bc],EDX
//   XREF to: 02db87c0 (WRITE)
//   XREF to: 02db87c4 (WRITE)
// 00524a95: CMP EBX,0x10
// 00524a98: JNZ 0x00524a8a
//   XREF to: 00524a8a (CONDITIONAL_JUMP)
// 00524a9a: MOV EAX,[0x00680a00]
//   XREF to: 00680a00 (READ)
// 00524a9f: MOV ECX,dword ptr [EAX]
//   XREF to: 02f7c740 (READ)
// 00524aa1: TEST ECX,ECX
// 00524aa3: JZ 0x00524b8d
//   XREF to: 00524b8d (CONDITIONAL_JUMP)
// 00524aa9: MOV EAX,dword ptr [EAX + 0x1c]
//   XREF to: 02f7c75c (READ)
// 00524aac: MOV [0x02db87bc],EAX
//   XREF to: 02db87bc (WRITE)
// 00524ab1: CMP EAX,0x4
// 00524ab4: JGE 0x00524be0
//   XREF to: 00524be0 (CONDITIONAL_JUMP)
// 00524aba: MOV EAX,[0x02db87bc]
//   Label: LAB_00524aba
//   XREF to: 02db87bc (READ)
// 00524abf: XOR EDI,EDI
// 00524ac1: TEST EAX,EAX
// 00524ac3: JLE 0x00524b1e
//   XREF to: 00524b1e (CONDITIONAL_JUMP)
// 00524ac5: XOR EBX,EBX
// 00524ac7: XOR ESI,ESI
// 00524ac9: MOV EAX,[0x00680a00]
//   Label: LAB_00524ac9
//   XREF to: 02f7c740 (PARAM)
//   XREF to: 00680a00 (READ)
// 00524ace: PUSH 0x0
// 00524ad0: MOV EDX,dword ptr [ESI + EAX*0x1 + 0x34]
//   XREF to: 02f7c774 (READ)
//   XREF to: 02f7c7ec (READ)
// 00524ad4: PUSH EDX
// 00524ad5: PUSH EDI
// 00524ad6: PUSH EBP
// 00524ad7: CALL core_mission.cpp_CDemonMission_createOneHero_FUN_00524920
//   XREF to: 00524920 (UNCONDITIONAL_CALL)
// 00524adc: ADD ESP,0x10
// 00524adf: TEST EAX,EAX
// 00524ae1: JZ 0x00524b88
//   XREF to: 00524b88 (CONDITIONAL_JUMP)
// 00524ae7: MOV EAX,dword ptr [EBX + 0x2db87c0]
//   XREF to: 02db87c0 (READ)
// 00524aed: MOV dword ptr [EAX + 0xbe28],0x1
// 00524af7: MOV EAX,[0x00680a00]
//   XREF to: 00680a00 (READ)
// 00524afc: ADD EBX,0x4
// 00524aff: LEA EDX,[EAX + ESI*0x1]
//   XREF to: 02f7c740 (DATA)
// 00524b02: MOV EAX,dword ptr [EBX + 0x2db87bc]
//   XREF to: 02db87c0 (READ)
// 00524b08: MOV EDX,dword ptr [EDX + 0x38]
//   XREF to: 02f7c778 (READ)
// 00524b0b: INC EDI
// 00524b0c: MOV dword ptr [EAX + 0x1f734],EDX
// 00524b12: MOV EAX,[0x02db87bc]
//   XREF to: 02db87bc (READ)
// 00524b17: ADD ESI,0x78
// 00524b1a: CMP EDI,EAX
// 00524b1c: JL 0x00524ac9
//   XREF to: 00524ac9 (CONDITIONAL_JUMP)
// 00524b1e: MOV EAX,[0x00680a00]
//   Label: LAB_00524b1e
//   XREF to: 00680a00 (READ)
// 00524b23: MOV EAX,dword ptr [EAX + 0x114]
//   XREF to: 02f7c854 (READ)
// 00524b29: MOV [0x02db87d0],EAX
//   XREF to: 02db87d0 (WRITE)
// 00524b2e: MOV EAX,[0x02db87d0]
//   Label: LAB_00524b2e
//   XREF to: 02db87d0 (READ)
// 00524b33: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 00524b3a: MOV dword ptr [EAX + 0xbe28],0x0
// 00524b44: MOV EBX,dword ptr [EBP + 0x548]
// 00524b4a: TEST EBX,EBX
// 00524b4c: JZ 0x00524b7a
//   XREF to: 00524b7a (CONDITIONAL_JUMP)
// 00524b4e: PUSH 0x6394c7
//   Label: LAB_00524b4e
//   XREF to: 006394c7 (DATA)
// 00524b53: PUSH EBX
// 00524b54: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 00524b59: ADD ESP,0x8
// 00524b5c: TEST EAX,EAX
// 00524b5e: JZ 0x00524c08
//   XREF to: 00524c08 (CONDITIONAL_JUMP)
// 00524b64: PUSH 0x1
// 00524b66: PUSH EBX
// 00524b67: PUSH EBP
// 00524b68: CALL core_mission.cpp_CDemonMission_FUN_00523f20
//   XREF to: 00523f20 (UNCONDITIONAL_CALL)
// 00524b6d: ADD ESP,0xc
// 00524b70: MOV EBX,dword ptr [EBP + 0x548]
// 00524b76: TEST EBX,EBX
//   Label: LAB_00524b76
// 00524b78: JNZ 0x00524b4e
//   XREF to: 00524b4e (CONDITIONAL_JUMP)
// 00524b7a: PUSH EBP
//   Label: LAB_00524b7a
// 00524b7b: CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
//   XREF to: 00523e60 (UNCONDITIONAL_CALL)
// 00524b80: MOV EAX,0x1
// 00524b85: ADD ESP,0x4
// 00524b88: POP EBP
//   Label: LAB_00524b88
// 00524b89: POP EDI
// 00524b8a: POP ESI
// 00524b8b: POP EBX
// 00524b8c: RET
// 00524b8d: MOV EBX,dword ptr [ESP + 0x18]
//   Label: LAB_00524b8d
//   XREF to: Stack[0x8] (READ)
// 00524b91: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00524b96: PUSH EBX
// 00524b97: MOV ESI,dword ptr [EAX + 0xc0]
//   XREF to: 02d81b5c (READ)
// 00524b9d: PUSH ESI
// 00524b9e: PUSH ECX
// 00524b9f: MOV EDX,0x1
// 00524ba4: PUSH EBP
// 00524ba5: MOV dword ptr [0x02db87d0],ECX
//   XREF to: 02db87d0 (WRITE)
// 00524bab: MOV dword ptr [0x02db87bc],EDX
//   XREF to: 02db87bc (WRITE)
// 00524bb1: CALL core_mission.cpp_CDemonMission_createOneHero_FUN_00524920
//   XREF to: 00524920 (UNCONDITIONAL_CALL)
// 00524bb6: ADD ESP,0x10
// 00524bb9: TEST EAX,EAX
// 00524bbb: JZ 0x00524b88
//   XREF to: 00524b88 (CONDITIONAL_JUMP)
// 00524bbd: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 00524bc2: MOV EDX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00524bc8: MOV EBX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 00524bcf: MOV EAX,dword ptr [EDX + 0xc4]
//   XREF to: 02d81b60 (READ)
// 00524bd5: MOV dword ptr [EBX + 0x1f734],EAX
// 00524bdb: JMP 0x00524b2e
//   XREF to: 00524b2e (UNCONDITIONAL_JUMP)
// 00524be0: MOV ESI,0x639470
//   Label: LAB_00524be0
//   XREF to: 00639470 (DATA)
// 00524be5: MOV EDI,0x639
// 00524bea: PUSH 0x639484
//   XREF to: 00639484 (DATA)
// 00524bef: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00524bf5: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00524bfb: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00524c00: ADD ESP,0x4
// 00524c03: JMP 0x00524aba
//   XREF to: 00524aba (UNCONDITIONAL_JUMP)
// 00524c08: MOV EBX,dword ptr [EBX + 0x14c]
//   Label: LAB_00524c08
// 00524c0e: JMP 0x00524b76
//   XREF to: 00524b76 (UNCONDITIONAL_JUMP)

// Name: core_enemy.cpp_CEnemy_FUN_004a9fd0
// Address: 004a9fd0
// Address Range: [[004a9fd0, 004aa021]]
// Convention: __cdecl
// Signature: void core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr)
// Cross-references:
//   core_batcreat.cpp_CBatCreature_process_FUN_00415470 (00415470) at 00415a33 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 00416fea [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c857 [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00423a30 (00423a30) at 00423b65 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444310 (00444310) at 0044468b [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_process_FUN_0047f140 (0047f140) at 0047f511 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 004851dd [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ec70 (0048ec70) at 0048f0eb [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk6_FUN_004e4a00 (004e4a00) at 004e5020 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e756a [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f6f20 (004f6f20) at 004f73c5 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9c30 (004f9c30) at 004fa49c [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503080 (00503080) at 0050358c [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 00526208 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568030 (00568030) at 005686e3 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_process_FUN_005c6e90 (005c6e90) at 005c7395 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 (005efde0) at 005f0488 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005fa69b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Capture_006243da
//   CEventList* g_CEventListPtr = 02d05310
//   CGame* g_CGamePtr = 02d81a9c
//   undefined4 DAT_02d05310
//   CGame g_CGameInstance
//   undefined4 DAT_02d81c70
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042e050
//   core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_FUN_004a9fd0(CEnemy *this_ptr)

{
  int iVar1;
  
  if (g_CGamePtr->field54_0x1d4 == 0) {
    iVar1 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                      (g_CEventListPtr,"Capture");
    if (iVar1 == 0) {
      core_charactr_cpp_CCharacter_FUN_0042e050(&this_ptr->base_character);
      return;
    }
  }
  core_charactr_cpp_CCharacter_FUN_0042e050(&this_ptr->base_character);
  return;
}


// Assembly code:
// 004a9fd0: PUSH EBX
//   Label: core_enemy.cpp_CEnemy_FUN_004a9fd0
// 004a9fd1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004a9fd5: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004a9fda: CMP dword ptr [EAX + 0x1d4],0x0
//   XREF to: 02d81c70 (READ)
// 004a9fe1: JNZ 0x004a9ffb
//   XREF to: 004a9ffb (CONDITIONAL_JUMP)
// 004a9fe3: PUSH 0x6243da
//   XREF to: 006243da (DATA)
// 004a9fe8: MOV ECX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 004a9fee: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 004a9fef: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 004a9ff4: ADD ESP,0x8
// 004a9ff7: TEST EAX,EAX
// 004a9ff9: JZ 0x004aa00c
//   XREF to: 004aa00c (CONDITIONAL_JUMP)
// 004a9ffb: PUSH 0x0
//   Label: LAB_004a9ffb
// 004a9ffd: PUSH dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004aa001: PUSH EBX
// 004aa002: CALL core_charactr.cpp_CCharacter_FUN_0042e050
//   XREF to: 0042e050 (UNCONDITIONAL_CALL)
// 004aa007: ADD ESP,0xc
// 004aa00a: POP EBX
// 004aa00b: RET
// 004aa00c: LEA EAX,[EBX + 0xbe48]
//   Label: LAB_004aa00c
// 004aa012: PUSH EAX
// 004aa013: PUSH dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004aa017: PUSH EBX
// 004aa018: CALL core_charactr.cpp_CCharacter_FUN_0042e050
//   XREF to: 0042e050 (UNCONDITIONAL_CALL)
// 004aa01d: ADD ESP,0xc
// 004aa020: POP EBX
// 004aa021: RET

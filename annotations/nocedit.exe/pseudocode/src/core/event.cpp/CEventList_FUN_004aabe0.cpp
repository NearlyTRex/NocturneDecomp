// Name: core_event.cpp_CEventList_FUN_004aabe0
// Address: 004aabe0
// Address Range: [[004aabe0, 004aabfc]]
// Convention: __cdecl
// Signature: void core_event.cpp_CEventList_FUN_004aabe0(CEventList * this_ptr)
// Cross-references:
//   core_dest.cpp_FUN_0046f9b0 (0046f9b0) at 0046fafb [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_process_FUN_004800c0 (004800c0) at 004801a0 [UNCONDITIONAL_CALL]
//   core_door.cpp_FUN_0047fcf0 (0047fcf0) at 0047fd01 [UNCONDITIONAL_CALL]
//   core_event.cpp_FUN_004b18e0 (004b18e0) at 004b1917 [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_CFilmProjector_load_FUN_004beb40 (004beb40) at 004bebea [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004df54f [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f2c40 (004f2c40) at 004f2d4a [UNCONDITIONAL_CALL]
//   core_hostage.cpp_CHostage_FUN_004f63e0 (004f63e0) at 004f6439 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f55b7 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_select_FUN_004ff800 (004ff800) at 004ffa96 [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00504920 (00504920) at 005049ad [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00504b20 (00504b20) at 00504c0e [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055bb71 [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_process_FUN_005dfac0 (005dfac0) at 005dfbac [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e62a8 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_FUN_005e7030 (005e7030) at 005e7223 [UNCONDITIONAL_CALL]
//   core_vessel.cpp_CCryptVessel_process_FUN_005e91a0 (005e91a0) at 005e93f0 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_02d0a45c
// Function calls:
//   core_event.cpp_CEventList_FUN_004aac00

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_FUN_004aabe0(CEventList *this_ptr)

{
  DAT_02d0a45c = 0;
  core_event_cpp_CEventList_FUN_004aac00(this_ptr);
  return;
}


// Assembly code:
// 004aabe0: PUSH EBX
//   Label: core_event.cpp_CEventList_FUN_004aabe0
// 004aabe1: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004aabe5: PUSH ECX
// 004aabe6: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004aabea: XOR EDX,EDX
// 004aabec: PUSH EBX
// 004aabed: MOV dword ptr [0x02d0a45c],EDX
//   XREF to: 02d0a45c (WRITE)
// 004aabf3: CALL core_event.cpp_CEventList_FUN_004aac00
//   XREF to: 004aac00 (UNCONDITIONAL_CALL)
// 004aabf8: ADD ESP,0x8
// 004aabfb: POP EBX
// 004aabfc: RET

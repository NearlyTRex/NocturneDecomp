// Name: core_gore.cpp_FUN_004ede30
// Address: 004ede30
// Address Range: [[004ede30, 004ede5c]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ede30()
// Cross-references:
//   core_batcreat.cpp_CBatCreature_process_FUN_00415470 (00415470) at 00415722 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 00416e3c [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00423a30 (00423a30) at 00423c10 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444310 (00444310) at 0044466d [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_process_FUN_0047f140 (0047f140) at 0047f4f3 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 00484ffe [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ec70 (0048ec70) at 0048f0cd [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e702d [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f6f20 (004f6f20) at 004f71cb [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9c30 (004f9c30) at 004fa1b0 [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503080 (00503080) at 0050354e [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051fcc0 (0051fcc0) at 0051fe86 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 005260f1 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e896 [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_process_FUN_005448b0 (005448b0) at 00544983 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568030 (00568030) at 0056856f [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a2800 (005a2800) at 005a2dd0 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 (005efde0) at 005f0814 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005fa637 [UNCONDITIONAL_CALL]
// Function calls:
//   core_gore.cpp_FUN_004ed0d0
//   core_gore.cpp_FUN_004edde0

#include "nocturne.h"

/* Signature: undefined1 core_gore.cpp_FUN_004ede30(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void core_gore_cpp_FUN_004ede30(void)

{
  int in_stack_0000000c;
  
  if (in_stack_0000000c == 2) {
    return;
  }
  core_gore_cpp_FUN_004edde0();
  core_gore_cpp_FUN_004ed0d0();
  return;
}


// Assembly code:
// 004ede30: CMP dword ptr [ESP + 0xc],0x2
//   Label: core_gore.cpp_FUN_004ede30
//   XREF to: Stack[0xc] (READ)
// 004ede35: JNZ 0x004ede38
//   XREF to: 004ede38 (CONDITIONAL_JUMP)
// 004ede37: RET
// 004ede38: PUSH ESI
//   Label: LAB_004ede38
// 004ede39: PUSH EBX
// 004ede3a: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004ede3e: PUSH ECX
// 004ede3f: CALL core_gore.cpp_FUN_004edde0
//   XREF to: 004edde0 (UNCONDITIONAL_CALL)
// 004ede44: ADD ESP,0x4
// 004ede47: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 004ede4b: PUSH EBX
// 004ede4c: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004ede50: PUSH ESI
// 004ede51: PUSH EAX
// 004ede52: CALL core_gore.cpp_FUN_004ed0d0
//   XREF to: 004ed0d0 (UNCONDITIONAL_CALL)
// 004ede57: ADD ESP,0xc
// 004ede5a: POP EBX
// 004ede5b: POP ESI
// 004ede5c: RET

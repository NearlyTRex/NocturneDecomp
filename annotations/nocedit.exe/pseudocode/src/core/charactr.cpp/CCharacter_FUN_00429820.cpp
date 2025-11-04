// Name: core_charactr.cpp_CCharacter_FUN_00429820
// Address: 00429820
// Address Range: [[00429820, 00429868]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_00429820(CCharacter * this_ptr)
// Cross-references:
//   core_baron.cpp_CBaron_process_FUN_00412e80 (00412e80) at 004130c5 [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_process_FUN_00415470 (00415470) at 00415656 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 00416a84 [UNCONDITIONAL_CALL]
//   core_beast.cpp_FUN_004182a0 (004182a0) at 00418303 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_CBiggs_FUN_00418700 (00418700) at 004188d0 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c513 [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_0043fa00 (0043fa00) at 0043fc15 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444310 (00444310) at 00444527 [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_process_FUN_0047f140 (0047f140) at 0047f36e [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 0048486c [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ec70 (0048ec70) at 0048eeeb [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d326e [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk6_FUN_004e4a00 (004e4a00) at 004e4c18 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e6776 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f0e40 (004f0e40) at 004f1055 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f509c [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f6f20 (004f6f20) at 004f70ff [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f833e [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9c30 (004f9c30) at 004fa0ff [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503080 (00503080) at 005032c1 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051fcc0 (0051fcc0) at 00520399 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 00525d2c [UNCONDITIONAL_CALL]
//   core_moloch.cpp_CMoloch_process_FUN_00528d20 (00528d20) at 00528f8f [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_process_FUN_005448b0 (005448b0) at 00544ad5 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005571f0 (005571f0) at 00557440 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568030 (00568030) at 00568213 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a2800 (005a2800) at 005a2b2a [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bc104 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_process_FUN_005c6e90 (005c6e90) at 005c70b5 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 (005d8ba0) at 005d8e28 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_process_FUN_005db050 (005db050) at 005db198 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e6614 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 (005efde0) at 005f01c1 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005f9f23 [UNCONDITIONAL_CALL]
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042ded0

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_00429820(CCharacter *this_ptr)

{
  this_ptr->field2_0x240c[0xc] = '\0';
  this_ptr->field2_0x240c[0xd] = '\0';
  this_ptr->field2_0x240c[0xe] = '\0';
  this_ptr->field2_0x240c[0xf] = '\0';
  core_charactr_cpp_CCharacter_FUN_0042ded0(this_ptr);
  return;
}


// Assembly code:
// 00429820: SUB ESP,0xc
//   Label: core_charactr.cpp_CCharacter_FUN_00429820
// 00429823: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00429827: LEA EDX,[ECX + 0x30]
// 0042982a: MOV EAX,dword ptr [EDX]
// 0042982c: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0xc] (DATA)
// 0042982f: LEA EAX,[EDX + 0x4]
// 00429832: MOV EAX,dword ptr [EAX]
// 00429834: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 00429838: LEA EAX,[EDX + 0x8]
// 0042983b: MOV EAX,dword ptr [EAX]
// 0042983d: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 00429841: MOV EAX,ESP
// 00429843: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (READ)
// 00429847: PUSH EAX
// 00429848: FADD float ptr [ECX + 0x2418]
// 0042984e: PUSH ECX
// 0042984f: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x8] (WRITE)
// 00429853: MOV dword ptr [ECX + 0x2418],0x0
// 0042985d: CALL core_charactr.cpp_CCharacter_FUN_0042ded0
//   XREF to: 0042ded0 (UNCONDITIONAL_CALL)
// 00429862: ADD ESP,0x8
// 00429865: ADD ESP,0xc
// 00429868: RET

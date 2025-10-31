// Name: core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
// Address: 005240a0
// Address Range: [[005240a0, 0052411b]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0(CDemonMission * this_ptr)
// Cross-references:
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c27d [UNCONDITIONAL_CALL]
//   core_crate.cpp_FUN_00448a70 (00448a70) at 00448b06 [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cb390 (004cb390) at 004cb40f [UNCONDITIONAL_CALL]
//   core_hiram.cpp_FUN_004f4550 (004f4550) at 004f45e2 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_addItem_FUN_004fd600 (004fd600) at 004fe741 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_processMorph_FUN_00520ba0 (00520ba0) at 00520c64 [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_00545ef0 (00545ef0) at 00546031 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 (005efde0) at 005eff28 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_mission_cpp_0063919e
//   TerminatedCString s_core_mission_cpp_006391b2
//   TerminatedCString s_CDemonMission_markActorT_006391c6
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(CDemonMission *this_ptr)

{
  int iVar1;
  CDemonActor *in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (in_stack_00000008,"..\\core\\mission.cpp",0x403);
  *(undefined4 *)(this_ptr->field6_0x54c + *(int *)(this_ptr->field6_0x54c + 0x14) * 4 + 0x18) =
       in_stack_0000000c;
  *(undefined4 *)(this_ptr->field6_0x54c + *(int *)(this_ptr->field6_0x54c + 0x14) * 4 + 0x1a8) =
       in_stack_00000010;
  iVar1 = *(int *)(this_ptr->field6_0x54c + 0x14) + 1;
  *(int *)(this_ptr->field6_0x54c + 0x14) = iVar1;
  if (iVar1 < 100) {
    return;
  }
  g_CurrentFilename = "..\\core\\mission.cpp";
  g_CurrentLineNumber = 0x408;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::markActorToDelete - Too many of them!");
  return;
}


// Assembly code:
// 005240a0: PUSH EBX
//   Label: core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
// 005240a1: PUSH EBP
// 005240a2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005240a6: PUSH 0x403
// 005240ab: PUSH 0x63919e
//   XREF to: 0063919e (DATA)
// 005240b0: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005240b4: PUSH EDX
// 005240b5: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 005240ba: ADD ESP,0xc
// 005240bd: MOV EAX,dword ptr [EBX + 0x560]
// 005240c3: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005240c7: MOV dword ptr [EBX + EAX*0x4 + 0x564],EDX
// 005240ce: MOV EAX,dword ptr [EBX + 0x560]
// 005240d4: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 005240d8: MOV dword ptr [EBX + EAX*0x4 + 0x6f4],EDX
// 005240df: MOV ECX,dword ptr [EBX + 0x560]
// 005240e5: INC ECX
// 005240e6: MOV dword ptr [EBX + 0x560],ECX
// 005240ec: CMP ECX,0x64
// 005240ef: JGE 0x005240f4
//   XREF to: 005240f4 (CONDITIONAL_JUMP)
// 005240f1: POP EBP
// 005240f2: POP EBX
// 005240f3: RET
// 005240f4: PUSH EDI
//   Label: LAB_005240f4
// 005240f5: MOV EDI,0x6391b2
//   XREF to: 006391b2 (DATA)
// 005240fa: MOV EBP,0x408
// 005240ff: PUSH 0x6391c6
//   XREF to: 006391c6 (DATA)
// 00524104: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0052410a: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 00524110: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00524115: ADD ESP,0x4
// 00524118: POP EDI
// 00524119: POP EBP
// 0052411a: POP EBX
// 0052411b: RET

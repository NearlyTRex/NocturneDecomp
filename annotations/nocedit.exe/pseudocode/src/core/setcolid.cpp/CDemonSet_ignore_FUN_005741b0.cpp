// Name: core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
// Address: 005741b0
// Address Range: [[005741b0, 0057420c]]
// Convention: __cdecl
// Signature: void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
// Cross-references:
//   core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0 (00408db0) at 00408de9 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_processFootstepAtOffset_FUN_0040c8f0 (0040c8f0) at 0040c96b [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_processFootstep_FUN_0040c830 (0040c830) at 0040c899 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 (0040a210) at 0040aa4d [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c452 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_00428f40 (00428f40) at 00429083 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0 (0042d5a0) at 0042d8fd [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444310 (00444310) at 00444469 [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_FUN_00448f20 (00448f20) at 00449096 [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_process_FUN_0047f140 (0047f140) at 0047f2b0 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 0048477a [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ec70 (0048ec70) at 0048ee2d [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8860 (004a8860) at 004a88ca [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_FUN_004c8230 (004c8230) at 004c89d1 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4190 (004d4190) at 004d4629 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d5fe0 (004d5fe0) at 004d5ff4 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6260 (004d6260) at 004d64a5 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6d40 (004d6d40) at 004d6ded [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e67bb [UNCONDITIONAL_CALL]
//   core_gun.cpp_FUN_004f0350 (004f0350) at 004f04db [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503080 (00503080) at 00503203 [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505b70 (00505b70) at 00505c42 [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505c70 (00505c70) at 00506248 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 00525c02 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_IgnoreAndProcess_FUN_0053c8d0 (0053c8d0) at 0053c8e9 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00558cf0 (00558cf0) at 00558f35 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a2800 (005a2800) at 005a3098 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c2850 (005c2850) at 005c2d2a [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3150 (005c3150) at 005c31f4 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3960 (005c3960) at 005c40ca [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c4c20 (005c4c20) at 005c4d76 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_aimLeftPistol_FUN_005c4370 (005c4370) at 005c4484 [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_FUN_005ddb30 (005ddb30) at 005ddcf2 [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e3750 (005e3750) at 005e3ae3 [UNCONDITIONAL_CALL]
//   core_weapon.cpp_FUN_005ee830 (005ee830) at 005ee8d5 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 (005efde0) at 005f00f4 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005f96e3 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_setcolid_cpp_0064637c
//   TerminatedCString s_CDemonSet_ignore_ignore__00646391
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet *this_ptr,CDemonActor *actor)

{
  CDemonActor *in_stack_0000000c;
  
  if ((actor != (CDemonActor *)0x0) && (-1 < this_ptr->ignore_list_count)) {
    if (9 < this_ptr->ignore_list_count) {
      g_CurrentFilename = "..\\core\\setcolid.cpp";
      g_CurrentLineNumber = 0x473;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::ignore - ignore list is full");
    }
    this_ptr->ignore_list[this_ptr->ignore_list_count] = in_stack_0000000c;
    this_ptr->ignore_list_count = this_ptr->ignore_list_count + 1;
  }
  return;
}


// Assembly code:
// 005741b0: PUSH EBX
//   Label: core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
// 005741b1: PUSH EBP
// 005741b2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005741b6: CMP dword ptr [ESP + 0x10],0x0
//   XREF to: Stack[0x8] (READ)
// 005741bb: JZ 0x005741e3
//   XREF to: 005741e3 (CONDITIONAL_JUMP)
// 005741bd: MOV ECX,dword ptr [EBX + 0x15f694]
// 005741c3: TEST ECX,ECX
// 005741c5: JL 0x005741e3
//   XREF to: 005741e3 (CONDITIONAL_JUMP)
// 005741c7: CMP ECX,0xa
// 005741ca: JGE 0x005741e6
//   XREF to: 005741e6 (CONDITIONAL_JUMP)
// 005741cc: MOV EAX,dword ptr [EBX + 0x15f694]
//   Label: LAB_005741cc
// 005741d2: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005741d6: MOV dword ptr [EBX + EAX*0x4 + 0x15f69c],EDX
// 005741dd: INC dword ptr [EBX + 0x15f694]
// 005741e3: POP EBP
//   Label: LAB_005741e3
// 005741e4: POP EBX
// 005741e5: RET
// 005741e6: PUSH EDI
//   Label: LAB_005741e6
// 005741e7: MOV EDI,0x64637c
//   XREF to: 0064637c (DATA)
// 005741ec: MOV EBP,0x473
// 005741f1: PUSH 0x646391
//   XREF to: 00646391 (DATA)
// 005741f6: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 005741fc: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 00574202: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00574207: ADD ESP,0x4
// 0057420a: POP EDI
// 0057420b: JMP 0x005741cc
//   XREF to: 005741cc (UNCONDITIONAL_JUMP)

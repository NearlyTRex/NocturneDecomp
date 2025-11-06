// Name: core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
// Address: 0052db00
// Address Range: [[0052db00, 0052db87]]
// Convention: __cdecl
// Signature: void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
// Cross-references:
//   core_baron.cpp_CBaron_process_FUN_00412e80 (00412e80) at 00412ebf [UNCONDITIONAL_CALL]
//   core_baron.cpp_FUN_00413470 (00413470) at 0041355b [UNCONDITIONAL_CALL]
//   core_baron.cpp_FUN_004135a0 (004135a0) at 004135c4 [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_process_FUN_00415470 (00415470) at 0041554b [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_FUN_00416030 (00416030) at 00416126 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 0041694e [UNCONDITIONAL_CALL]
//   core_batman.cpp_FUN_004167f0 (004167f0) at 00416810 [UNCONDITIONAL_CALL]
//   core_batman.cpp_FUN_004179a0 (004179a0) at 00417b42 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_CBiggs_FUN_00418700 (00418700) at 0041896a [UNCONDITIONAL_CALL]
//   core_biggs.cpp_FUN_00418b50 (00418b50) at 00418ba7 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_ExplodeAndSoundSomething_FUN_0041d4d0 (0041d4d0) at 0041d52e [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c3d4 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041cc40 (0041cc40) at 0041cf11 [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00423a30 (00423a30) at 00423c5c [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00424830 (00424830) at 004249e2 [UNCONDITIONAL_CALL]
//   core_colonel.cpp_CColonel_FUN_004404b0 (004404b0) at 004405b2 [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_0043fa00 (0043fa00) at 0043fca5 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444310 (00444310) at 004443eb [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444b40 (00444b40) at 00444b78 [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_FUN_0047f820 (0047f820) at 0047f84d [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_process_FUN_0047f140 (0047f140) at 0047f232 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 004846b1 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00486070 (00486070) at 0048613f [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ec70 (0048ec70) at 0048ed5c [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048f360 (0048f360) at 0048f461 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004acfc9 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_CGabriella_FUN_004d6b30 (004d6b30) at 004d6d08 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d3b8b [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4890 (004d4890) at 004d49a8 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d5c60 (004d5c60) at 004d5ea7 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6050 (004d6050) at 004d6075 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_PickupSomething_FUN_004d5870 (004d5870) at 004d5bb5 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk3_FUN_004e57d0 (004e57d0) at 004e5890 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk6_FUN_004e4a00 (004e4a00) at 004e4b0d [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e6734 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e87e0 (004e87e0) at 004e892c [UNCONDITIONAL_CALL]
//   core_haystack.cpp_CHaystack_FUN_004f1b70 (004f1b70) at 004f1bf6 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f0e40 (004f0e40) at 004f1105 [UNCONDITIONAL_CALL]
//   core_hiram.cpp_FUN_004f4550 (004f4550) at 004f460b [UNCONDITIONAL_CALL]
//   core_hostage.cpp_CHostage_FUN_004f63e0 (004f63e0) at 004f6423 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_CHostage_FUN_004f6450 (004f6450) at 004f64a1 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_FUN_004f5ff0 (004f5ff0) at 004f6103 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f4fb8 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f6f20 (004f6f20) at 004f6ff7 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f7720 (004f7720) at 004f7792 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_CIcePick_FUN_004f95b0 (004f95b0) at 004f96c9 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f8563 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f8970 (004f8970) at 004f8ab3 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f8ad0 (004f8ad0) at 004f8aea [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f93a0 (004f93a0) at 004f9435 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9c30 (004f9c30) at 004f9cee [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004fae00 (004fae00) at 004faecd [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503080 (00503080) at 00503164 [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503a20 (00503a20) at 00503bd5 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_beginMorph_FUN_00520a80 (00520a80) at 00520b2e [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051fcc0 (0051fcc0) at 0051ffda [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_00520500 (00520500) at 0052058b [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525720 (00525720) at 005257ba [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 00525b77 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00526d90 (00526d90) at 0052705c [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00527740 (00527740) at 005277e6 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_CMoloch_process_FUN_00528d20 (00528d20) at 00528f86 [UNCONDITIONAL_CALL]
//   core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90 (0052db90) at 0052dbb3 [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_process_FUN_005448b0 (005448b0) at 00544b4b [UNCONDITIONAL_CALL]
//   core_npc.cpp_FUN_00544c50 (00544c50) at 00544d11 [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_00545ef0 (00545ef0) at 00545fa6 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005571f0 (005571f0) at 005572e0 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00557ea0 (00557ea0) at 00557fc1 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00558060 (00558060) at 005581c9 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568030 (00568030) at 00568108 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_SentinelBehavior_FUN_00568cd0 (00568cd0) at 00568da5 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a2800 (005a2800) at 005a293b [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a3580 (005a3580) at 005a3670 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bdb23 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bdd20 (005bdd20) at 005be3bd [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c1680 (005c1680) at 005c1e06 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c1f80 (005c1f80) at 005c1fc8 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c1fe0 (005c1fe0) at 005c22e6 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c2400 (005c2400) at 005c273e [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c2850 (005c2850) at 005c2cf8 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c48b0 (005c48b0) at 005c4a37 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c5270 (005c5270) at 005c54ae [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c5b90 (005c5b90) at 005c5ca3 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c6750 (005c6750) at 005c67ab [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_process_FUN_005c6e90 (005c6e90) at 005c6fb0 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 (005d8ba0) at 005d8f08 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_FUN_005d9d30 (005d9d30) at 005d9e36 [UNCONDITIONAL_CALL]
//   core_tbplayer.cpp_FUN_005da240 (005da240) at 005da276 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_process_FUN_005db050 (005db050) at 005db144 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e6b41 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_FUN_005e7030 (005e7030) at 005e7191 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 (005efde0) at 005efff0 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_FUN_005f1ac0 (005f1ac0) at 005f1ce4 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fc4f0 (005fc4f0) at 005fc5aa [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fca10 (005fca10) at 005fca4c [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_PickupSomethingPossibly_FUN_005fb530 (005fb530) at 005fba98 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005fa15a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_motion_cpp_0063aa47
//   TerminatedCString s_CMotionController_setDes_0063aa5a
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_motion.cpp_CMotionController_findAndStartTransition_FUN_0052d950
//   core_motion.cpp_CMotionController_reverseTransition_FUN_0052da50

#include "nocturne.h"

void __cdecl
core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
          (CMotionController *this_ptr,int desired_state_index,int force_immediate)

{
  int in_stack_00000010;
  
  if (desired_state_index < 0) {
    this_ptr->state_index = -1;
    return;
  }
  if (this_ptr->motion_list_ptr->state_count <= desired_state_index) {
    g_CurrentFilename = "..\\core\\motion.cpp";
    g_CurrentLineNumber = 0x274;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMotionController::setDesiredState - invalid state index");
  }
  if (desired_state_index != this_ptr->state_index) {
    if (this_ptr->in_transition != 0) {
      if (this_ptr->tween_direction == 0) {
        core_motion_cpp_CMotionController_reverseTransition_FUN_0052da50(this_ptr);
      }
      this_ptr->in_transition = 0;
    }
    this_ptr->tween_set_new_state = 0;
    this_ptr->state_index = desired_state_index;
  }
  if (in_stack_00000010 == 0) {
    return;
  }
  core_motion_cpp_CMotionController_findAndStartTransition_FUN_0052d950(this_ptr);
  return;
}


// Assembly code:
// 0052db00: PUSH EBX
//   Label: core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
// 0052db01: PUSH ESI
// 0052db02: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052db06: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0052db0a: TEST ESI,ESI
// 0052db0c: JL 0x0052db40
//   XREF to: 0052db40 (CONDITIONAL_JUMP)
// 0052db0e: MOV EAX,dword ptr [EBX]
// 0052db10: CMP ESI,dword ptr [EAX]
// 0052db12: JGE 0x0052db4a
//   XREF to: 0052db4a (CONDITIONAL_JUMP)
// 0052db14: CMP ESI,dword ptr [EBX + 0x28]
//   Label: LAB_0052db14
// 0052db17: JZ 0x0052db36
//   XREF to: 0052db36 (CONDITIONAL_JUMP)
// 0052db19: CMP dword ptr [EBX + 0x2c],0x0
// 0052db1d: JZ 0x0052db2c
//   XREF to: 0052db2c (CONDITIONAL_JUMP)
// 0052db1f: CMP dword ptr [EBX + 0x20],0x0
// 0052db23: JZ 0x0052db71
//   XREF to: 0052db71 (CONDITIONAL_JUMP)
// 0052db25: MOV dword ptr [EBX + 0x2c],0x0
//   Label: LAB_0052db25
// 0052db2c: MOV dword ptr [EBX + 0x24],0x0
//   Label: LAB_0052db2c
// 0052db33: MOV dword ptr [EBX + 0x28],ESI
// 0052db36: CMP dword ptr [ESP + 0x14],0x0
//   Label: LAB_0052db36
//   XREF to: Stack[0xc] (READ)
// 0052db3b: JNZ 0x0052db7c
//   XREF to: 0052db7c (CONDITIONAL_JUMP)
// 0052db3d: POP ESI
// 0052db3e: POP EBX
// 0052db3f: RET
// 0052db40: MOV dword ptr [EBX + 0x28],0xffffffff
//   Label: LAB_0052db40
// 0052db47: POP ESI
// 0052db48: POP EBX
// 0052db49: RET
// 0052db4a: PUSH EDI
//   Label: LAB_0052db4a
// 0052db4b: MOV ECX,0x63aa47
//   XREF to: 0063aa47 (PARAM)
// 0052db50: MOV EDI,0x274
// 0052db55: PUSH 0x63aa5a
//   XREF to: 0063aa5a (DATA)
// 0052db5a: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0052db60: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0052db66: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052db6b: ADD ESP,0x4
// 0052db6e: POP EDI
// 0052db6f: JMP 0x0052db14
//   XREF to: 0052db14 (UNCONDITIONAL_JUMP)
// 0052db71: PUSH EBX
//   Label: LAB_0052db71
// 0052db72: CALL core_motion.cpp_CMotionController_reverseTransition_FUN_0052da50
//   XREF to: 0052da50 (UNCONDITIONAL_CALL)
// 0052db77: ADD ESP,0x4
// 0052db7a: JMP 0x0052db25
//   XREF to: 0052db25 (UNCONDITIONAL_JUMP)
// 0052db7c: PUSH EBX
//   Label: LAB_0052db7c
// 0052db7d: CALL core_motion.cpp_CMotionController_findAndStartTransition_FUN_0052d950
//   XREF to: 0052d950 (UNCONDITIONAL_CALL)
// 0052db82: ADD ESP,0x4
// 0052db85: POP ESI
// 0052db86: POP EBX
// 0052db87: RET

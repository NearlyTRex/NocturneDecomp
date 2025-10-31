// Name: sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
// Address: 005a8cb0
// Address Range: [[005a8cb0, 005a8ce9]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
// Cross-references:
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c5d0 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042a830 (0042a830) at 0042abd3 [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ec70 (0048ec70) at 0048f2cd [UNCONDITIONAL_CALL]
//   core_event.cpp_FUN_004b0f00 (004b0f00) at 004b0f64 [UNCONDITIONAL_CALL]
//   core_event.cpp_LargeEventHandler_FUN_004aacc0 (004aacc0) at 004ac587 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireball_onCollision_FUN_004c1690 (004c1690) at 004c173e [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_SoundPushPlayPopAgain_FUN_004d1f20 (004d1f20) at 004d1f67 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_rollCredits_FUN_004e4010 (004e4010) at 004e43b7 [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450 (00506450) at 0050664f [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0 (0050aba0) at 0050ad0c [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40 (0050ad40) at 0050adc2 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050a4f0 (0050a4f0) at 0050a5ed [UNCONDITIONAL_CALL]
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 0051287f [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_0055ff00 (0055ff00) at 00560085 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00581139 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b3ae0 (005b3ae0) at 005b3b1c [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b3b30 (005b3b30) at 005b3b69 [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b2770 (005b2770) at 005b290e [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b2dd0 (005b2dd0) at 005b2ed2 [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b2fd0 (005b2fd0) at 005b3406 [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b3aa0 (005b3aa0) at 005b3ad6 [UNCONDITIONAL_CALL]
//   core_sound.cpp_GetChannelVolumesPlaySplashSfx_FUN_005b3830 (005b3830) at 005b396a [UNCONDITIONAL_CALL]
//   core_sound.cpp_PlaySfxByStringMaybe_FUN_005b1fd0 (005b1fd0) at 005b2216 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bdc83 [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_CTommyGun_process_FUN_005de360 (005de360) at 005de560 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_FUN_005e8b50 (005e8b50) at 005e8b8e [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a9550 (005a9550) at 005a956f [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a9580 (005a9580) at 005a95c8 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a95e0 (005a95e0) at 005a960c [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a9620 (005a9620) at 005a964c [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005ad3b0 (005ad3b0) at 005ad48c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_006508cc
//   TerminatedCString s_popSfxOptions_stack_empt_006508e1
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 g_SfxLastSlot
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

/* Signature: int sound_sndmain.cpp_popSfxOptions(int param_1) */

void sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0
               (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX)

{
  g_SfxLastSlot = g_SfxLastSlot + -1;
  if (-1 < g_SfxLastSlot) {
    return;
  }
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 0xd2f;
  core_main_c_displayErrorAndQuit_FUN_00506f10("popSfxOptions - stack empty",unaff_EBX);
  return;
}


// Assembly code:
// 005a8cb0: MOV EDX,dword ptr [0x03f624a4]
//   Label: sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 03f624a4 (READ)
// 005a8cb6: DEC EDX
// 005a8cb7: MOV dword ptr [0x03f624a4],EDX
//   XREF to: 03f624a4 (WRITE)
// 005a8cbd: TEST EDX,EDX
// 005a8cbf: JL 0x005a8cc2
//   XREF to: 005a8cc2 (CONDITIONAL_JUMP)
// 005a8cc1: RET
// 005a8cc2: PUSH ESI
//   Label: LAB_005a8cc2
// 005a8cc3: PUSH EBX
// 005a8cc4: MOV EBX,0x6508cc
//   XREF to: 006508cc (PARAM)
// 005a8cc9: MOV ESI,0xd2f
// 005a8cce: PUSH 0x6508e1
//   XREF to: 006508e1 (DATA)
// 005a8cd3: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 005a8cd9: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005a8cdf: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a8ce4: ADD ESP,0x4
// 005a8ce7: POP EBX
// 005a8ce8: POP ESI
// 005a8ce9: RET

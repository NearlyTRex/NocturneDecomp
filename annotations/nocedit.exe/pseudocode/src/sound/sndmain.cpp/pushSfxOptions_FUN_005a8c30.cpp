// Name: sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
// Address: 005a8c30
// Address Range: [[005a8c30, 005a8ca1]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
// Cross-references:
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c58e [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CBoxActor_process_FUN_004219e0 (004219e0) at 00421bf4 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042a830 (0042a830) at 0042abaa [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ec70 (0048ec70) at 0048f28b [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004ac559 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004b0f00 (004b0f00) at 004b0f31 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireball_onCollision_FUN_004c1690 (004c1690) at 004c170a [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_SoundPushPlayPopAgain_FUN_004d1f20 (004d1f20) at 004d1f43 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_rollCredits_FUN_004e4010 (004e4010) at 004e438a [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450 (00506450) at 00506613 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0 (0050aba0) at 0050acf1 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40 (0050ad40) at 0050ada7 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050a4f0 (0050a4f0) at 0050a5ad [UNCONDITIONAL_CALL]
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 00512863 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_0055ff00 (0055ff00) at 0056005f [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00581106 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b3ae0 (005b3ae0) at 005b3ae5 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b3b30 (005b3b30) at 005b3b31 [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b2770 (005b2770) at 005b288e [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b2dd0 (005b2dd0) at 005b2ea5 [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b2fd0 (005b2fd0) at 005b3384 [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b3aa0 (005b3aa0) at 005b3aa1 [UNCONDITIONAL_CALL]
//   core_sound.cpp_GetChannelVolumesPlaySplashSfx_FUN_005b3830 (005b3830) at 005b3938 [UNCONDITIONAL_CALL]
//   core_sound.cpp_PlaySfxByStringMaybe_FUN_005b1fd0 (005b1fd0) at 005b21bd [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bdc67 [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_CTommyGun_process_FUN_005de360 (005de360) at 005de510 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_FUN_005e8b50 (005e8b50) at 005e8b59 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a9550 (005a9550) at 005a9551 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a9580 (005a9580) at 005a9584 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a95e0 (005a95e0) at 005a95e1 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a9620 (005a9620) at 005a9621 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005ad3b0 (005ad3b0) at 005ad453 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_0065089b
//   TerminatedCString s_pushSfxOptions_stack_ful_006508b0
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 g_SfxLastSlot
//   SfxOptions[8] DAT_03f624a8
//   undefined4 g_SfxLastSlot.volume
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

/* Signature: int sound_sndmain.cpp_pushSfxOptions() */

void sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30
               (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX)

{
  int iVar1;
  SfxOptions *pSVar2;
  SfxOptions *pSVar3;
  byte bVar4;
  
  bVar4 = 0;
  g_SfxLastSlot = g_SfxLastSlot + 1;
  if (7 < g_SfxLastSlot) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0xd20;
    core_main_c_displayErrorAndQuit_FUN_00506f10("pushSfxOptions - stack full",unaff_EBX);
  }
  pSVar2 = DAT_03f624a8 + g_SfxLastSlot + -1;
  pSVar3 = DAT_03f624a8 + g_SfxLastSlot;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pSVar3->field0_0x0 = *(undefined4 *)pSVar2->field0_0x0;
    pSVar2 = (SfxOptions *)((int)pSVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pSVar3 = (SfxOptions *)((int)pSVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  return;
}


// Assembly code:
// 005a8c30: PUSH ESI
//   Label: sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
// 005a8c31: PUSH EDI
// 005a8c32: MOV EDX,dword ptr [0x03f624a4]
//   XREF to: 03f624a4 (READ)
// 005a8c38: INC EDX
// 005a8c39: MOV dword ptr [0x03f624a4],EDX
//   XREF to: 03f624a4 (WRITE)
// 005a8c3f: CMP EDX,0x8
// 005a8c42: JGE 0x005a8c7b
//   XREF to: 005a8c7b (CONDITIONAL_JUMP)
// 005a8c44: MOV ECX,dword ptr [0x03f624a4]
//   Label: LAB_005a8c44
//   XREF to: 03f624a4 (READ)
// 005a8c4a: LEA EAX,[ECX + -0x1]
// 005a8c4d: SHL EAX,0x4
// 005a8c50: LEA ESI,[EAX*0x8 + 0x0]
// 005a8c57: SUB ESI,EAX
// 005a8c59: MOV EAX,ECX
// 005a8c5b: SHL EAX,0x4
// 005a8c5e: MOV EDX,EAX
// 005a8c60: SHL EAX,0x3
// 005a8c63: SUB EAX,EDX
// 005a8c65: LEA ESI,[ESI + 0x3f624a8]
//   XREF to: 03f624a8 (DATA)
// 005a8c6b: MOV ECX,0x1c
// 005a8c70: LEA EDI,[EAX + 0x3f624a8]
//   XREF to: 03f624a8 (DATA)
// 005a8c76: MOVSD.REP ES:EDI,ESI
//   XREF to: 03f624a8 (DATA)
//   XREF to: 03f624ac (DATA)
// 005a8c78: POP EDI
// 005a8c79: POP ESI
// 005a8c7a: RET
// 005a8c7b: PUSH EBX
//   Label: LAB_005a8c7b
// 005a8c7c: MOV EBX,0x65089b
//   XREF to: 0065089b (PARAM)
// 005a8c81: MOV ESI,0xd20
// 005a8c86: PUSH 0x6508b0
//   XREF to: 006508b0 (DATA)
// 005a8c8b: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 005a8c91: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005a8c97: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a8c9c: ADD ESP,0x4
// 005a8c9f: POP EBX
// 005a8ca0: JMP 0x005a8c44
//   XREF to: 005a8c44 (UNCONDITIONAL_JUMP)

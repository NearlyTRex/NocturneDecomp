// Name: core_sound.cpp_GetChannelVolumesPlaySplashSfx_FUN_005b3830
// Address: 005b3830
// Address Range: [[005b3830, 005b399d]]
// Convention: unknown
// Signature: undefined core_sound.cpp_GetChannelVolumesPlaySplashSfx_FUN_005b3830()
// Cross-references:
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 00512aa1 [UNCONDITIONAL_CALL]
//   core_menu.cpp_ShowOptionsScreen_FUN_00512d30 (00512d30) at 00512ef2 [UNCONDITIONAL_CALL]
//   core_menu.cpp_showMainGameMenu_FUN_00512f40 (00512f40) at 00513341 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_splash-music-44.wav_006527ee
//   TerminatedCString s_splash_music_22_wav_00652802
//   undefined4 DAT_00663310
//   undefined4 DAT_00663314
//   undefined4 DAT_00663318
// Function calls:
//   core_sound.cpp_RelatedToSoundCleanup_FUN_005b39a0
//   sound_sndmain.cpp_FUN_005aa020
//   sound_sndmain.cpp_FUN_005aa0a0
//   sound_sndmain.cpp_FUN_005aa1c0
//   sound_sndmain.cpp_FUN_005aaef0
//   sound_sndmain.cpp_FUN_005ab260
//   sound_sndmain.cpp_FUN_005ab6e0
//   sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
//   sound_sndmain.cpp_getSoundEnabled_FUN_005a96b0
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0
//   sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0
//   sound_sndmain.cpp_somethingWithStack_FUN_005a8b90
//   sound_sndmain.cpp_startSfx_FUN_005a8e90

#include "nocturne.h"

/* Signature: undefined1 core_sound.cpp_GetChannelVolumesPlaySplashSfx(CSound* param_1) */

void core_sound_cpp_GetChannelVolumesPlaySplashSfx_FUN_005b3830(void)

{
  float fVar1;
  int iVar2;
  
  fVar1 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90();
  if (DAT_00663310 < fVar1) {
    sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0();
  }
  fVar1 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90();
  if (DAT_00663314 < fVar1) {
    sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0();
  }
  fVar1 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90();
  if (DAT_00663318 < fVar1) {
    sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0();
  }
  iVar2 = sound_sndmain_cpp_getSoundEnabled_FUN_005a96b0();
  if (iVar2 == 0) {
    core_sound_cpp_RelatedToSoundCleanup_FUN_005b39a0();
    sound_sndmain_cpp_FUN_005ab6e0();
    sound_sndmain_cpp_FUN_005aa020();
    sound_sndmain_cpp_FUN_005aa0a0();
    sound_sndmain_cpp_FUN_005aa1c0();
    sound_sndmain_cpp_FUN_005aaef0();
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0();
    sound_sndmain_cpp_somethingWithStack_FUN_005a8b90();
    iVar2 = sound_sndmain_cpp_FUN_005ab260();
    if (iVar2 < 0x7531) {
      sound_sndmain_cpp_startSfx_FUN_005a8e90();
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      return;
    }
    sound_sndmain_cpp_startSfx_FUN_005a8e90();
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  }
  return;
}


// Assembly code:
// 005b3830: SUB ESP,0x4
//   Label: core_sound.cpp_GetChannelVolumesPlaySplashSfx_FUN_005b3830
// 005b3833: PUSH 0x1
// 005b3835: CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
//   XREF to: 005a9d90 (UNCONDITIONAL_CALL)
// 005b383a: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 005b383e: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x4] (READ)
// 005b3842: ADD ESP,0x4
// 005b3845: FCOMP float ptr [0x00663310]
//   XREF to: 00663310 (READ)
// 005b384b: FNSTSW AX
// 005b384d: SAHF
// 005b384e: JA 0x005b3973
//   XREF to: 005b3973 (CONDITIONAL_JUMP)
// 005b3854: PUSH 0x0
//   Label: LAB_005b3854
// 005b3856: CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
//   XREF to: 005a9d90 (UNCONDITIONAL_CALL)
// 005b385b: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 005b385f: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x4] (READ)
// 005b3863: ADD ESP,0x4
// 005b3866: FCOMP float ptr [0x00663314]
//   XREF to: 00663314 (READ)
// 005b386c: FNSTSW AX
// 005b386e: SAHF
// 005b386f: JBE 0x005b3881
//   XREF to: 005b3881 (CONDITIONAL_JUMP)
// 005b3871: PUSH dword ptr [0x00663314]
//   XREF to: 00663314 (READ)
// 005b3877: PUSH 0x0
// 005b3879: CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0
//   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)
// 005b387e: ADD ESP,0x8
// 005b3881: PUSH 0x2
//   Label: LAB_005b3881
// 005b3883: CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
//   XREF to: 005a9d90 (UNCONDITIONAL_CALL)
// 005b3888: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 005b388c: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x4] (READ)
// 005b3890: ADD ESP,0x4
// 005b3893: FCOMP float ptr [0x00663318]
//   XREF to: 00663318 (READ)
// 005b3899: FNSTSW AX
// 005b389b: SAHF
// 005b389c: JBE 0x005b38ae
//   XREF to: 005b38ae (CONDITIONAL_JUMP)
// 005b389e: PUSH dword ptr [0x00663318]
//   XREF to: 00663318 (READ)
// 005b38a4: PUSH 0x2
// 005b38a6: CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0
//   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)
// 005b38ab: ADD ESP,0x8
// 005b38ae: CALL sound_sndmain.cpp_getSoundEnabled_FUN_005a96b0
//   Label: LAB_005b38ae
//   XREF to: 005a96b0 (UNCONDITIONAL_CALL)
// 005b38b3: TEST EAX,EAX
// 005b38b5: JNZ 0x005b396f
//   XREF to: 005b396f (CONDITIONAL_JUMP)
// 005b38bb: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005b38bf: PUSH EDX
// 005b38c0: CALL core_sound.cpp_RelatedToSoundCleanup_FUN_005b39a0
//   XREF to: 005b39a0 (UNCONDITIONAL_CALL)
// 005b38c5: ADD ESP,0x4
// 005b38c8: PUSH 0x0
// 005b38ca: PUSH 0x0
// 005b38cc: PUSH 0x0
// 005b38ce: CALL sound_sndmain.cpp_FUN_005ab6e0
//   XREF to: 005ab6e0 (UNCONDITIONAL_CALL)
// 005b38d3: ADD ESP,0xc
// 005b38d6: PUSH 0x0
// 005b38d8: PUSH 0x0
// 005b38da: PUSH 0x0
// 005b38dc: PUSH 0x0
// 005b38de: PUSH 0x0
// 005b38e0: PUSH 0x0
// 005b38e2: CALL sound_sndmain.cpp_FUN_005aa020
//   XREF to: 005aa020 (UNCONDITIONAL_CALL)
// 005b38e7: ADD ESP,0x18
// 005b38ea: PUSH 0x3ff00000
// 005b38ef: PUSH 0x0
// 005b38f1: PUSH 0x0
// 005b38f3: PUSH 0x0
// 005b38f5: PUSH 0x0
// 005b38f7: PUSH 0x0
// 005b38f9: PUSH 0x0
// 005b38fb: PUSH 0x0
// 005b38fd: PUSH 0x3ff00000
// 005b3902: PUSH 0x0
// 005b3904: PUSH 0x0
// 005b3906: PUSH 0x0
// 005b3908: PUSH 0x0
// 005b390a: PUSH 0x0
// 005b390c: PUSH 0x0
// 005b390e: PUSH 0x0
// 005b3910: PUSH 0x3ff00000
// 005b3915: PUSH 0x0
// 005b3917: CALL sound_sndmain.cpp_FUN_005aa0a0
//   XREF to: 005aa0a0 (UNCONDITIONAL_CALL)
// 005b391c: ADD ESP,0x48
// 005b391f: PUSH 0x0
// 005b3921: PUSH 0x0
// 005b3923: PUSH 0x0
// 005b3925: PUSH 0x0
// 005b3927: PUSH 0x0
// 005b3929: PUSH 0x0
// 005b392b: CALL sound_sndmain.cpp_FUN_005aa1c0
//   XREF to: 005aa1c0 (UNCONDITIONAL_CALL)
// 005b3930: ADD ESP,0x18
// 005b3933: CALL sound_sndmain.cpp_FUN_005aaef0
//   XREF to: 005aaef0 (UNCONDITIONAL_CALL)
// 005b3938: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 005b393d: PUSH 0x1
// 005b393f: CALL sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0
//   XREF to: 005a8af0 (UNCONDITIONAL_CALL)
// 005b3944: ADD ESP,0x4
// 005b3947: PUSH 0x1
// 005b3949: CALL sound_sndmain.cpp_somethingWithStack_FUN_005a8b90
//   XREF to: 005a8b90 (UNCONDITIONAL_CALL)
// 005b394e: ADD ESP,0x4
// 005b3951: CALL sound_sndmain.cpp_FUN_005ab260
//   XREF to: 005ab260 (UNCONDITIONAL_CALL)
// 005b3956: CMP EAX,0x7530
// 005b395b: JLE 0x005b3988
//   XREF to: 005b3988 (CONDITIONAL_JUMP)
// 005b395d: PUSH 0x6527ee
//   XREF to: 006527ee (DATA)
// 005b3962: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 005b3967: ADD ESP,0x4
// 005b396a: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 005b396f: ADD ESP,0x4
//   Label: LAB_005b396f
// 005b3972: RET
// 005b3973: PUSH dword ptr [0x00663310]
//   Label: LAB_005b3973
//   XREF to: 00663310 (READ)
// 005b3979: PUSH 0x1
// 005b397b: CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0
//   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)
// 005b3980: ADD ESP,0x8
// 005b3983: JMP 0x005b3854
//   XREF to: 005b3854 (UNCONDITIONAL_JUMP)
// 005b3988: PUSH 0x652802
//   Label: LAB_005b3988
//   XREF to: 00652802 (DATA)
// 005b398d: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 005b3992: ADD ESP,0x4
// 005b3995: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 005b399a: ADD ESP,0x4
// 005b399d: RET

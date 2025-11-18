// Name: sound_sndmain.cpp_lockSound_FUN_005abd30
// Address: 005abd30
// Address Range: [[005abd30, 005abdb6]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_lockSound_FUN_005abd30(void)
// Cross-references:
//   core_tommygun.cpp_CTommyGun_process_FUN_005de360 (005de360) at 005de46d [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005ace90 (005ace90) at 005ace9b [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20 (005a9e20) at 005a9e62 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0 (005aaef0) at 005aaf28 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_formatActiveSounds_FUN_005a9f80 (005a9f80) at 005a9f84 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_freeAllSamples_FUN_005aa660 (005aa660) at 005aa662 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_freeSampleByName_FUN_005aa360 (005aa360) at 005aa367 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getChannelLevels_FUN_005ac990 (005ac990) at 005ac9d7 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getRecordingDeviceCaps_FUN_005abb10 (005abb10) at 005abb10 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720 (005ab720) at 005ab736 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0 (005aa3f0) at 005aa401 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00 (005a5d00) at 005a5d52 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0 (005ab2e0) at 005ab2f6 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_isSampleLoaded_FUN_005aa3c0 (005aa3c0) at 005aa3c1 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_killAllSfx_FUN_005a9cc0 (005a9cc0) at 005a9cc7 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_killSfxByName_FUN_005aa2f0 (005aa2f0) at 005aa2f6 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0 (005a9cf0) at 005a9d4a [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startRecording_FUN_005aba90 (005aba90) at 005abaaf [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfx_FUN_005a8e90 (005a8e90) at 005a8f2f [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_stopRecordingDevice_FUN_005abb60 (005abb60) at 005abb60 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_00650e22
//   TerminatedCString s_lockSound_unable_to_crea_00650e37
//   TerminatedCString s_sound_sndmain_cpp_00650e61
//   TerminatedCString s_lockSound_lock_imbalance_00650e76
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   HANDLE g_SoundMutex
//   int g_SoundLockCount
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   wincore_winrun.cpp_createMutex_FUN_005f3fe0
//   wincore_winrun.cpp_waitForMutex_FUN_005f3ff0

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_lockSound_FUN_005abd30(void)

{
  if (g_SoundMutex == (HANDLE)0x0) {
    g_SoundMutex = wincore_winrun_cpp_createMutex_FUN_005f3fe0();
    if (g_SoundMutex == (HANDLE)0x0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 0x1575;
      core_main_c_displayErrorAndQuit_FUN_00506f10("lockSound - unable to create mutex object");
    }
  }
  wincore_winrun_cpp_waitForMutex_FUN_005f3ff0(g_SoundMutex);
  g_SoundLockCount = g_SoundLockCount + 1;
  if (g_SoundLockCount < 100) {
    return;
  }
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 0x157f;
  core_main_c_displayErrorAndQuit_FUN_00506f10("lockSound - lock imbalance?");
  return;
}


// Assembly code:
// 005abd30: PUSH ESI
//   Label: sound_sndmain.cpp_lockSound_FUN_005abd30
// 005abd31: PUSH EDI
// 005abd32: CMP dword ptr [0x03f69408],0x0
//   XREF to: 03f69408 (READ)
// 005abd39: JNZ 0x005abd6e
//   XREF to: 005abd6e (CONDITIONAL_JUMP)
// 005abd3b: CALL wincore_winrun.cpp_createMutex_FUN_005f3fe0
//   XREF to: 005f3fe0 (UNCONDITIONAL_CALL)
// 005abd40: MOV [0x03f69408],EAX
//   XREF to: 03f69408 (WRITE)
// 005abd45: TEST EAX,EAX
// 005abd47: JNZ 0x005abd6e
//   XREF to: 005abd6e (CONDITIONAL_JUMP)
// 005abd49: PUSH EBX
// 005abd4a: MOV ECX,0x650e22
//   XREF to: 00650e22 (PARAM)
// 005abd4f: MOV EBX,0x1575
// 005abd54: PUSH 0x650e37
//   XREF to: 00650e37 (DATA)
// 005abd59: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005abd5f: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005abd65: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005abd6a: ADD ESP,0x4
// 005abd6d: POP EBX
// 005abd6e: MOV ESI,dword ptr [0x03f69408]
//   Label: LAB_005abd6e
//   XREF to: 03f69408 (READ)
// 005abd74: PUSH ESI
// 005abd75: CALL wincore_winrun.cpp_waitForMutex_FUN_005f3ff0
//   XREF to: 005f3ff0 (UNCONDITIONAL_CALL)
// 005abd7a: MOV EDI,dword ptr [0x03f6940c]
//   XREF to: 03f6940c (READ)
// 005abd80: INC EDI
// 005abd81: ADD ESP,0x4
// 005abd84: MOV dword ptr [0x03f6940c],EDI
//   XREF to: 03f6940c (WRITE)
// 005abd8a: CMP EDI,0x63
// 005abd8d: JG 0x005abd92
//   XREF to: 005abd92 (CONDITIONAL_JUMP)
// 005abd8f: POP EDI
// 005abd90: POP ESI
// 005abd91: RET
// 005abd92: MOV EAX,0x650e61
//   Label: LAB_005abd92
//   XREF to: 00650e61 (PARAM)
// 005abd97: MOV EDX,0x157f
// 005abd9c: PUSH 0x650e76
//   XREF to: 00650e76 (DATA)
// 005abda1: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005abda6: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005abdac: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005abdb1: ADD ESP,0x4
// 005abdb4: POP EDI
// 005abdb5: POP ESI
// 005abdb6: RET

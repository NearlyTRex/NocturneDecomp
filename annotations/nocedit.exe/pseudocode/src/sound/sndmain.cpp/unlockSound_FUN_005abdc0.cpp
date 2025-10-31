// Name: sound_sndmain.cpp_unlockSound_FUN_005abdc0
// Address: 005abdc0
// Address Range: [[005abdc0, 005abe10]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_unlockSound_FUN_005abdc0(void)
// Cross-references:
//   core_tommygun.cpp_CTommyGun_process_FUN_005de360 (005de360) at 005de574 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CallComputingDelay2_FUN_005a9ae0 (005a9ae0) at 005a9b30 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CallComputingDelay_FUN_005a9b40 (005a9b40) at 005a9b88 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CallToLockDoSomethingAndUnlockSound2_FUN_005a96e0 (005a96e0) at 005a9704 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_ComputingDelayBetweenLocks_FUN_005a9820 (005a9820) at 005a98a1 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_DoSomethingANdLockUnlockSound_FUN_005a9c70 (005a9c70) at 005a9cae [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a9720 (005a9720) at 005a9788 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a97e0 (005a97e0) at 005a980f [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a9910 (005a9910) at 005a995f [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a9970 (005a9970) at 005a99f1 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a9a70 (005a9a70) at 005a9ac7 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a9c10 (005a9c10) at 005a9c2e [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a9f80 (005a9f80) at 005a9fa6 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005aa2f0 (005aa2f0) at 005aa315 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005aa360 (005aa360) at 005aa3aa [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005aa3c0 (005aa3c0) at 005aa3de [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005aaef0 (005aaef0) at 005ab10d [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005aba90 (005aba90) at 005abafa [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005abb10 (005abb10) at 005abb28 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005ac990 (005ac990) at 005aca20 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_LockFreeSampleAndUnlock_FUN_005aa660 (005aa660) at 005aa68a [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40 (005a9c40) at 005a9c5d [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SoundDelayComputeThing_FUN_005a9a00 (005a9a00) at 005a9a57 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SoundLockKillAndUnlock_FUN_005a5d00 (005a5d00) at 005a5d85 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660 (005a9660) at 005a967d [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_YetAnother2ComputingDelayCall_FUN_005a98b0 (005a98b0) at 005a98ff [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20 (005a9e20) at 005a9e8d [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720 (005ab720) at 005ab73b [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0 (005aa3f0) at 005aa463 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0 (005ab2e0) at 005ab2fb [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_killAllSoundSlots_FUN_005a9cc0 (005a9cc0) at 005a9ce5 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_lockSound_PollStream_FUN_005ace90 (005ace90) at 005acef0 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0 (005a9cf0) at 005a9d65 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setSfxUserData_FUN_005a9ba0 (005a9ba0) at 005a9bf5 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfx_FUN_005a8e90 (005a8e90) at 005a9148 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_stopRecordingDevice_FUN_005abb60 (005abb60) at 005abb86 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_00650e92
//   TerminatedCString s_unlockSound_sound_was_no_00650ea7
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   HANDLE g_SoundMutex
//   int g_SoundLockCount
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   wincore_winrun.cpp_releaseMutex_FUN_005f4050

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_unlockSound_FUN_005abdc0(void)

{
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x1586;
    core_main_c_displayErrorAndQuit_FUN_00506f10("unlockSound - sound was not locked!");
  }
  g_SoundLockCount = g_SoundLockCount + -1;
  wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_SoundMutex);
  return;
}


// Assembly code:
// 005abdc0: PUSH ESI
//   Label: sound_sndmain.cpp_unlockSound_FUN_005abdc0
// 005abdc1: PUSH EDI
// 005abdc2: CMP dword ptr [0x03f6940c],0x1
//   XREF to: 03f6940c (READ)
// 005abdc9: JL 0x005abdea
//   XREF to: 005abdea (CONDITIONAL_JUMP)
// 005abdcb: MOV EDI,dword ptr [0x03f6940c]
//   Label: LAB_005abdcb
//   XREF to: 03f6940c (READ)
// 005abdd1: MOV ESI,dword ptr [0x03f69408]
//   XREF to: 03f69408 (READ)
// 005abdd7: DEC EDI
// 005abdd8: PUSH ESI
// 005abdd9: MOV dword ptr [0x03f6940c],EDI
//   XREF to: 03f6940c (WRITE)
// 005abddf: CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050
//   XREF to: 005f4050 (UNCONDITIONAL_CALL)
// 005abde4: ADD ESP,0x4
// 005abde7: POP EDI
// 005abde8: POP ESI
// 005abde9: RET
// 005abdea: PUSH EBX
//   Label: LAB_005abdea
// 005abdeb: MOV ECX,0x650e92
//   XREF to: 00650e92 (PARAM)
// 005abdf0: MOV EBX,0x1586
// 005abdf5: PUSH 0x650ea7
//   XREF to: 00650ea7 (DATA)
// 005abdfa: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005abe00: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005abe06: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005abe0b: ADD ESP,0x4
// 005abe0e: POP EBX
// 005abe0f: JMP 0x005abdcb
//   XREF to: 005abdcb (UNCONDITIONAL_JUMP)

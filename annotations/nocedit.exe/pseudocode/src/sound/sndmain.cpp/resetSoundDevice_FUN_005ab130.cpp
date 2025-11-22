// Name: sound_sndmain.cpp_resetSoundDevice_FUN_005ab130
// Address: 005ab130
// Address Range: [[005ab130, 005ab161]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_resetSoundDevice_FUN_005ab130(void)
// Cross-references:
//   core_game.cpp_CGame_rollCredits_FUN_004e4010 (004e4010) at 004e40f4 [UNCONDITIONAL_CALL]
//   core_menu.cpp_configureSoundOptions_FUN_00511e50 (00511e50) at 00512b66 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00581161 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589b10 (00589b10) at 00589b8e [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589c20 (00589c20) at 00589eb2 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058d25c [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_reset_FUN_005b39a0 (005b39a0) at 005b39a0 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_shutdown_FUN_005b2f70 (005b2f70) at 005b2fb4 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_closeSoundDevice_FUN_005ab660 (005ab660) at 005ab662 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0 (005aaef0) at 005aaf1e [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setSoundEnabled_FUN_005a96c0 (005a96c0) at 005a96cb [CONDITIONAL_JUMP]
//   sound_sndmain.cpp_shutdownSoundSystem_FUN_005aaeb0 (005aaeb0) at 005aaec4 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0 (005ad5c0) at 005ad7c5 [UNCONDITIONAL_CALL]
// Globals:
//   CSoundDevice* g_CSoundDevicePtr
//   int g_SoundBusyFlag
// Function calls:
//   sound_sndmain.cpp_freeMixBuffers_FUN_005a5900
//   sound_sndmain.cpp_killAllSfx_FUN_005a9cc0

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_resetSoundDevice_FUN_005ab130(void)

{
  int iVar1;
  undefined4 uStack0000000c;
  
  sound_sndmain_cpp_killAllSfx_FUN_005a9cc0();
  if (g_CSoundDevicePtr != (CSoundDevice *)0x0) {
    iVar1 = (*g_CSoundDevicePtr->vtable->reset)(g_CSoundDevicePtr);
    if (iVar1 == 0) {
      return 0;
    }
  }
  g_SoundBusyFlag = 0;
  uStack0000000c = 0x5ab15c;
  sound_sndmain_cpp_freeMixBuffers_FUN_005a5900();
  return 1;
}


// Assembly code:
// 005ab130: CALL sound_sndmain.cpp_killAllSfx_FUN_005a9cc0
//   Label: sound_sndmain.cpp_resetSoundDevice_FUN_005ab130
//   XREF to: 005a9cc0 (UNCONDITIONAL_CALL)
// 005ab135: MOV EDX,dword ptr [0x03f69268]
//   XREF to: 03f69268 (READ)
// 005ab13b: TEST EDX,EDX
// 005ab13d: JZ 0x005ab14f
//   XREF to: 005ab14f (CONDITIONAL_JUMP)
// 005ab13f: MOV EAX,EDX
// 005ab141: PUSH EAX
// 005ab142: MOV EDX,dword ptr [EDX]
// 005ab144: CALL dword ptr [EDX + 0x8]
// 005ab147: ADD ESP,0x4
// 005ab14a: TEST EAX,EAX
// 005ab14c: JNZ 0x005ab14f
//   XREF to: 005ab14f (CONDITIONAL_JUMP)
// 005ab14e: RET
// 005ab14f: XOR ECX,ECX
//   Label: LAB_005ab14f
// 005ab151: MOV dword ptr [0x03f6926c],ECX
//   XREF to: 03f6926c (WRITE)
// 005ab157: CALL sound_sndmain.cpp_freeMixBuffers_FUN_005a5900
//   XREF to: 005a5900 (UNCONDITIONAL_CALL)
// 005ab15c: MOV EAX,0x1
//   Label: LAB_005ab15c
// 005ab161: RET

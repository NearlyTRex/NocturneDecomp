// Name: sound_sndmain.cpp_setSoundEnabled_FUN_005a96c0
// Address: 005a96c0
// Address Range: [[005a96c0, 005a96d1]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_setSoundEnabled_FUN_005a96c0(int enable)
// Cross-references:
//   core_game.cpp_SaveRelated_FUN_004dcee0 (004dcee0) at 004dd030 [UNCONDITIONAL_CALL]
//   core_menu.cpp_configureSoundOptions_FUN_00511e50 (00511e50) at 005126de [UNCONDITIONAL_CALL]
//   core_menu.cpp_showMainGameMenu_FUN_00512f40 (00512f40) at 0051322d [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_readIni_FUN_005abf20 (005abf20) at 005ac131 [UNCONDITIONAL_CALL]
// Globals:
//   int g_SoundEnabled

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setSoundEnabled_FUN_005a96c0(int enable)

{
  int iVar1;
  undefined4 uStack0000000c;
  
  g_SoundEnabled = enable;
  if (enable == 0) {
    return enable;
  }
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
// 005a96c0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: sound_sndmain.cpp_setSoundEnabled_FUN_005a96c0
//   XREF to: Stack[0x4] (READ)
// 005a96c4: MOV [0x03f69274],EAX
//   XREF to: 03f69274 (WRITE)
// 005a96c9: TEST EAX,EAX
// 005a96cb: JNZ 0x005ab130
//   XREF to: 005ab130 (CONDITIONAL_JUMP)
// 005a96d1: RET

// Name: sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0
// Address: 005272e0
// Address Range: [[005272e0, 0052737a]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setSfxChannelVol_FUN_005272e0(int channel_index,float volume)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setSfxChannelVol_FUN_005272e0(int channel_index,float volume)

{
  int *piVar1;
  uint uVar2;
  CSfxSlot *pCVar3;
  
  if ((channel_index < 0) || (0x1f < channel_index)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 3890;
    core_main_c_displayErrorAndQuit_FUN_004c8440("setSfxChannelVol - invalid channel index: %d",channel_index);
  }
  piVar1 = _DAT_02dc8318;
  *(float *)(channel_index * 4 + 0x2dc7958) = volume;
  if (piVar1 != (int *)0x0) {
    uVar2 = sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0();
    if (uVar2 != 0) {
      pCVar3 = g_CSfxSlot_ARRAY_02dbd374;
      sound_sndmain_cpp_lockSound_FUN_00528800();
      do {
        if (((pCVar3->playback_state != 0) && (pCVar3->hardware_buffer_handle != 0)) &&
           (channel_index == (pCVar3->options).channel_index)) {
          (**(code **)(*_DAT_02dc8318 + 0x40))(_DAT_02dc8318,pCVar3,8);
        }
        pCVar3 = pCVar3 + 1;
      } while (pCVar3 != (CSfxSlot *)&DAT_02dc1b74);
      sound_sndmain_cpp_unlockSound_FUN_00528890();
      return;
    }
  }
  return;
}

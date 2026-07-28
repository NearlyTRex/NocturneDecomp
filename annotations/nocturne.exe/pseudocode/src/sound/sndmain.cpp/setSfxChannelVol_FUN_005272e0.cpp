// Name: sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0
// Address: 005272e0
// Address Range: [[005272e0, 0052737a]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setSfxChannelVol_FUN_005272e0(int channel_index,float volume)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setSfxChannelVol_FUN_005272e0(int channel_index,float volume)

{
  uint uVar1;
  int *piVar2;
  
  if ((channel_index < 0) || (0x1f < channel_index)) {
    PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    INT_01cc4804 = 0xf32;
    core_main_c_FUN_004c8440("setSfxChannelVol - invalid channel index: %d",channel_index);
  }
  piVar2 = _DAT_02dc8318;
  *(float *)(channel_index * 4 + 0x2dc7958) = volume;
  if (piVar2 != (int *)0x0) {
    uVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0();
    if (uVar1 != 0) {
      piVar2 = (int *)0x2dbd374;
      sound_sndmain_cpp_lockSound_FUN_00528800();
      do {
        if (((piVar2[0x1c] != 0) && (piVar2[0x1b] != 0)) && (channel_index == *piVar2)) {
          (**(code **)(*_DAT_02dc8318 + 0x40))(_DAT_02dc8318,piVar2,8);
        }
        piVar2 = piVar2 + 0x48;
      } while (piVar2 != (int *)&DAT_02dc1b74);
      sound_sndmain_cpp_unlockSound_FUN_00528890();
      return;
    }
  }
  return;
}

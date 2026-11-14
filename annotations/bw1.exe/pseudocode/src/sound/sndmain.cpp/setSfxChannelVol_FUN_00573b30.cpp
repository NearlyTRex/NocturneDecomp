// Name: sound_sndmain.cpp_setSfxChannelVol_FUN_00573b30
// Address: 00573b30
// Address Range: [[00573b30, 00573bbe]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setSfxChannelVol_FUN_00573b30(int channel_index,float volume)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setSfxChannelVol_FUN_00573b30(int channel_index,float volume)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if ((channel_index < 0) || (0x1f < channel_index)) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x1105;
    core_main_c_FUN_005030e0("setSfxChannelVol - invalid channel index: %d",channel_index);
  }
  iVar1 = _DAT_02c80650;
  *(float *)(channel_index * 4 + 0x2c7fc90) = volume;
  if (iVar1 != 0) {
    uVar2 = sound_sndmain_cpp_hasHardware3DSound_FUN_00575560();
    if (0 < (int)uVar2) {
      sound_sndmain_cpp_lockSound_FUN_00575d20();
      piVar3 = (int *)0x2c745ec;
      do {
        if (((piVar3[0x19] != 0) && (piVar3[0x18] != 0)) && (channel_index == *piVar3)) {
          *(byte *)(piVar3 + 0x46) = *(byte *)(piVar3 + 0x46) | 8;
        }
        piVar3 = piVar3 + 0x47;
      } while (piVar3 != (int *)&DAT_02c78cec);
      sound_sndmain_cpp_unlockSound_FUN_00573e70();
      return;
    }
  }
  return;
}

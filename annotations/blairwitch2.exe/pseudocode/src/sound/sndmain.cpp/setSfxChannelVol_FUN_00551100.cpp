// Name: sound_sndmain.cpp_setSfxChannelVol_FUN_00551100
// Address: 00551100
// Address Range: [[00551100, 0055118e]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setSfxChannelVol_FUN_00551100(int channel_index,float volume)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setSfxChannelVol_FUN_00551100(int channel_index,float volume)

{
  int iVar1;
  int extraout_EAX;
  int *piVar2;
  int unaff_ESI;
  
  if ((channel_index < 0) || (0x1f < channel_index)) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x110e;
    core_main_c_FUN_004e4500("setSfxChannelVol - invalid channel index: %d",channel_index);
  }
  iVar1 = _DAT_02648e80;
  *(float *)(channel_index * 4 + 0x26484c0) = volume;
  if (iVar1 != 0) {
    sound_sndmain_cpp_FUN_00552b30(unaff_ESI);
    if (0 < extraout_EAX) {
      sound_sndmain_cpp_lockSound_FUN_005532f0();
      piVar2 = (int *)0x263cf1c;
      do {
        if (((piVar2[0x19] != 0) && (piVar2[0x18] != 0)) && (channel_index == *piVar2)) {
          *(byte *)(piVar2 + 0x46) = *(byte *)(piVar2 + 0x46) | 8;
        }
        piVar2 = piVar2 + 0x47;
      } while (piVar2 != (int *)&DAT_0264161c);
      sound_sndmain_cpp_FUN_00551440();
      return;
    }
  }
  return;
}

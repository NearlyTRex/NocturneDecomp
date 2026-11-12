// Name: sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90
// Address: 00556c90
// Address Range: [[00556c90, 00556d1e]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setSfxChannelVol_FUN_00556c90(int channel_index,float volume)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setSfxChannelVol_FUN_00556c90(int channel_index,float volume)

{
  int iVar1;
  int extraout_EAX;
  int *piVar2;
  int unaff_ESI;
  
  if ((channel_index < 0) || (0x1f < channel_index)) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x1116;
    core_main_c_FUN_004e4330("setSfxChannelVol - invalid channel index: %d",channel_index);
  }
  iVar1 = _DAT_02cf3280;
  *(float *)(channel_index * 4 + 0x2cf28c0) = volume;
  if (iVar1 != 0) {
    sound_sndmain_cpp_FUN_005586d0(unaff_ESI);
    if (0 < extraout_EAX) {
      sound_sndmain_cpp_lockSound_FUN_00558e90();
      piVar2 = (int *)0x2ce721c;
      do {
        if (((piVar2[0x19] != 0) && (piVar2[0x18] != 0)) && (channel_index == *piVar2)) {
          *(byte *)(piVar2 + 0x46) = *(byte *)(piVar2 + 0x46) | 8;
        }
        piVar2 = piVar2 + 0x47;
      } while (piVar2 != (int *)&DAT_02ceb91c);
      sound_sndmain_cpp_FUN_00556fd0();
      return;
    }
  }
  return;
}

// Name: sound_sndmain.cpp_setSoundOutputMode_FUN_00575120
// Address: 00575120
// Address Range: [[00575120, 005751bd]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSoundOutputMode_FUN_00575120(int bits_per_sample,int channels,int sample_rate)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_setSoundOutputMode_FUN_00575120(int bits_per_sample,int channels,int sample_rate)

{
  int iVar1;
  int iStack_10;
  
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_00575550();
  if (iVar1 != 0) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x1479;
    core_main_c_FUN_005030e0("setSoundOutputMode - can't do this while sound active!");
  }
  DAT_006232e8 = bits_per_sample;
  DAT_006232ec = channels;
  DAT_006232f0 = sample_rate;
  if (_DAT_02c80650 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02c80650 + 0xc))
                      (_DAT_02c80650,bits_per_sample,channels,sample_rate,&iStack_10);
    if (iVar1 == 0) {
      return 0;
    }
    if (0 < iStack_10) {
      sound_sndmain_cpp_allocMixBuffers_FUN_0056f470(iStack_10,4);
      return 1;
    }
  }
  return 1;
}

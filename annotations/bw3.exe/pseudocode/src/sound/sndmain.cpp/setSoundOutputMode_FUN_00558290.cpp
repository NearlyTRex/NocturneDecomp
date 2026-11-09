// Name: sound_sndmain.cpp_setSoundOutputMode_FUN_00558290
// Address: 00558290
// Address Range: [[00558290, 0055832d]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSoundOutputMode_FUN_00558290(int bits_per_sample,int channels,int sample_rate)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_setSoundOutputMode_FUN_00558290(int bits_per_sample,int channels,int sample_rate)

{
  int iVar1;
  int iStack_10;
  
  iVar1 = sound_sndmain_cpp_FUN_005586c0();
  if (iVar1 != 0) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x148c;
    core_main_c_FUN_004e4330("setSoundOutputMode - can't do this while sound active!");
  }
  DAT_00604228 = bits_per_sample;
  DAT_0060422c = channels;
  DAT_00604230 = sample_rate;
  if (_DAT_02cf3280 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02cf3280 + 0xc))
                      (_DAT_02cf3280,bits_per_sample,channels,sample_rate,&iStack_10);
    if (iVar1 == 0) {
      return 0;
    }
    if (0 < iStack_10) {
      sound_sndmain_cpp_allocMixBuffers_FUN_00552970(iStack_10,4);
      return 1;
    }
  }
  return 1;
}

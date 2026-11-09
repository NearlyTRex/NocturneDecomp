// Name: sound_sndmain.cpp_setRecordingFormat_FUN_00552f80
// Address: 00552f80
// Address Range: [[00552f80, 0055301a]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setRecordingFormat_FUN_00552f80(int bits_per_sample,int channels,int sample_rate,int signed_samples)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_setRecordingFormat_FUN_00552f80(int bits_per_sample,int channels,int sample_rate,int signed_samples)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_isRecordingStarted_FUN_00552f60();
  if (iVar1 != 0) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x16f6;
    core_main_c_FUN_004e4500("setRecordingFormat - can't do this while recording active!");
  }
  _DAT_0061bcd0 = bits_per_sample;
  _DAT_0061bcd4 = channels;
  _DAT_0061bcd8 = sample_rate;
  _DAT_02649870 = (uint)(signed_samples != 0);
  if (_DAT_02649868 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02649868 + 0xc))
                      (_DAT_02649868,bits_per_sample,channels,sample_rate,_DAT_02649870);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

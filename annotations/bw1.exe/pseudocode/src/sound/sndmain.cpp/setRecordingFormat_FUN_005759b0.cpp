// Name: sound_sndmain.cpp_setRecordingFormat_FUN_005759b0
// Address: 005759b0
// Address Range: [[005759b0, 00575a4a]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setRecordingFormat_FUN_005759b0(int bits_per_sample,int channels,int sample_rate,int signed_samples)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_setRecordingFormat_FUN_005759b0(int bits_per_sample,int channels,int sample_rate,int signed_samples)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_isRecordingStarted_FUN_00575990();
  if (iVar1 != 0) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x16ed;
    core_main_c_FUN_005030e0("setRecordingFormat - can't do this while recording active!");
  }
  _DAT_00623320 = bits_per_sample;
  _DAT_00623324 = channels;
  _DAT_00623328 = sample_rate;
  _DAT_02c81040 = (uint)(signed_samples != 0);
  if (_DAT_02c81038 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02c81038 + 0xc))
                      (_DAT_02c81038,bits_per_sample,channels,sample_rate,_DAT_02c81040);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

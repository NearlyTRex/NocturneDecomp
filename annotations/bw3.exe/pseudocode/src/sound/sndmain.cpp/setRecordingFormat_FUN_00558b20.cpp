// Name: sound_sndmain.cpp_setRecordingFormat_FUN_00558b20
// Address: 00558b20
// Address Range: [[00558b20, 00558bba]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setRecordingFormat_FUN_00558b20(int bits_per_sample,int channels,int sample_rate,int signed_samples)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_setRecordingFormat_FUN_00558b20(int bits_per_sample,int channels,int sample_rate,int signed_samples)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_isRecordingStarted_FUN_00558b00();
  if (iVar1 != 0) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x1700;
    core_main_c_FUN_004e4330("setRecordingFormat - can't do this while recording active!");
  }
  _DAT_0060425c = bits_per_sample;
  _DAT_00604260 = channels;
  _DAT_00604264 = sample_rate;
  _DAT_02cf3c70 = (uint)(signed_samples != 0);
  if (_DAT_02cf3c68 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02cf3c68 + 0xc))
                      (_DAT_02cf3c68,bits_per_sample,channels,sample_rate,_DAT_02cf3c70);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

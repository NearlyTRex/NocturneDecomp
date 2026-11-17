// Name: sound_sndmain.cpp_setRecordingFormat_FUN_00552f80
// Address: 00552f80
// Address Range: [[00552f80, 0055301a]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setRecordingFormat_FUN_00552f80(int bits_per_sample,int channels,int sample_rate,int signed_samples)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setRecordingFormat_FUN_00552f80(int bits_per_sample,int channels,int sample_rate,int signed_samples)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_isRecordingStarted_FUN_00552f60();
  if (iVar1 != 0) {
    g_CHAR_PTR_01d046a0 = "..\\sound\\sndmain.cpp";
    g_INT_01d046a4 = 0x16f6;
    core_main_c_displayErrorAndQuit_FUN_004e4500("setRecordingFormat - can't do this while recording active!");
  }
  g_INT_0061bcd0 = bits_per_sample;
  g_INT_0061bcd4 = channels;
  g_INT_0061bcd8 = sample_rate;
  g_INT_02649870 = (int)(signed_samples != 0);
  if (g_CSoundDevice_PTR_02649868 != (CSoundDevice *)0x0) {
    iVar1 = (*g_CSoundDevice_PTR_02649868->vtable->setMode)
                      (g_CSoundDevice_PTR_02649868,bits_per_sample,channels,sample_rate,
                       (int *)g_INT_02649870);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

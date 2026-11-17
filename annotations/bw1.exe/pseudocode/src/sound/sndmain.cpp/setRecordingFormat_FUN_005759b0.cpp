// Name: sound_sndmain.cpp_setRecordingFormat_FUN_005759b0
// Address: 005759b0
// Address Range: [[005759b0, 00575a4a]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setRecordingFormat_FUN_005759b0(int bits_per_sample,int channels,int sample_rate,int signed_samples)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setRecordingFormat_FUN_005759b0(int bits_per_sample,int channels,int sample_rate,int signed_samples)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_isRecordingStarted_FUN_00575990();
  if (iVar1 != 0) {
    g_CHAR_PTR_01d1d400 = "..\\sound\\sndmain.cpp";
    g_INT_01d1d404 = 0x16ed;
    core_main_c_displayErrorAndQuit_FUN_005030e0("setRecordingFormat - can't do this while recording active!");
  }
  g_INT_00623320 = bits_per_sample;
  g_INT_00623324 = channels;
  g_INT_00623328 = sample_rate;
  g_INT_02c81040 = (int)(signed_samples != 0);
  if (g_CSoundDevice_PTR_02c81038 != (CSoundDevice *)0x0) {
    iVar1 = (*g_CSoundDevice_PTR_02c81038->vtable->setMode)
                      (g_CSoundDevice_PTR_02c81038,bits_per_sample,channels,sample_rate,
                       (int *)g_INT_02c81040);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

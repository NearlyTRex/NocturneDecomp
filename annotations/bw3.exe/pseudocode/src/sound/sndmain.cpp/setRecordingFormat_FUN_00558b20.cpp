// Name: sound_sndmain.cpp_setRecordingFormat_FUN_00558b20
// Address: 00558b20
// Address Range: [[00558b20, 00558bba]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setRecordingFormat_FUN_00558b20(int bits_per_sample,int channels,int sample_rate,int signed_samples)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setRecordingFormat_FUN_00558b20(int bits_per_sample,int channels,int sample_rate,int signed_samples)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_isRecordingStarted_FUN_00558b00();
  if (iVar1 != 0) {
    g_CHAR_PTR_01d71de0 = "..\\sound\\sndmain.cpp";
    g_INT_01d71de4 = 0x1700;
    core_main_c_displayErrorAndQuit_FUN_004e4330("setRecordingFormat - can't do this while recording active!");
  }
  g_INT_0060425c = bits_per_sample;
  g_INT_00604260 = channels;
  g_INT_00604264 = sample_rate;
  g_INT_02cf3c70 = (int)(signed_samples != 0);
  if (g_CSoundDevice_PTR_02cf3c68 != (CSoundDevice *)0x0) {
    iVar1 = (*g_CSoundDevice_PTR_02cf3c68->vtable->setMode)
                      (g_CSoundDevice_PTR_02cf3c68,bits_per_sample,channels,sample_rate,
                       (int *)g_INT_02cf3c70);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

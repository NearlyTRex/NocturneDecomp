// Name: sound_sndmain.cpp_setSoundOutputMode_FUN_005526f0
// Address: 005526f0
// Address Range: [[005526f0, 0055278d]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSoundOutputMode_FUN_005526f0(int bits_per_sample,int channels,int sample_rate)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setSoundOutputMode_FUN_005526f0(int bits_per_sample,int channels,int sample_rate)

{
  int iVar1;
  int iStack_10;
  
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_00552b20();
  if (iVar1 != 0) {
    g_CHAR_PTR_01d046a0 = "..\\sound\\sndmain.cpp";
    g_INT_01d046a4 = 0x1482;
    core_main_c_displayErrorAndQuit_FUN_004e4500("setSoundOutputMode - can't do this while sound active!");
  }
  g_AudioBitsPerSample = bits_per_sample;
  g_AudioChannelCount = channels;
  g_AudioSampleRate = sample_rate;
  if (g_CSoundDevicePtr != (CSoundDevice *)0x0) {
    iVar1 = (*g_CSoundDevicePtr->vtable->setMode)
                      (g_CSoundDevicePtr,bits_per_sample,channels,sample_rate,&iStack_10);
    if (iVar1 == 0) {
      return 0;
    }
    if (0 < iStack_10) {
      sound_sndmain_cpp_allocMixBuffers_FUN_0054ce00(iStack_10,4);
      return 1;
    }
  }
  return 1;
}

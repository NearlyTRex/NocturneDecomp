// Name: sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170
// Address: 005ab170
// Address Range: [[005ab170, 005ab20d]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSoundOutputMode_FUN_005ab170(int bits_per_sample,int channels,int sample_rate)

#include "nocturne.h"

int __cdecl
sound_sndmain_cpp_setSoundOutputMode_FUN_005ab170(int bits_per_sample,int channels,int sample_rate)

{
  int iVar1;
  int iStack_10;
  
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
  if (iVar1 != 0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x128c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("setSoundOutputMode - can't do this while sound active!");
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
    if (0 < bits_per_sample) {
      sound_sndmain_cpp_allocMixBuffers_FUN_005a5730(bits_per_sample,4);
      return 1;
    }
  }
  return 1;
}

// Name: sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170
// Address: 005ab170
// Address Range: [[005ab170, 005ab20d]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170(int bits_per_sample, int channels, int sample_rate)

#include "nocturne.h"

int __cdecl
sound_sndmain_cpp_setSoundOutputMode_FUN_005ab170(int bits_per_sample,int channels,int sample_rate)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000010;
  int in_stack_00000014;
  uint uStack00000018;
  int in_stack_00000024;
  
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
  if (iVar1 != 0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x128c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("setSoundOutputMode - can't do this while sound active!");
  }
  g_AudioBitsPerSample = sample_rate;
  g_AudioChannelCount = in_stack_00000010;
  g_AudioSampleRate = in_stack_00000014;
  if (g_CSoundDevicePtr != (CSoundDevice *)0x0) {
    iVar1 = (*g_CSoundDevicePtr->vtable->setMode)
                      (g_CSoundDevicePtr,sample_rate,in_stack_00000010,in_stack_00000014,
                       (int *)&stack0xfffffff8);
    if (iVar1 == 0) {
      return 0;
    }
    if (0 < in_stack_00000024) {
      uStack00000018 = 0x5ab1ff;
      sound_sndmain_cpp_allocMixBuffers_FUN_005a5730(in_stack_00000024,4);
      return 1;
    }
  }
  return 1;
}

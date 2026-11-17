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
  g_RecordingBitsPerSample = bits_per_sample;
  g_RecordingChannelCount = channels;
  g_RecordingSampleRate = sample_rate;
  g_RecordingSamplesSigned = (int)(signed_samples != 0);
  if (g_RecordingDeviceInterface != (CSoundDevice *)0x0) {
    iVar1 = (*g_RecordingDeviceInterface->vtable->setMode)
                      (g_RecordingDeviceInterface,bits_per_sample,channels,sample_rate,
                       (int *)g_RecordingSamplesSigned);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

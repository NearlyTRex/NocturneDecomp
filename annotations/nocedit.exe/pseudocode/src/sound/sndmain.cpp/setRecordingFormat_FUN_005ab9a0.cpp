// Name: sound_sndmain.cpp_setRecordingFormat_FUN_005ab9a0
// Address: 005ab9a0
// Address Range: [[005ab9a0, 005aba3a]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_setRecordingFormat_FUN_005ab9a0(int bits_per_sample, int channels, int sample_rate, int signed_samples)

#include "nocturne.h"

int __cdecl
sound_sndmain_cpp_setRecordingFormat_FUN_005ab9a0
          (int bits_per_sample,int channels,int sample_rate,int signed_samples)

{
  int iVar1;
  HRESULT HVar2;
  LPUNKNOWN in_stack_00000014;
  int in_stack_00000018;
  
  iVar1 = sound_sndmain_cpp_isRecordingStarted_FUN_005ab980();
  if (iVar1 != 0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x14ad;
    core_main_c_displayErrorAndQuit_FUN_00506f10("setRecordingFormat - can't do this while recording active!");
  }
  g_RecordingBitsPerSample = sample_rate;
  g_RecordingChannelCount = signed_samples;
  g_RecordingSampleRate = (int)in_stack_00000014;
  g_RecordingSamplesSigned = (int)(in_stack_00000018 != 0);
  if (g_RecordingDeviceInterface != (IDirectSoundCapture *)0x0) {
    HVar2 = (*g_RecordingDeviceInterface->vtable->CreateCaptureBuffer)
                      (g_RecordingDeviceInterface,(void *)sample_rate,
                       (LPDIRECTSOUNDCAPTUREBUFFER *)signed_samples,in_stack_00000014);
    if (HVar2 == 0) {
      return 0;
    }
  }
  return 1;
}

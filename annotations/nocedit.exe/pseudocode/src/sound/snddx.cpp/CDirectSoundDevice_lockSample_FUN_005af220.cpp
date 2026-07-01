// Name: sound_snddx.cpp_CDirectSoundDevice_lockSample_FUN_005af220
// Address: 005af220
// Address Range: [[005af220, 005af31b]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_lockSample_FUN_005af220(CDirectSoundDevice *this_ptr,int buffer_id,int offset,int size)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_lockSample_FUN_005af220(CDirectSoundDevice *this_ptr,int buffer_id,int offset,int size)

{
  uint error_code;
  char *pcVar1;
  char acStack_19c [400];
  
  if ((((buffer_id < 1) || (0x18 < buffer_id)) ||
      (g_DirectSoundSampleBuffers[buffer_id] == (IDirectSoundBuffer *)0x0)) ||
     ((int)g_DirectSoundBufferMetadata[buffer_id].dwBytesPerSample < 1)) {
    return 0;
  }
  if (g_DirectSoundBufferMetadata[buffer_id].pvLockedAudio1 != (LPVOID)0x0) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 708;
    core_main_c_displayErrorAndQuit_FUN_00506f10("DirectSoundDevice::lockSample - already locked!");
  }
  error_code = (*g_DirectSoundSampleBuffers[buffer_id]->vtable->Lock)
                         (g_DirectSoundSampleBuffers[buffer_id],
                          offset * g_DirectSoundBufferMetadata[buffer_id].dwBytesPerSample,
                          size * g_DirectSoundBufferMetadata[buffer_id].dwBytesPerSample,
                          &g_DirectSoundBufferMetadata[buffer_id].pvLockedAudio1,
                          &g_DirectSoundBufferMetadata[buffer_id].dwLockedBytes1,
                          &g_DirectSoundBufferMetadata[buffer_id].pvLockedAudio2,
                          &g_DirectSoundBufferMetadata[buffer_id].dwLockedBytes2,0);
  if (error_code == 0) {
    return (int)g_DirectSoundBufferMetadata[buffer_id].pvLockedAudio1;
  }
  pcVar1 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(error_code);
  _sprintf(acStack_19c,"DirectSux: Unable to %s.  (%s)","Lock hw sample buffer",pcVar1)
  ;
  sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_19c);
  return 0;
}

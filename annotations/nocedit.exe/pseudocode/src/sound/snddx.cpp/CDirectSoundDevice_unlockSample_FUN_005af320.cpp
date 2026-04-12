// Name: sound_snddx.cpp_CDirectSoundDevice_unlockSample_FUN_005af320
// Address: 005af320
// Address Range: [[005af320, 005af401]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_unlockSample_FUN_005af320(CDirectSoundDevice *this_ptr,int buffer_id)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_unlockSample_FUN_005af320(CDirectSoundDevice *this_ptr,int buffer_id)

{
  uint error_code;
  char *pcVar1;
  char acStack_1a0 [400];
  
  if ((((buffer_id < 1) || (0x18 < buffer_id)) ||
      (g_DirectSoundSampleBuffers[buffer_id] == (IDirectSoundBuffer *)0x0)) ||
     ((int)g_DirectSoundBufferMetadata[buffer_id].dwBytesPerSample < 1)) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 0x2d7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("DirectSoundDevice::unlockSample - Can't unlock invalid handle: %d",buffer_id);
  }
  if (g_DirectSoundBufferMetadata[buffer_id].pvLockedAudio1 != (LPVOID)0x0) {
    error_code = (*g_DirectSoundSampleBuffers[buffer_id]->vtable->Unlock)
                           (g_DirectSoundSampleBuffers[buffer_id],
                            g_DirectSoundBufferMetadata[buffer_id].pvLockedAudio1,
                            g_DirectSoundBufferMetadata[buffer_id].dwLockedBytes1,
                            g_DirectSoundBufferMetadata[buffer_id].pvLockedAudio2,
                            g_DirectSoundBufferMetadata[buffer_id].dwLockedBytes2);
    if (error_code != 0) {
      pcVar1 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(error_code);
      _sprintf
                (acStack_1a0,"DirectSux: Unable to %s.  (%s)","Unlock hw sample buffer",
                 pcVar1);
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_1a0);
    }
    g_DirectSoundBufferMetadata[buffer_id].pvLockedAudio1 = (LPVOID)0x0;
  }
  return;
}

// Name: sound_snddx.cpp_CDirectSoundDevice_unlockSample_FUN_0052ae90
// Address: 0052ae90
// Address Range: [[0052ae90, 0052af4f]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_unlockSample_FUN_0052ae90(CDirectSoundDevice *this_ptr,int buffer_id)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_unlockSample_FUN_0052ae90(CDirectSoundDevice *this_ptr,int buffer_id)

{
  uint error_code;
  char *pcVar1;
  int in_stack_00000014;
  char acStack_1a0 [400];
  
  if (((buffer_id < 1) || (0x18 < buffer_id)) ||
     (g_DirectSoundSampleBuffers[buffer_id] == (IDirectSoundBuffer *)0x0)) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 694;
    core_main_c_displayErrorAndQuit_FUN_004c8440("DirectSoundDevice::unlockSample - Can't unlock invalid handle: %d",buffer_id);
  }
  error_code = (*g_DirectSoundSampleBuffers[buffer_id]->vtable->Unlock)
                         (g_DirectSoundSampleBuffers[buffer_id],
                          *(LPVOID *)(in_stack_00000014 + 0x160),
                          *(DWORD *)(in_stack_00000014 + 0x158),
                          *(LPVOID *)(in_stack_00000014 + 0x164),
                          *(DWORD *)(in_stack_00000014 + 0x15c));
  if (error_code != 0) {
    pcVar1 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(error_code);
    _sprintf(acStack_1a0,"DirectSux: Unable to %s.  (%s)","Unlock hw sample buffer",
               pcVar1);
    sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_1a0);
    return;
  }
  return;
}

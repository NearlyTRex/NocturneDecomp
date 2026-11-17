// Name: sound_sndmain.cpp_pollRecordingDevice_FUN_005530f0
// Address: 005530f0
// Address Range: [[005530f0, 00553133]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_pollRecordingDevice_FUN_005530f0(short *output_buffer,int num_samples)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_pollRecordingDevice_FUN_005530f0(short *output_buffer,int num_samples)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  iVar1 = sound_sndmain_cpp_isRecordingStarted_FUN_00552f60();
  if ((iVar1 != 0) && (g_CSoundDevice_PTR_02649868 != (CSoundDevice *)0x0)) {
    iVar1 = (*g_CSoundDevice_PTR_02649868->vtable->poll)(g_CSoundDevice_PTR_02649868);
    sound_sndmain_cpp_unlockSound_FUN_00551440();
    return iVar1;
  }
  sound_sndmain_cpp_unlockSound_FUN_00551440();
  return -1;
}

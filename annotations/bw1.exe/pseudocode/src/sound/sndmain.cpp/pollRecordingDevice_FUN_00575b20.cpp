// Name: sound_sndmain.cpp_pollRecordingDevice_FUN_00575b20
// Address: 00575b20
// Address Range: [[00575b20, 00575b63]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_pollRecordingDevice_FUN_00575b20(short *output_buffer,int num_samples)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_pollRecordingDevice_FUN_00575b20(short *output_buffer,int num_samples)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  iVar1 = sound_sndmain_cpp_isRecordingStarted_FUN_00575990();
  if ((iVar1 != 0) && (g_RecordingDeviceInterface != (CSoundDevice *)0x0)) {
    iVar1 = (*g_RecordingDeviceInterface->vtable->poll)(g_RecordingDeviceInterface);
    sound_sndmain_cpp_unlockSound_FUN_00573e70();
    return iVar1;
  }
  sound_sndmain_cpp_unlockSound_FUN_00573e70();
  return -1;
}

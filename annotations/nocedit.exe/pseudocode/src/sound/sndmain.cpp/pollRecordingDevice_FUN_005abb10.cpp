// Name: sound_sndmain.cpp_pollRecordingDevice_FUN_005abb10
// Address: 005abb10
// Address Range: [[005abb10, 005abb53]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_pollRecordingDevice_FUN_005abb10(short *output_buffer,int num_samples)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_pollRecordingDevice_FUN_005abb10(short *output_buffer,int num_samples)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  iVar1 = sound_sndmain_cpp_isRecordingStarted_FUN_005ab980();
  if ((iVar1 != 0) && (g_RecordingDeviceInterface != (CSoundDevice *)0x0)) {
    iVar1 = (*g_RecordingDeviceInterface->vtable->poll)
                      (g_RecordingDeviceInterface,output_buffer,num_samples);
    sound_sndmain_cpp_unlockSound_FUN_005abdc0();
    return iVar1;
  }
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return -1;
}

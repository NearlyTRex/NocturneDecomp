// Name: sound_sndmain.cpp_isRecordingSystemActive_FUN_005ab970
// Address: 005ab970
// Address Range: [[005ab970, 005ab97f]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isRecordingSystemActive_FUN_005ab970(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isRecordingSystemActive_FUN_005ab970(void)

{
  return (uint)(g_RecordingDeviceInterface != (CSoundDevice *)0x0);
}

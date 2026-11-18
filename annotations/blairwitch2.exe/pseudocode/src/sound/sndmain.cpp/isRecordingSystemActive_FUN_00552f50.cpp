// Name: sound_sndmain.cpp_isRecordingSystemActive_FUN_00552f50
// Address: 00552f50
// Address Range: [[00552f50, 00552f5f]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isRecordingSystemActive_FUN_00552f50(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isRecordingSystemActive_FUN_00552f50(void)

{
  return (uint)(g_RecordingDeviceInterface != (CSoundDevice *)0x0);
}

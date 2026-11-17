// Name: sound_sndmain.cpp_isRecordingSystemActive_FUN_00558af0
// Address: 00558af0
// Address Range: [[00558af0, 00558aff]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isRecordingSystemActive_FUN_00558af0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isRecordingSystemActive_FUN_00558af0(void)

{
  return (uint)(g_RecordingDeviceInterface != (CSoundDevice *)0x0);
}

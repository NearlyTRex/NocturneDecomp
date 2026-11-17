// Name: sound_sndmain.cpp_isRecordingSystemActive_FUN_00575980
// Address: 00575980
// Address Range: [[00575980, 0057598f]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isRecordingSystemActive_FUN_00575980(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isRecordingSystemActive_FUN_00575980(void)

{
  return (uint)(g_CSoundDevice_PTR_02c81038 != (CSoundDevice *)0x0);
}

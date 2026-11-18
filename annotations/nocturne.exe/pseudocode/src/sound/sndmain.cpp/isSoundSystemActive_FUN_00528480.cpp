// Name: sound_sndmain.cpp_isSoundSystemActive_FUN_00528480
// Address: 00528480
// Address Range: [[00528480, 0052848f]]
// Convention: __cdecl
// Signature: uint __cdecl sound_sndmain_cpp_isSoundSystemActive_FUN_00528480(void)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_isSoundSystemActive_FUN_00528480(void)

{
  return (uint)(g_CSoundDevicePtr != (CSoundDevice *)0x0);
}

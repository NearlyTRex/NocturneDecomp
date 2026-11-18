// Name: sound_sndmain.cpp_isSoundSystemActive_FUN_00552b10
// Address: 00552b10
// Address Range: [[00552b10, 00552b1f]]
// Convention: __cdecl
// Signature: uint __cdecl sound_sndmain_cpp_isSoundSystemActive_FUN_00552b10(void)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_isSoundSystemActive_FUN_00552b10(void)

{
  return (uint)(g_CSoundDevicePtr != (CSoundDevice *)0x0);
}

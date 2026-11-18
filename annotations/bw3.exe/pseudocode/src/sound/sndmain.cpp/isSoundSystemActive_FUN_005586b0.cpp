// Name: sound_sndmain.cpp_isSoundSystemActive_FUN_005586b0
// Address: 005586b0
// Address Range: [[005586b0, 005586bf]]
// Convention: __cdecl
// Signature: uint __cdecl sound_sndmain_cpp_isSoundSystemActive_FUN_005586b0(void)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_isSoundSystemActive_FUN_005586b0(void)

{
  return (uint)(g_CSoundDevicePtr != (CSoundDevice *)0x0);
}

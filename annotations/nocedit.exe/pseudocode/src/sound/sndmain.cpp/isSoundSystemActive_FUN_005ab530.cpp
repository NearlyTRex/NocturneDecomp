// Name: sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530
// Address: 005ab530
// Address Range: [[005ab530, 005ab53f]]
// Convention: __cdecl
// Signature: uint sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530(void)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_isSoundSystemActive_FUN_005ab530(void)

{
  return (uint)(g_CSoundDevicePtr != (CSoundDevice *)0x0);
}

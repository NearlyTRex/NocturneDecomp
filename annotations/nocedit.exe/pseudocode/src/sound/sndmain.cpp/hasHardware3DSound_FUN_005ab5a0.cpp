// Name: sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0
// Address: 005ab5a0
// Address Range: [[005ab5a0, 005ab5ae]]
// Convention: __cdecl
// Signature: uint sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0(void)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = sound_sndmain_cpp_isSoundSystemActive_FUN_005ab530();
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = g_HasHardware3DSound;
  }
  return uVar2;
}

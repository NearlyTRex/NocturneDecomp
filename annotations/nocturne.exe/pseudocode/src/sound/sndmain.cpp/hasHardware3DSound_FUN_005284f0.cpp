// Name: sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0
// Address: 005284f0
// Address Range: [[005284f0, 005284fe]]
// Convention: __cdecl
// Signature: uint __cdecl sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = sound_sndmain_cpp_isSoundSystemActive_FUN_00528480();
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = _DAT_02dc8320;
  }
  return uVar2;
}

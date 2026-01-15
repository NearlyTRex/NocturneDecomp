// Name: sound_sndmain.cpp_startNonPositionalSfx_FUN_005a9550
// Address: 005a9550
// Address Range: [[005a9550, 005a9577]]
// Convention: __cdecl
// Signature: uint sound_sndmain.cpp_startNonPositionalSfx_FUN_005a9550(char * filename)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_startNonPositionalSfx_FUN_005a9550(char *filename)

{
  uint uVar1;
  
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_setNextSfxFlagBits_FUN_005a8b90(1);
  uVar1 = sound_sndmain_cpp_startSfx_FUN_005a8e90(filename);
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return uVar1;
}

// Name: sound_sndmain.cpp_setNextSfxFlags_FUN_00550380
// Address: 00550380
// Address Range: [[00550380, 0055039c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxFlags_FUN_00550380(uint flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxFlags_FUN_00550380(uint flags)

{
  *(uint *)(_DAT_0264161c * 0x60 + 0x264166c) = flags;
  return;
}

// Name: sound_sndmain.cpp_setNextSfxFlags_FUN_00555f00
// Address: 00555f00
// Address Range: [[00555f00, 00555f1c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxFlags_FUN_00555f00(uint flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxFlags_FUN_00555f00(uint flags)

{
  *(uint *)(_DAT_02ceb91c * 0x60 + 0x2ceb96c) = flags;
  return;
}

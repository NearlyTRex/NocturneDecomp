// Name: sound_sndmain.cpp_freeMixBuffers_FUN_00552b30
// Address: 00552b30
// Address Range: [[00552b30, 00552bc8]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_freeMixBuffers_FUN_00552b30(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_freeMixBuffers_FUN_00552b30(void)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_02cf32c8 != 0) {
    FUN_005a3770(_DAT_02cf32c8);
    _DAT_02cf32c8 = 0;
  }
  if (_DAT_02cf32ec != 0) {
    FUN_005a3770(_DAT_02cf32ec);
    _DAT_02cf32ec = 0;
  }
  if (_DAT_02cf32a4 != 0) {
    FUN_005a3770(_DAT_02cf32a4);
    _DAT_02cf32a4 = 0;
  }
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)(iVar2 + 0x2cf32a8) = 0;
    *(uint *)(iVar2 + 0x2cf32f0) = 0;
    *(uint *)(iVar2 + 0x2cf3310) = 0;
    *(uint *)(iVar2 + 0x2cf32cc) = 0;
    iVar2 = iVar1;
  } while (iVar1 != 0x20);
  _DAT_02cf32a0 = 0;
  _DAT_02cf3294 = 0;
  _DAT_02cf3298 = 0;
  _DAT_02cf329c = 0;
  return;
}

// Name: sound_sndmain.cpp_FUN_00556e80
// Address: 00556e80
// Address Range: [[00556e80, 00556eb2]]
// Convention: __cdecl
// Signature: uint __cdecl sound_sndmain_cpp_FUN_00556e80(void)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_FUN_00556e80(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0;
  while ((*(int *)(&DAT_02ce7284 + iVar1) == 0 || (*(int *)(&DAT_02ce7280 + iVar1) == 0))) {
    iVar1 = iVar1 + 0x11c;
    uVar2 = uVar2 + 1;
    if (0x46ff < iVar1) {
      return 0;
    }
  }
  return *(int *)(&DAT_02ce7280 + iVar1) << 6 | uVar2;
}

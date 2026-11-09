// Name: sound_sndmain.cpp_FUN_00556ec0
// Address: 00556ec0
// Address Range: [[00556ec0, 00556f0b]]
// Convention: unknown
// Signature: uint sound_sndmain_cpp_FUN_00556ec0(uint param_1)

#include "nocturne.h"

uint sound_sndmain_cpp_FUN_00556ec0(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0x3f) + 1;
  if (uVar2 < 0x40) {
    iVar1 = uVar2 * 0x11c;
    do {
      if ((*(int *)(&DAT_02ce7284 + iVar1) != 0) && (*(int *)(&DAT_02ce7280 + iVar1) != 0)) {
        return *(int *)(&DAT_02ce7280 + iVar1) << 6 | uVar2;
      }
      iVar1 = iVar1 + 0x11c;
      uVar2 = uVar2 + 1;
    } while (iVar1 < 0x4700);
  }
  return 0;
}

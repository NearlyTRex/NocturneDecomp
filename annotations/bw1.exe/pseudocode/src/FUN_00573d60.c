// Name: FUN_00573d60
// Address: 00573d60
// Address Range: [[00573d60, 00573dab]]
// Convention: unknown
// Signature: uint FUN_00573d60(uint param_1)

#include "nocturne.h"

uint FUN_00573d60(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0x3f) + 1;
  if (uVar2 < 0x40) {
    iVar1 = uVar2 * 0x11c;
    do {
      if ((*(int *)(&DAT_02c74654 + iVar1) != 0) && (*(int *)(&DAT_02c74650 + iVar1) != 0)) {
        return *(int *)(&DAT_02c74650 + iVar1) << 6 | uVar2;
      }
      iVar1 = iVar1 + 0x11c;
      uVar2 = uVar2 + 1;
    } while (iVar1 < 0x4700);
  }
  return 0;
}

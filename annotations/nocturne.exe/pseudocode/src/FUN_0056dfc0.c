// Name: FUN_0056dfc0
// Address: 0056dfc0
// Address Range: [[0056dfc0, 0056e00c]]
// Convention: unknown
// Signature: undefined4 FUN_0056dfc0(void)

#include "nocturne.h"

uint FUN_0056dfc0(void)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_005c1f58 < 0x00000014) {
    uVar1 = 0;
  }
  else {
    if (0 < (int)DAT_005c1f58) {
      iVar2 = 0;
      do {
        if (*(int *)(DAT_005c1f54 + iVar2) == 0) {
          return 0;
        }
        iVar2 = iVar2 + 4;
      } while (iVar2 < (int)(DAT_005c1f58 * 4));
    }
    uVar1 = 1;
  }
  return uVar1;
}

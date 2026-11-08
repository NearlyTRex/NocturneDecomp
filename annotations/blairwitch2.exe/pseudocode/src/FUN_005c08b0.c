// Name: FUN_005c08b0
// Address: 005c08b0
// Address Range: [[005c08b0, 005c08fc]]
// Convention: unknown
// Signature: undefined4 FUN_005c08b0(void)

#include "nocturne.h"

uint FUN_005c08b0(void)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_0061f4dc < 0x00000014) {
    uVar1 = 0;
  }
  else {
    if (0 < (int)DAT_0061f4dc) {
      iVar2 = 0;
      do {
        if (*(int *)(DAT_0061f4d8 + iVar2) == 0) {
          return 0;
        }
        iVar2 = iVar2 + 4;
      } while (iVar2 < (int)(DAT_0061f4dc * 4));
    }
    uVar1 = 1;
  }
  return uVar1;
}

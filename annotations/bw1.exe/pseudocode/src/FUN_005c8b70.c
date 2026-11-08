// Name: FUN_005c8b70
// Address: 005c8b70
// Address Range: [[005c8b70, 005c8bbc]]
// Convention: unknown
// Signature: undefined4 FUN_005c8b70(void)

#include "nocturne.h"

uint FUN_005c8b70(void)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_0062683c < 0x00000014) {
    uVar1 = 0;
  }
  else {
    if (0 < (int)DAT_0062683c) {
      iVar2 = 0;
      do {
        if (*(int *)(DAT_00626838 + iVar2) == 0) {
          return 0;
        }
        iVar2 = iVar2 + 4;
      } while (iVar2 < (int)(DAT_0062683c * 4));
    }
    uVar1 = 1;
  }
  return uVar1;
}

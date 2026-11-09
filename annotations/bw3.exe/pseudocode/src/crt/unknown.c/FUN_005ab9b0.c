// Name: crt_unknown.c_FUN_005ab9b0
// Address: 005ab9b0
// Address Range: [[005ab9b0, 005ab9fc]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005ab9b0(void)

#include "nocturne.h"

uint FUN_005ab9b0(void)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_00607be0 < 0x00000014) {
    uVar1 = 0;
  }
  else {
    if (0 < (int)DAT_00607be0) {
      iVar2 = 0;
      do {
        if (*(int *)(DAT_00607bdc + iVar2) == 0) {
          return 0;
        }
        iVar2 = iVar2 + 4;
      } while (iVar2 < (int)(DAT_00607be0 * 4));
    }
    uVar1 = 1;
  }
  return uVar1;
}

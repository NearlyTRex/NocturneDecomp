// Name: FUN_005b20d0
// Address: 005b20d0
// Address Range: [[005b20d0, 005b2112]]
// Convention: unknown
// Signature: undefined4 FUN_005b20d0(uint param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005b20d0(uint param_1)

{
  int iVar1;
  
  if ((_DAT_02d25930 != 0) && ((*(byte *)((param_1 >> 8 & 0xff) + 0x2d25941) & 1) != 0)) {
    iVar1 = FUN_005b2120(param_1 & 0xff);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

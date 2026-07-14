// Name: FUN_10010750
// Address: 10010750
// Address Range: [[10010750, 100107c4]]
// Convention: unknown
// Signature: uint FUN_10010750(uint param_1)

#include "nocturne.h"

uint FUN_10010750(uint param_1)

{
  uint uVar1;
  bool bVar2;
  
  if (DAT_10017760 == 0) {
    uVar1 = param_1 & 0xffff;
    if ((0x60 < (ushort)param_1) && ((ushort)param_1 < 0x7b)) {
      return (uint)(ushort)((ushort)param_1 - 0x20);
    }
  }
  else {
    bVar2 = DAT_10240854 == 0;
    if (bVar2) {
      DAT_10240858 = DAT_10240858 + 1;
    }
    else {
      __lock(0x13);
    }
    uVar1 = FUN_100107d0(param_1);
    if (!bVar2) {
      FUN_10005a10(0x13);
      return uVar1 & 0xffff;
    }
    DAT_10240858 = DAT_10240858 + -1;
  }
  return uVar1;
}

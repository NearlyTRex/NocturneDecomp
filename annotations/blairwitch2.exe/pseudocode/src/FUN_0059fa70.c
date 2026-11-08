// Name: FUN_0059fa70
// Address: 0059fa70
// Address Range: [[0059fa70, 0059fadc]]
// Convention: unknown
// Signature: uint FUN_0059fa70(uint param_1,uint param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0059fa70(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == param_1) {
    return param_2 ^ param_1;
  }
  iVar2 = FUN_0040c8f0(param_2,_DAT_02668498);
  if (iVar2 != 0) {
    uVar1 = *(uint *)(iVar2 + 0x11344);
    if (uVar1 == 0) {
      return 0;
    }
    if (uVar1 < 2) {
      iVar2 = FUN_0040c8f0(param_1,_DAT_02668958);
      if (iVar2 != 0) {
        return 0;
      }
    }
    else if (uVar1 != 2) {
      return 1;
    }
    return 1;
  }
  return 1;
}

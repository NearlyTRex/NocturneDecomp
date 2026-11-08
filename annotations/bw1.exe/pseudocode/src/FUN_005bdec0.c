// Name: FUN_005bdec0
// Address: 005bdec0
// Address Range: [[005bdec0, 005bdf5c]]
// Convention: unknown
// Signature: undefined4 FUN_005bdec0(int param_1,uint param_2)

#include "nocturne.h"

uint FUN_005bdec0(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 != 2) && (iVar1 = FUN_005c04e0(param_1 + 0x24a8,"jeff.dfm"), iVar1 == 0)) {
    return 0xffffffff;
  }
  iVar1 = FUN_005c1210(param_1 + 0x24a8,&DAT_005fa899,3);
  if (iVar1 == 0) {
    if (param_2 < 2) {
      if (param_2 != 1) {
        return 0xffffffff;
      }
    }
    else if ((2 < param_2) && (param_2 != 3)) {
      return 0xffffffff;
    }
  }
  else if (param_2 < 2) {
    if (param_2 != 1) {
      return 0xffffffff;
    }
  }
  else {
    if (param_2 < 3) {
      return 0;
    }
    if (param_2 != 3) {
      return 0xffffffff;
    }
  }
  return 1;
}

// Name: FUN_0056c6d0
// Address: 0056c6d0
// Address Range: [[0056c6d0, 0056c73b]]
// Convention: unknown
// Signature: undefined4 FUN_0056c6d0(uint param_1)

#include "nocturne.h"

uint FUN_0056c6d0(uint param_1)

{
  int iVar1;
  
  FUN_00568eb8(param_1);
  if (param_1 == 0x7b) {
    iVar1 = 1;
  }
  else {
    if (param_1 == 0xce) {
      FUN_00568e80(9);
      return 0xffffffff;
    }
    if (param_1 == 0xb7) {
      FUN_00568e80(7);
      return 0xffffffff;
    }
    if (0x13 < param_1) {
      param_1 = 0x13;
    }
    iVar1 = *(int *)(&DAT_005c1da9 + param_1) >> 0x18;
  }
  FUN_00568e80(iVar1);
  return 0xffffffff;
}

// Name: FUN_004580a0
// Address: 004580a0
// Address Range: [[004580a0, 0045813c]]
// Convention: unknown
// Signature: undefined4 FUN_004580a0(int param_1,uint param_2)

#include "nocturne.h"

uint FUN_004580a0(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 != 2) && (iVar1 = FUN_005a3260(param_1 + 0x24a8,"jeff.dfm"), iVar1 == 0)) {
    return 0xffffffff;
  }
  iVar1 = FUN_005a3f90(param_1 + 0x24a8,&DAT_005ba83f,3);
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

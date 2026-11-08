// Name: FUN_00598e40
// Address: 00598e40
// Address Range: [[00598e40, 00598edc]]
// Convention: unknown
// Signature: undefined4 FUN_00598e40(int param_1,uint param_2)

#include "nocturne.h"

uint FUN_00598e40(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 != 2) && (iVar1 = FUN_005b8130(param_1 + 0x2514,"jeff.dfm"), iVar1 == 0)) {
    return 0xffffffff;
  }
  iVar1 = FUN_005b8da0(param_1 + 0x2514,&DAT_005ef2c7,3);
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

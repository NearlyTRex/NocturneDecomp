// Name: FUN_005617e0
// Address: 005617e0
// Address Range: [[005617e0, 0056187c]]
// Convention: unknown
// Signature: undefined4 FUN_005617e0(int param_1,uint param_2)

#include "nocturne.h"

uint FUN_005617e0(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 != 2) && (iVar1 = FUN_00564520(param_1 + 0x23b0,"jeff.dfm"), iVar1 == 0)) {
    return 0xffffffff;
  }
  iVar1 = FUN_00564bc0(param_1 + 0x23b0,&DAT_00598883,3);
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

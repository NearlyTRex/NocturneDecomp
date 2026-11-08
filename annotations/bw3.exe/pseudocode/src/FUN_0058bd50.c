// Name: FUN_0058bd50
// Address: 0058bd50
// Address Range: [[0058bd50, 0058bdec]]
// Convention: unknown
// Signature: undefined4 FUN_0058bd50(int param_1,uint param_2)

#include "nocturne.h"

uint FUN_0058bd50(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 != 2) && (iVar1 = FUN_005a3260(param_1 + 0x24a8,"jeff.dfm"), iVar1 == 0)) {
    return 0xffffffff;
  }
  iVar1 = FUN_005a3f90(param_1 + 0x24a8,&DAT_005d8844,3);
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

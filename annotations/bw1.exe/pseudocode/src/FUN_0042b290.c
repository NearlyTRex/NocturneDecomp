// Name: FUN_0042b290
// Address: 0042b290
// Address Range: [[0042b290, 0042b32c]]
// Convention: unknown
// Signature: undefined4 FUN_0042b290(int param_1,uint param_2)

#include "nocturne.h"

uint FUN_0042b290(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 != 2) && (iVar1 = FUN_005c04e0(param_1 + 0x24a8,"jeff.dfm"), iVar1 == 0)) {
    return 0xffffffff;
  }
  iVar1 = FUN_005c1210(param_1 + 0x24a8,&DAT_005d55ea,3);
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

// Name: crt_unknown.c_FUN_005c9020
// Address: 005c9020
// Address Range: [[005c9020, 005c907f]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005c9020(byte *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005c9020(byte *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (; (iVar1 = unkafter_zombie_cpp_FUN_005cc560(param_1), iVar1 == 0 && (param_2 != 0));
      param_2 = param_2 + -1) {
    if ((_DAT_02c9f6e0 == 0) || ((*(byte *)(*param_1 + 0x2c9f6f1) & 1) == 0)) {
      iVar2 = iVar2 + 1;
    }
    else {
      if (param_1[1] == 0) {
        return iVar2;
      }
      iVar1 = FUN_005c9110(param_1);
      iVar2 = iVar2 + iVar1;
    }
    param_1 = (byte *)FUN_005c90c0(param_1);
  }
  return iVar2;
}

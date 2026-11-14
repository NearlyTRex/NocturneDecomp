// Name: crt_unknown.c_FUN_005c1b50
// Address: 005c1b50
// Address Range: [[005c1b50, 005c1bdf]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005c1b50(byte *param_1,byte *param_2,int param_3)

#include "nocturne.h"

int FUN_005c1b50(byte *param_1,byte *param_2,int param_3)

{
  int iVar1;
  
  while (((param_3 != 0 && (iVar1 = FUN_005c4260(param_1), iVar1 == 0)) &&
         (iVar1 = FUN_005c4260(param_2), iVar1 == 0))) {
    iVar1 = FUN_005c46f0(param_1,param_2);
    if (iVar1 != 0) {
      return iVar1;
    }
    param_1 = (byte *)FUN_005c0e00(param_1);
    param_3 = param_3 + -1;
    param_2 = (byte *)FUN_005c0e00(param_2);
  }
  if ((param_3 != 0) &&
     ((iVar1 = FUN_005c4260(param_1), iVar1 != 0 ||
      (iVar1 = FUN_005c4260(param_2), iVar1 != 0)))) {
    return (uint)*param_1 - (uint)*param_2;
  }
  return 0;
}

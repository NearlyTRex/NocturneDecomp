// Name: FUN_005c9ea0
// Address: 005c9ea0
// Address Range: [[005c9ea0, 005c9f2f]]
// Convention: unknown
// Signature: int FUN_005c9ea0(byte *param_1,byte *param_2,int param_3)

#include "nocturne.h"

int FUN_005c9ea0(byte *param_1,byte *param_2,int param_3)

{
  int iVar1;
  
  while (((param_3 != 0 && (iVar1 = FUN_005cc560(param_1), iVar1 == 0)) &&
         (iVar1 = FUN_005cc560(param_2), iVar1 == 0))) {
    iVar1 = FUN_005cc9f0(param_1,param_2);
    if (iVar1 != 0) {
      return iVar1;
    }
    param_1 = (byte *)FUN_005c90c0(param_1);
    param_3 = param_3 + -1;
    param_2 = (byte *)FUN_005c90c0(param_2);
  }
  if ((param_3 != 0) &&
     ((iVar1 = FUN_005cc560(param_1), iVar1 != 0 || (iVar1 = FUN_005cc560(param_2), iVar1 != 0)))) {
    return (uint)*param_1 - (uint)*param_2;
  }
  return 0;
}

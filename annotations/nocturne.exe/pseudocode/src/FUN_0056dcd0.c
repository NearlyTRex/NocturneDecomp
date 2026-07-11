// Name: FUN_0056dcd0
// Address: 0056dcd0
// Address Range: [[0056dcd0, 0056dd5f]]
// Convention: unknown
// Signature: int FUN_0056dcd0(byte *param_1,byte *param_2,int param_3)

#include "nocturne.h"

int FUN_0056dcd0(byte *param_1,byte *param_2,int param_3)

{
  int iVar1;
  
  while (((param_3 != 0 && (iVar1 = FUN_00570ca0(param_1), iVar1 == 0)) &&
         (iVar1 = FUN_00570ca0(param_2), iVar1 == 0))) {
    iVar1 = FUN_005710a0(param_1,param_2);
    if (iVar1 != 0) {
      return iVar1;
    }
    param_1 = (byte *)FUN_0056da80(param_1);
    param_3 = param_3 + -1;
    param_2 = (byte *)FUN_0056da80(param_2);
  }
  if ((param_3 != 0) &&
     ((iVar1 = FUN_00570ca0(param_1), iVar1 != 0 || (iVar1 = FUN_00570ca0(param_2), iVar1 != 0)))) {
    return (uint)*param_1 - (uint)*param_2;
  }
  return 0;
}

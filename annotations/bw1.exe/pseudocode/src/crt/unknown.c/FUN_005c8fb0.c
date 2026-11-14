// Name: crt_unknown.c_FUN_005c8fb0
// Address: 005c8fb0
// Address Range: [[005c8fb0, 005c8fe7]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005c8fb0(int param_1,uint param_2)

#include "nocturne.h"

int FUN_005c8fb0(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  for (; (iVar1 = FUN_005cc560(param_1), iVar1 == 0 && (param_2 != 0));
      param_2 = param_2 - uVar2) {
    uVar2 = FUN_005c9110(param_1);
    if (param_2 < uVar2) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    param_1 = param_1 + uVar2;
  }
  return iVar3;
}

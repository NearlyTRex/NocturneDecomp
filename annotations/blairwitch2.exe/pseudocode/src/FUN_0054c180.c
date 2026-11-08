// Name: FUN_0054c180
// Address: 0054c180
// Address Range: [[0054c180, 0054c1b3]]
// Convention: unknown
// Signature: int FUN_0054c180(undefined4 param_1)

#include "nocturne.h"

int FUN_0054c180(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0x2641924;
  iVar3 = 0;
  do {
    iVar1 = FUN_005b8130(iVar2,param_1);
    if (iVar1 == 0) {
      return iVar2;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x1ac;
  } while (iVar3 < 0x40);
  return 0;
}

// Name: FUN_005623f0
// Address: 005623f0
// Address Range: [[005623f0, 00562420]]
// Convention: unknown
// Signature: undefined4 FUN_005623f0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_005623f0(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0040d7e0(param_2,"?CTentacle" + 1);
  if (iVar1 != 0) {
    return 1;
  }
  uVar2 = FUN_004280a0(param_1,param_2);
  return uVar2;
}

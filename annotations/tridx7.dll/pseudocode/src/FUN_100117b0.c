// Name: FUN_100117b0
// Address: 100117b0
// Address Range: [[100117b0, 100117d5]]
// Convention: unknown
// Signature: void FUN_100117b0(undefined4 param_1)

#include "nocturne.h"

void FUN_100117b0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_100118b0(param_1);
  iVar1 = FUN_10008830(iVar1 + 1);
  if (iVar1 != 0) {
    FUN_10011930(iVar1,param_1);
  }
  return;
}

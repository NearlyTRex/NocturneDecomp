// Name: FUN_00412b20
// Address: 00412b20
// Address Range: [[00412b20, 00412b56]]
// Convention: unknown
// Signature: void FUN_00412b20(int param_1)

#include "nocturne.h"

void FUN_00412b20(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040cd00(0x3f000000);
  if (iVar1 != 0) {
    FUN_005247c0(param_1 + 0x158,1,1);
    return;
  }
  FUN_005247c0(param_1 + 0x158,2,1);
  return;
}

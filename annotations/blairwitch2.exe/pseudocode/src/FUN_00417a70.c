// Name: FUN_00417a70
// Address: 00417a70
// Address Range: [[00417a70, 00417aa5]]
// Convention: unknown
// Signature: void FUN_00417a70(int param_1)

#include "nocturne.h"

void FUN_00417a70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040d060(0x3da3d70a);
  if (iVar1 == 0) {
    return;
  }
  FUN_004c9730(0x01CB8284,param_1 + 0x20,&DAT_0265370c,*(uint *)(param_1 + 0x10cc));
  return;
}

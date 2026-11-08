// Name: FUN_0041aef0
// Address: 0041aef0
// Address Range: [[0041aef0, 0041af25]]
// Convention: unknown
// Signature: void FUN_0041aef0(int param_1)

#include "nocturne.h"

void FUN_0041aef0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040cd00(0x3da3d70a);
  if (iVar1 == 0) {
    return;
  }
  FUN_004e5f40(0x01CD0E3C,param_1 + 0x20,&DAT_02c8af28,*(uint *)(param_1 + 0xcb8));
  return;
}

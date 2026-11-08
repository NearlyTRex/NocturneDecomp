// Name: FUN_00416b20
// Address: 00416b20
// Address Range: [[00416b20, 00416b55]]
// Convention: unknown
// Signature: void FUN_00416b20(int param_1)

#include "nocturne.h"

void FUN_00416b20(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040cf40(0x3da3d70a);
  if (iVar1 == 0) {
    return;
  }
  FUN_004ce8a0(0x01D22E44,param_1 + 0x20,&DAT_02cfd900,*(uint *)(param_1 + 0xcb8));
  return;
}

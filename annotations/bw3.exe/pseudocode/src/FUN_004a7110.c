// Name: FUN_004a7110
// Address: 004a7110
// Address Range: [[004a7110, 004a715f]]
// Convention: unknown
// Signature: void FUN_004a7110(int param_1)

#include "nocturne.h"

void FUN_004a7110(int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x2d4) = 1;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    FUN_004a23c0(0x01C73654,param_1 + 0x360,0,0x4000,0x4000,0,0xffff);
  } while (iVar1 < 5);
  *(uint *)(param_1 + 0x4f4) = 1;
  return;
}

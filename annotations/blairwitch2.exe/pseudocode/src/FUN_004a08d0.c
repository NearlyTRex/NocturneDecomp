// Name: FUN_004a08d0
// Address: 004a08d0
// Address Range: [[004a08d0, 004a091f]]
// Convention: unknown
// Signature: void FUN_004a08d0(int param_1)

#include "nocturne.h"

void FUN_004a08d0(int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x430) = 1;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    FUN_0049d090(0x01C3DEB4,param_1 + 0x4bc,0,0x4000,0x4000,0,0xffff);
  } while (iVar1 < 5);
  *(uint *)(param_1 + 0x7ac) = 1;
  return;
}

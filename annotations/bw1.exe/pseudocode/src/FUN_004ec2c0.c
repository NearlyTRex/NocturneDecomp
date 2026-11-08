// Name: FUN_004ec2c0
// Address: 004ec2c0
// Address Range: [[004ec2c0, 004ec2ff]]
// Convention: unknown
// Signature: void FUN_004ec2c0(int param_1,int param_2)

#include "nocturne.h"

void FUN_004ec2c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + param_2 * 0x78;
  iVar2 = *(int *)(iVar1 + 0x25b0);
  if (iVar2 == 0) {
    return;
  }
  FUN_004f7690(param_1 + 0x1fae8,iVar2,1);
  *(uint *)(iVar1 + 0x25b0) = 0;
  return;
}

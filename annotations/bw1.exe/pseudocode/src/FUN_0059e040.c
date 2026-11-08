// Name: FUN_0059e040
// Address: 0059e040
// Address Range: [[0059e040, 0059e121]]
// Convention: unknown
// Signature: int FUN_0059e040(int param_1)

#include "nocturne.h"

int FUN_0059e040(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0059c8e0(param_1 + 0xd2c);
  iVar1 = FUN_0059dd40(iVar1 + 4);
  FUN_005bfb70(iVar1 + -0xd30,0,0x200);
  FUN_005bfb70(iVar1 + -0xb30,0,0x200);
  FUN_005bfb70(iVar1 + -0x930,0,0x100);
  FUN_005bfb70(iVar1 + -0x830,0,0x100);
  FUN_005bfb70(iVar1 + -0x318,0,0x300);
  *(uint *)(iVar1 + -0x728) = 0;
  *(uint *)(iVar1 + -0x724) = 0;
  *(uint *)(iVar1 + -800) = 0;
  *(uint *)(iVar1 + -0x31c) = 0;
  *(uint *)(iVar1 + -0x10) = 0;
  *(uint *)(iVar1 + -0x18) = 0;
  *(uint *)(iVar1 + -0xc) = 0;
  *(uint *)(iVar1 + -8) = 0;
  return iVar1 + -0xd30;
}

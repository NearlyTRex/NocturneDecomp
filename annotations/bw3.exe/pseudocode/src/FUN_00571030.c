// Name: FUN_00571030
// Address: 00571030
// Address Range: [[00571030, 00571111]]
// Convention: unknown
// Signature: int FUN_00571030(int param_1)

#include "nocturne.h"

int FUN_00571030(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0056f8d0(param_1 + 0xd2c);
  iVar1 = FUN_00570d30(iVar1 + 4);
  FUN_005a28f0(iVar1 + -0xd30,0,0x200);
  FUN_005a28f0(iVar1 + -0xb30,0,0x200);
  FUN_005a28f0(iVar1 + -0x930,0,0x100);
  FUN_005a28f0(iVar1 + -0x830,0,0x100);
  FUN_005a28f0(iVar1 + -0x318,0,0x300);
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

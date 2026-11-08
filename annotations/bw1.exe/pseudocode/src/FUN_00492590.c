// Name: FUN_00492590
// Address: 00492590
// Address Range: [[00492590, 004925fd]]
// Convention: unknown
// Signature: undefined4 FUN_00492590(int param_1)

#include "nocturne.h"

uint FUN_00492590(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005adde0(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_004b6e60(0x01C57074,param_1 + 0x20,param_1 + 0x30,(uint *)(param_1 + 0x57c),
               *(uint *)(param_1 + 0x578),*(uint *)(param_1 + 0x588));
  *(uint *)(param_1 + 0x588) = 0;
  *(uint *)(param_1 + 0x578) = 0xbf800000;
  *(uint *)(param_1 + 0x584) = 0;
  *(uint *)(param_1 + 0x580) = *(uint *)(param_1 + 0x584);
  *(uint *)(param_1 + 0x57c) = *(uint *)(param_1 + 0x580);
  return 1;
}

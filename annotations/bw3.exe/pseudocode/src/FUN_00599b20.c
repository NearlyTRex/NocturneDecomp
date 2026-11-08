// Name: FUN_00599b20
// Address: 00599b20
// Address Range: [[00599b20, 00599bbe]]
// Convention: unknown
// Signature: undefined4 FUN_00599b20(int param_1)

#include "nocturne.h"

uint FUN_00599b20(int param_1)

{
  uint uVar1;
  
  FUN_004087f0(param_1);
  uVar1 = DAT_005f2afc;
  *(uint *)(param_1 + 0x27bc) = 1;
  FUN_0046d4c0(uVar1,0xffff);
  FUN_0046d4b0(DAT_005f2afc,1);
  FUN_0046e120(DAT_005f2afc,1);
  FUN_0054e3a0(param_1 + 0x158,0xffffffff,0x2e7,1,0);
  FUN_0046e4e0(DAT_005f2afc);
  FUN_0046d4b0(DAT_005f2afc,0);
  FUN_00408830(param_1);
  return *(uint *)(param_1 + 0x27bc);
}

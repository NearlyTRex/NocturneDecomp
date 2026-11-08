// Name: FUN_004f0510
// Address: 004f0510
// Address Range: [[004f0510, 004f0542]]
// Convention: unknown
// Signature: undefined4 FUN_004f0510(int param_1)

#include "nocturne.h"

uint FUN_004f0510(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00524770(param_1 + 0x158);
  switch(*(uint *)(iVar1 + 0x24)) {
  case 4:
  case 10:
    return 1;
  case 5:
  case 0xb:
    return 2;
  default:
    return 0;
  }
}

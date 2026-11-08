// Name: FUN_005a0180
// Address: 005a0180
// Address Range: [[005a0180, 005a01b2]]
// Convention: unknown
// Signature: undefined4 FUN_005a0180(int param_1)

#include "nocturne.h"

uint FUN_005a0180(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004fc070(param_1 + 0x158);
  switch(*(uint *)(iVar1 + 0x24)) {
  case 5:
  case 0xe:
    return 1;
  case 6:
  case 0xf:
    return 2;
  default:
    return 0;
  }
}

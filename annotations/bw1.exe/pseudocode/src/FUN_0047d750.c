// Name: FUN_0047d750
// Address: 0047d750
// Address Range: [[0047d750, 0047d78e]]
// Convention: unknown
// Signature: undefined4 FUN_0047d750(int param_1)

#include "nocturne.h"

uint FUN_0047d750(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x70) == 2) {
    return 2;
  }
  iVar1 = FUN_00524770(param_1 + 0x158);
  switch(*(uint *)(iVar1 + 0x24)) {
  case 7:
  case 10:
    return 1;
  default:
    return 0;
  case 0x10:
  case 0x11:
    return 2;
  }
}

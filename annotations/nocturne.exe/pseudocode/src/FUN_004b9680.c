// Name: FUN_004b9680
// Address: 004b9680
// Address Range: [[004b9680, 004b96b2]]
// Convention: unknown
// Signature: undefined4 FUN_004b9680(int param_1)

#include "nocturne.h"

uint FUN_004b9680(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004e1660(param_1 + 0x150);
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

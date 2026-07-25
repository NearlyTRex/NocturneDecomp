// Name: FUN_004fbbb0
// Address: 004fbbb0
// Address Range: [[004fbbb0, 004fbbcf]]
// Convention: unknown
// Signature: undefined4 FUN_004fbbb0(int param_1)

#include "nocturne.h"

uint FUN_004fbbb0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    switch(*(uint *)(param_1 + 0x2d8)) {
    default:
      uVar1 = 2;
      break;
    case 8:
      return 0;
    }
  }
  return uVar1;
}

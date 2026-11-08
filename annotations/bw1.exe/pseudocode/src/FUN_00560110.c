// Name: FUN_00560110
// Address: 00560110
// Address Range: [[00560110, 0056014d]]
// Convention: unknown
// Signature: undefined4 FUN_00560110(int param_1)

#include "nocturne.h"

uint FUN_00560110(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x70) != 2) {
    iVar1 = FUN_00524770(param_1 + 0x158);
    switch(*(uint *)(iVar1 + 0x24)) {
    case 0xf:
    case 0x10:
      return 1;
    case 0x11:
    case 0x12:
      return 2;
    default:
      return 0;
    }
  }
  return 2;
}

// Name: FUN_00545bd0
// Address: 00545bd0
// Address Range: [[00545bd0, 00545c0d]]
// Convention: unknown
// Signature: undefined4 FUN_00545bd0(int param_1)

#include "nocturne.h"

uint FUN_00545bd0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x70) != 2) {
    iVar1 = FUN_004fc070(param_1 + 0x158);
    switch(*(uint *)(iVar1 + 0x24)) {
    case 0xd:
    case 0xe:
      return 1;
    case 0xf:
    case 0x10:
      return 2;
    default:
      return 0;
    }
  }
  return 2;
}

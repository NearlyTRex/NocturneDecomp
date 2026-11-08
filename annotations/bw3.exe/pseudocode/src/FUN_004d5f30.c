// Name: FUN_004d5f30
// Address: 004d5f30
// Address Range: [[004d5f30, 004d5f62]]
// Convention: unknown
// Signature: undefined4 FUN_004d5f30(int param_1)

#include "nocturne.h"

uint FUN_004d5f30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004fc070(param_1 + 0x158);
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

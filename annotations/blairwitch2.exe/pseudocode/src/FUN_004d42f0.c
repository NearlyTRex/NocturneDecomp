// Name: FUN_004d42f0
// Address: 004d42f0
// Address Range: [[004d42f0, 004d4322]]
// Convention: unknown
// Signature: undefined4 FUN_004d42f0(int param_1)

#include "nocturne.h"

uint FUN_004d42f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005035c0(param_1 + 0x2b4);
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

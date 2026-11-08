// Name: FUN_005746a0
// Address: 005746a0
// Address Range: [[005746a0, 005746d1]]
// Convention: unknown
// Signature: void FUN_005746a0(void)

#include "nocturne.h"

void FUN_005746a0(void)

{
  int iVar1;
  
  FUN_00575d20();
  iVar1 = 0x2c78ff4;
  FUN_00573b00();
  do {
    FUN_00570020(iVar1);
    iVar1 = iVar1 + 0x1b0;
  } while (iVar1 != 0x2c7fbf4);
  FUN_00573e70();
  return;
}

// Name: FUN_004e0610
// Address: 004e0610
// Address Range: [[004e0610, 004e0666]]
// Convention: unknown
// Signature: void FUN_004e0610(int param_1)

#include "nocturne.h"

void FUN_004e0610(int param_1)

{
  uint uVar1;
  
  FUN_00547480(param_1 + 0x2b4);
  FUN_00547890(param_1 + 0x2b4);
  *(uint *)(param_1 + 0x10af8) = 0;
  FUN_00487eb0(param_1);
  uVar1 = FUN_0040cf60(0,0x41f00000);
  *(uint *)(param_1 + 0x10a74) = uVar1;
  return;
}

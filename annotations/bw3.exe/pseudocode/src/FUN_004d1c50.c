// Name: FUN_004d1c50
// Address: 004d1c50
// Address Range: [[004d1c50, 004d1c79]]
// Convention: unknown
// Signature: void FUN_004d1c50(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004d1c50(int param_1,uint param_2)

{
  uint uVar1;
  
  FUN_0057b160(param_1,param_2);
  uVar1 = *(uint *)(param_1 + 0x594);
  *(uint *)(param_1 + 0x594) = 0;
  *(uint *)(param_1 + 0x598) = uVar1;
  return;
}

// Name: FUN_0048aab0
// Address: 0048aab0
// Address Range: [[0048aab0, 0048aae7]]
// Convention: unknown
// Signature: void FUN_0048aab0(int param_1)

#include "nocturne.h"

void FUN_0048aab0(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_005c030f(*(uint *)(param_1 + 0x50),&DAT_005ff640);
  FUN_005c0336(uVar1);
  *(uint *)(param_1 + 0x50) = 0;
  *(uint *)(param_1 + 0x48) = 0;
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x48);
  return;
}

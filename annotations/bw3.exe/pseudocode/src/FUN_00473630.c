// Name: FUN_00473630
// Address: 00473630
// Address Range: [[00473630, 00473667]]
// Convention: unknown
// Signature: void FUN_00473630(int param_1)

#include "nocturne.h"

void FUN_00473630(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_005a308f(*(uint *)(param_1 + 0x50),&DAT_005dee50);
  FUN_005a30b6(uVar1);
  *(uint *)(param_1 + 0x50) = 0;
  *(uint *)(param_1 + 0x48) = 0;
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x48);
  return;
}

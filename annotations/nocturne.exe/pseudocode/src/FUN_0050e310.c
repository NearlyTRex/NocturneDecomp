// Name: FUN_0050e310
// Address: 0050e310
// Address Range: [[0050e310, 0050e33e]]
// Convention: unknown
// Signature: void FUN_0050e310(int param_1)

#include "nocturne.h"

void FUN_0050e310(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x15aac0);
  FUN_005088f0(param_1,*(uint *)(param_1 + 0x15aabc));
  *(uint *)(param_1 + 0x15aac4) = 0;
  *(uint *)(param_1 + 0x15aac0) = uVar1;
  return;
}

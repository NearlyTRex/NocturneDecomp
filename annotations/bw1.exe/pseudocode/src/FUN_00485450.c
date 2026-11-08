// Name: FUN_00485450
// Address: 00485450
// Address Range: [[00485450, 004854d9]]
// Convention: unknown
// Signature: void FUN_00485450(int param_1)

#include "nocturne.h"

void FUN_00485450(int param_1)

{
  uint uVar1;
  
  FUN_004688e0(param_1 + 0x158);
  *(uint *)(param_1 + 0x2ec) = 0;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x2f8);
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x2fc);
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x300);
  uVar1 = FUN_0040cc00(*(uint *)(param_1 + 0x2e0),*(uint *)(param_1 + 0x2e4));
  *(uint *)(param_1 + 0x2dc) = uVar1;
  FUN_00468950(0x1beee04,"stalrock.kfm");
  FUN_004688e0(0x1beee04);
  *(uint *)(param_1 + 0x338) = 0;
  return;
}

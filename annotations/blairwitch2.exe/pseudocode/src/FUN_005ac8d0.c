// Name: FUN_005ac8d0
// Address: 005ac8d0
// Address Range: [[005ac8d0, 005ac959]]
// Convention: unknown
// Signature: void FUN_005ac8d0(int param_1)

#include "nocturne.h"

void FUN_005ac8d0(int param_1)

{
  FUN_0041be70(param_1);
  FUN_005a8030(param_1 + 0x154,0x100);
  FUN_005a8050(param_1 + 0x154,param_1);
  FUN_005a8030(param_1 + 0x198,0x100);
  FUN_005a8050(param_1 + 0x198,param_1);
  FUN_005a8030(param_1 + 0x1dc,0x200);
  FUN_005a8050(param_1 + 0x1dc,param_1);
  FUN_005a8030(param_1 + 0x220,0x100);
  FUN_005a8050(param_1 + 0x220,param_1);
  return;
}

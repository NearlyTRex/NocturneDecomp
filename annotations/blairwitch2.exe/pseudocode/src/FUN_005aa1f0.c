// Name: FUN_005aa1f0
// Address: 005aa1f0
// Address Range: [[005aa1f0, 005aa229]]
// Convention: unknown
// Signature: void FUN_005aa1f0(int param_1)

#include "nocturne.h"

void FUN_005aa1f0(int param_1)

{
  FUN_00503620(param_1 + 0x2b4,0,1);
  *(uint *)(param_1 + 0x11864) = *(uint *)(param_1 + 0x11860);
  FUN_0059d8e0(param_1 + 0x10af8,"Sleeping");
  return;
}

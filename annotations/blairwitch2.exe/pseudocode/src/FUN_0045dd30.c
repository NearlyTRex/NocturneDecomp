// Name: FUN_0045dd30
// Address: 0045dd30
// Address Range: [[0045dd30, 0045dd94]]
// Convention: unknown
// Signature: void FUN_0045dd30(int param_1)

#include "nocturne.h"

void FUN_0045dd30(int param_1)

{
  FUN_004d02e0(param_1);
  *(uint *)(param_1 + 0x25694) = 0;
  *(uint *)(param_1 + 0x25698) = 0;
  *(uint *)(param_1 + 0x256a4) = 0;
  *(uint *)(param_1 + 0x2d04) = 0;
  *(uint *)(param_1 + 0x2d08) = 0;
  FUN_00503950(param_1 + 0x2b4,"stand",0);
  FUN_00503620(param_1 + 0x2b4,0,1);
  return;
}

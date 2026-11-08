// Name: FUN_00526f50
// Address: 00526f50
// Address Range: [[00526f50, 00526fb4]]
// Convention: unknown
// Signature: void FUN_00526f50(int param_1)

#include "nocturne.h"

void FUN_00526f50(int param_1)

{
  FUN_004d4410(param_1);
  *(uint *)(param_1 + 0x20c20) = 0;
  *(uint *)(param_1 + 0x20c24) = 0;
  *(uint *)(param_1 + 0x20b64) = 0;
  *(uint *)(param_1 + 0x2f00) = 0;
  *(uint *)(param_1 + 0x2f04) = 0;
  FUN_004fc3f0(param_1 + 0x158,"stand",0);
  FUN_004fc0d0(param_1 + 0x158,0,1);
  return;
}

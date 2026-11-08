// Name: FUN_00496520
// Address: 00496520
// Address Range: [[00496520, 0049655c]]
// Convention: unknown
// Signature: void FUN_00496520(int param_1)

#include "nocturne.h"

void FUN_00496520(int param_1)

{
  FUN_004591b0(param_1);
  FUN_00462580(param_1 + 500);
  *(uint *)(param_1 + 0xf8) = 1;
  *(uint *)(param_1 + 0x3d8) = 0;
  *(uint *)(param_1 + 0x3dc) = 0;
  return;
}

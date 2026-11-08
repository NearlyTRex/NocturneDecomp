// Name: FUN_004bbf10
// Address: 004bbf10
// Address Range: [[004bbf10, 004bbf39]]
// Convention: unknown
// Signature: void FUN_004bbf10(undefined1 *param_1)

#include "nocturne.h"

void FUN_004bbf10(byte *param_1)

{
  param_1[0x40] = 0;
  *(uint *)(param_1 + 0x150) = 0;
  *(uint *)(param_1 + 0x140) = 0;
  *(uint *)(param_1 + 0x144) = 0;
  *param_1 = 0;
  return;
}

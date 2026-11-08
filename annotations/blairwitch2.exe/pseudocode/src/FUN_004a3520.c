// Name: FUN_004a3520
// Address: 004a3520
// Address Range: [[004a3520, 004a3549]]
// Convention: unknown
// Signature: void FUN_004a3520(undefined1 *param_1)

#include "nocturne.h"

void FUN_004a3520(byte *param_1)

{
  param_1[0x40] = 0;
  *(uint *)(param_1 + 0x150) = 0;
  *(uint *)(param_1 + 0x140) = 0;
  *(uint *)(param_1 + 0x144) = 0;
  *param_1 = 0;
  return;
}

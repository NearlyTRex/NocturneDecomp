// Name: FUN_004254b0
// Address: 004254b0
// Address Range: [[004254b0, 004254c8]]
// Convention: unknown
// Signature: void FUN_004254b0(undefined4 *param_1)

#include "nocturne.h"

void FUN_004254b0(uint *param_1)

{
  param_1[0xe] = 0x41e00000;
  *param_1 = 0x43800000;
  param_1[0xf] = &PTR_FUN_005dcef4;
  return;
}

// Name: FUN_004ba730
// Address: 004ba730
// Address Range: [[004ba730, 004ba75b]]
// Convention: unknown
// Signature: void FUN_004ba730(undefined4 *param_1)

#include "nocturne.h"

void FUN_004ba730(uint *param_1)

{
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[5] = &PTR_FUN_00600924;
  param_1[2] = param_1[3];
  *param_1 = param_1[1];
  return;
}

// Name: FUN_00421570
// Address: 00421570
// Address Range: [[00421570, 00421596]]
// Convention: unknown
// Signature: void FUN_00421570(undefined4 *param_1)

#include "nocturne.h"

void FUN_00421570(uint *param_1)

{
  param_1[2] = 0x7cf0bdc2;
  param_1[5] = 0xfcf0bdc2;
  param_1[1] = param_1[2];
  param_1[4] = param_1[5];
  *param_1 = param_1[1];
  param_1[3] = param_1[5];
  return;
}

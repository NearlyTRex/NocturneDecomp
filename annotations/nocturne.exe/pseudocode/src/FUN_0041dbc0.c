// Name: FUN_0041dbc0
// Address: 0041dbc0
// Address Range: [[0041dbc0, 0041dbe6]]
// Convention: unknown
// Signature: void FUN_0041dbc0(undefined4 *param_1)

#include "nocturne.h"

void FUN_0041dbc0(uint *param_1)

{
  param_1[2] = 0x7cf0bdc2;
  param_1[5] = 0xfcf0bdc2;
  param_1[1] = param_1[2];
  param_1[4] = param_1[5];
  *param_1 = param_1[1];
  param_1[3] = param_1[5];
  return;
}

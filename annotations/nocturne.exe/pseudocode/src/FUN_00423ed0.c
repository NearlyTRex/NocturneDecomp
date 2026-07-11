// Name: FUN_00423ed0
// Address: 00423ed0
// Address Range: [[00423ed0, 00423f35]]
// Convention: unknown
// Signature: void FUN_00423ed0(undefined4 *param_1)

#include "nocturne.h"

void FUN_00423ed0(uint *param_1)

{
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = 0xffffffff;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = param_1[5];
  param_1[3] = param_1[4];
  param_1[6] = 0x41a00000;
  param_1[9] = 0;
  param_1[8] = param_1[9];
  param_1[7] = param_1[8];
  param_1[0xc] = 100;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return;
}

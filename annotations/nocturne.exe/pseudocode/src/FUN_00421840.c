// Name: FUN_00421840
// Address: 00421840
// Address Range: [[00421840, 0042187e]]
// Convention: unknown
// Signature: undefined4 * FUN_00421840(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint * FUN_00421840(int param_1,uint *param_2)

{
  *param_2 = *(uint *)(param_1 + 0x19834);
  param_2[1] = *(uint *)(param_1 + 0x19838);
  param_2[2] = *(uint *)(param_1 + 0x1983c);
  param_2[3] = *(uint *)(param_1 + 0x19840);
  param_2[4] = *(uint *)(param_1 + 0x19844);
  param_2[5] = *(uint *)(param_1 + 0x19848);
  return param_2;
}

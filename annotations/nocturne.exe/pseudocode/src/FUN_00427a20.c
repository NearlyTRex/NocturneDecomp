// Name: FUN_00427a20
// Address: 00427a20
// Address Range: [[00427a20, 00427a5e]]
// Convention: unknown
// Signature: undefined4 * FUN_00427a20(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint * FUN_00427a20(int param_1,uint *param_2)

{
  *param_2 = *(uint *)(param_1 + 0x25f0);
  param_2[1] = *(uint *)(param_1 + 0x25f4);
  param_2[2] = *(uint *)(param_1 + 0x25f8);
  param_2[3] = *(uint *)(param_1 + 0x25fc);
  param_2[4] = *(uint *)(param_1 + 0x2600);
  param_2[5] = *(uint *)(param_1 + 0x2604);
  return param_2;
}

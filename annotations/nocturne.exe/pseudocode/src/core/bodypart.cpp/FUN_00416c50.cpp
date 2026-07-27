// Name: core_bodypart.cpp_FUN_00416c50
// Address: 00416c50
// Address Range: [[00416c50, 00416c8e]]
// Convention: unknown
// Signature: undefined4 * core_bodypart_cpp_FUN_00416c50(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint * core_bodypart_cpp_FUN_00416c50(int param_1,uint *param_2)

{
  *param_2 = *(uint *)(param_1 + 0x154);
  param_2[1] = *(uint *)(param_1 + 0x158);
  param_2[2] = *(uint *)(param_1 + 0x15c);
  param_2[3] = *(uint *)(param_1 + 0x160);
  param_2[4] = *(uint *)(param_1 + 0x164);
  param_2[5] = *(uint *)(param_1 + 0x168);
  return param_2;
}

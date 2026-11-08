// Name: FUN_00552790
// Address: 00552790
// Address Range: [[00552790, 005527c3]]
// Convention: unknown
// Signature: void FUN_00552790(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

void FUN_00552790(uint *param_1,uint *param_2,uint *param_3)

{
  if (param_1 != (uint *)0x0) {
    *param_1 = DAT_0061bc98;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = DAT_0061bc9c;
  }
  if (param_3 == (uint *)0x0) {
    return;
  }
  *param_3 = DAT_0061bca0;
  return;
}

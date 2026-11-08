// Name: FUN_00476220
// Address: 00476220
// Address Range: [[00476220, 0047625d]]
// Convention: unknown
// Signature: void FUN_00476220(int param_1,int param_2)

#include "nocturne.h"

void FUN_00476220(int param_1,int param_2)

{
  *(int *)(param_1 + 0x1ffac) = param_2;
  if ((param_2 == 0) && (*(int *)(0x01CCF390 + 0x264) != 0)) {
    *(uint *)(0x01CCF390 + 0x264) = 0;
    (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"@flashlit.wav @ .5" + 1);
    return;
  }
  return;
}

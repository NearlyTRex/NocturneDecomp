// Name: FUN_00596530
// Address: 00596530
// Address Range: [[00596530, 0059655f]]
// Convention: unknown
// Signature: void FUN_00596530(int param_1,uint param_2)

#include "nocturne.h"

void FUN_00596530(int param_1,uint param_2)

{
  FUN_00484f00(DAT_00612560,(param_2 & 0xfff) * 0x18 + param_1 + 4);
  return;
}

// Name: FUN_00569520
// Address: 00569520
// Address Range: [[00569520, 0056954f]]
// Convention: unknown
// Signature: void FUN_00569520(int param_1,uint param_2)

#include "nocturne.h"

void FUN_00569520(int param_1,uint param_2)

{
  FUN_0046e5e0(DAT_005f2afc,(param_2 & 0xfff) * 0x18 + param_1 + 4);
  return;
}

// Name: FUN_00414850
// Address: 00414850
// Address Range: [[00414850, 00414869]]
// Convention: unknown
// Signature: void FUN_00414850(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_00414850(uint param_1,int param_2)

{
  *(uint *)(param_2 + 4) = 0;
  FUN_004a0f00(param_1,param_2);
  return;
}

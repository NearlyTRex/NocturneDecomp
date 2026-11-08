// Name: FUN_00414b60
// Address: 00414b60
// Address Range: [[00414b60, 00414b79]]
// Convention: unknown
// Signature: void FUN_00414b60(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_00414b60(uint param_1,int param_2)

{
  *(uint *)(param_2 + 4) = 0;
  FUN_00488890(param_1,param_2);
  return;
}

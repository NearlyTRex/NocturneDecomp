// Name: FUN_00570040
// Address: 00570040
// Address Range: [[00570040, 00570059]]
// Convention: unknown
// Signature: void FUN_00570040(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_00570040(uint param_1,int param_2)

{
  *(uint *)(param_2 + 4) = 0;
  FUN_00488890(param_1,param_2);
  return;
}

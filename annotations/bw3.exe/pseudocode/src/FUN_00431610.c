// Name: FUN_00431610
// Address: 00431610
// Address Range: [[00431610, 0043161e]]
// Convention: unknown
// Signature: void FUN_00431610(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00431610(int param_1,uint param_2)

{
  *(uint *)(param_1 + 10000) = param_2;
  return;
}

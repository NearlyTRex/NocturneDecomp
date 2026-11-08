// Name: FUN_00484190
// Address: 00484190
// Address Range: [[00484190, 0048419b]]
// Convention: unknown
// Signature: void FUN_00484190(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00484190(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x18) = param_2;
  return;
}

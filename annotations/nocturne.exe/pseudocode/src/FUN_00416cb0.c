// Name: FUN_00416cb0
// Address: 00416cb0
// Address Range: [[00416cb0, 00416cbe]]
// Convention: unknown
// Signature: void FUN_00416cb0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00416cb0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xf10) = param_2;
  return;
}

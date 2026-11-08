// Name: FUN_005108d0
// Address: 005108d0
// Address Range: [[005108d0, 005108f9]]
// Convention: unknown
// Signature: void FUN_005108d0(int param_1,int param_2)

#include "nocturne.h"

void FUN_005108d0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x24340) != 0) {
    if (param_2 != 0) {
      *(uint *)(param_1 + 0x2568) = 1;
    }
    FUN_00425a00(param_1,param_2);
  }
  return;
}

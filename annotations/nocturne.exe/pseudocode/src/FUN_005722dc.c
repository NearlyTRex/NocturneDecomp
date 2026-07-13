// Name: FUN_005722dc
// Address: 005722dc
// Address Range: [[005722dc, 00572337]]
// Convention: unknown
// Signature: int FUN_005722dc(int param_1,int param_2,int param_3)

#include "nocturne.h"

int FUN_005722dc(int param_1,int param_2,int param_3)

{
  if ((*(int *)(param_1 + 0x2c) != -1) && (*(int *)(param_1 + 4) != 0)) {
    return 0;
  }
  if ((param_2 == 0) || (param_3 < 1)) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    if (param_3 < 5) {
      FUN_00571df8(param_1,0,0,0);
      return 0;
    }
    param_3 = param_2 + param_3;
  }
  FUN_00571df8(param_1,param_2,param_3,0);
  return param_1;
}

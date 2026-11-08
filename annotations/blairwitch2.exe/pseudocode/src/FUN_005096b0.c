// Name: FUN_005096b0
// Address: 005096b0
// Address Range: [[005096b0, 0050978b]]
// Convention: unknown
// Signature: int FUN_005096b0(int *param_1)

#include "nocturne.h"

int FUN_005096b0(int *param_1)

{
  int *piVar1;
  float10 fVar2;
  int in_stack_00000014;
  int local_10;
  
  fVar2 = (float10)(*(int *)(&DAT_00618f40 + param_1[3] * 4 + *param_1 * 0xb4) * 0x90) /
          (float10)*(double *)(&DAT_00618e88 + param_1[4] * 8 + *param_1 * 0x20);
  piVar1 = (int *)FUN_005b7ff0();
  local_10 = (int)ROUND(fVar2);
  if (*piVar1 == 0) {
    if (in_stack_00000014 == 1) {
      local_10 = local_10 / 2 + -9;
    }
    else {
      local_10 = local_10 / 2 + -0x11;
    }
  }
  else if (in_stack_00000014 == 1) {
    local_10 = local_10 + -0x11;
  }
  else {
    local_10 = local_10 + -0x20;
  }
  if (param_1[5] != 0) {
    local_10 = local_10 + 1;
  }
  if (param_1[2] == 0) {
    return local_10 + -4;
  }
  return local_10 + -6;
}

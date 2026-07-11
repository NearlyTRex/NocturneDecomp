// Name: FUN_00411f20
// Address: 00411f20
// Address Range: [[00411f20, 00411ff6]]
// Convention: unknown
// Signature: void FUN_00411f20(int param_1)

#include "nocturne.h"

void FUN_00411f20(int param_1)

{
  float fVar1;
  double dVar2;
  float local_20;
  
  local_20 = *(float *)(param_1 + 0x2fc);
  fVar1 = (float)*(int *)(param_1 + 0x170);
  if (0.0 <= local_20) {
    dVar2 = (double)FUN_005648c0((double)(local_20 / fVar1));
    local_20 = local_20 - (float)dVar2 * fVar1;
  }
  else {
    dVar2 = (double)FUN_005648c0((double)(-local_20 / fVar1));
    local_20 = (float)dVar2 * fVar1 + local_20;
    if (local_20 < 0.0) {
      local_20 = local_20 + fVar1;
    }
  }
  *(float *)(param_1 + 0x2fc) = local_20;
  FUN_0043b800(param_1 + 0x170,*(uint *)(param_1 + 0x2fc),param_1 + 0x20,param_1 + 0x30);
  return;
}

// Name: FUN_004182cd
// Address: 004182cd
// Address Range: [[004182cd, 00418460]]
// Convention: unknown
// Signature: float * FUN_004182cd(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_004182cd(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *unaff_retaddr;
  float local_38;
  float local_34;
  float local_30;
  float local_20;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  local_20 = fVar1;
  if (fVar2 < fVar1) {
    local_20 = fVar2;
  }
  if (fVar3 < local_20) {
    local_20 = fVar3;
  }
  local_30 = fVar1;
  if (fVar1 < fVar2) {
    local_30 = fVar2;
  }
  if (local_30 < fVar3) {
    local_30 = fVar3;
  }
  local_20 = local_30 - local_20;
  if (local_30 <= 0.0) {
    local_38 = 0.0;
  }
  else {
    local_38 = local_20 / local_30;
  }
  if (local_38 <= 0.0) {
    local_34 = 0.0;
  }
  else {
    local_38 = local_38 * (float)_DAT_0057914e;
    if (fVar1 == local_30) {
      local_20 = (fVar2 - fVar3) / local_20;
    }
    else if (fVar2 == local_30) {
      local_20 = (float)_DAT_0057915e - (fVar3 - fVar1) / local_20;
    }
    else {
      local_20 = (fVar1 - fVar2) / local_20 + (float)_DAT_00579156;
    }
    local_34 = local_20 * (float)_DAT_00579166;
    if (local_34 < 0.0) {
      local_34 = local_34 + _DAT_0057916e;
    }
  }
  *unaff_retaddr = local_34;
  unaff_retaddr[1] = local_38;
  unaff_retaddr[2] = local_30;
  return unaff_retaddr;
}

// Name: FUN_004cde90
// Address: 004cde90
// Address Range: [[004cde90, 004cdf60]]
// Convention: unknown
// Signature: int * FUN_004cde90(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_004cde90(int *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int *unaff_ESI;
  int local_38;
  double local_30;
  double local_28;
  double local_20;
  
  dVar1 = (double)*param_1;
  dVar2 = (double)param_1[1];
  dVar3 = (double)param_1[2];
  dVar4 = SQRT(dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1);
  local_38 = SUB84(__BITCAST_UINT64(dVar4),0);
  if ((((ulonglong)dVar4 & 0x7fffffff00000000) == 0) && (local_38 == 0)) {
    local_20 = 0.0;
    local_28 = 0.0;
    local_30 = 0.0;
  }
  else {
    dVar4 = 1.0 / dVar4;
    local_30 = dVar1 * dVar4 * _DAT_00588283;
    local_28 = dVar2 * dVar4 * _DAT_00588283;
    local_20 = _DAT_00588283 * dVar3 * dVar4;
  }
  *unaff_ESI = (int)ROUND(local_30);
  unaff_ESI[1] = (int)ROUND(local_28);
  unaff_ESI[2] = (int)ROUND(local_20);
  return unaff_ESI;
}

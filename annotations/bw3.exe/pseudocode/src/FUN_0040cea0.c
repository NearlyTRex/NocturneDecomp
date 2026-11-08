// Name: FUN_0040cea0
// Address: 0040cea0
// Address Range: [[0040cea0, 0040cf3a]]
// Convention: unknown
// Signature: int FUN_0040cea0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0040cea0(int param_1,int param_2)

{
  double dVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  
  dVar1 = (double)(param_2 - param_1) + _DAT_005b5ef1;
  if (*(int *)(0x01D2130C + 0x260) == 0) {
    iVar3 = FUN_005a35cc();
    fVar2 = (float)iVar3 * _DAT_005b5ef9;
  }
  else {
    iVar3 = FUN_0040cdd0();
    fVar2 = (float)iVar3 * _DAT_005b5efd;
  }
  fVar4 = (float10)param_1 + (float10)fVar2 * (float10)dVar1;
  FUN_005a3120();
  iVar3 = (int)ROUND(fVar4);
  if ((param_1 <= iVar3) && (param_1 = param_2, iVar3 <= param_2)) {
    return iVar3;
  }
  return param_1;
}

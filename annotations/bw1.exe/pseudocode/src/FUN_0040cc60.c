// Name: FUN_0040cc60
// Address: 0040cc60
// Address Range: [[0040cc60, 0040ccfa]]
// Convention: unknown
// Signature: int FUN_0040cc60(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0040cc60(int param_1,int param_2)

{
  double dVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  
  dVar1 = (double)(param_2 - param_1) + _DAT_005d2ea1;
  if (*(int *)(0x01CCF390 + 600) == 0) {
    iVar3 = FUN_005c084c();
    fVar2 = (float)iVar3 * _DAT_005d2ea9;
  }
  else {
    iVar3 = FUN_0040cb90();
    fVar2 = (float)iVar3 * _DAT_005d2ead;
  }
  fVar4 = (float10)param_1 + (float10)fVar2 * (float10)dVar1;
  FUN_005c03a0();
  iVar3 = (int)ROUND(fVar4);
  if ((param_1 <= iVar3) && (param_1 = param_2, iVar3 <= param_2)) {
    return iVar3;
  }
  return param_1;
}

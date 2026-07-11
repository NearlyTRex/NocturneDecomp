// Name: FUN_0040de00
// Address: 0040de00
// Address Range: [[0040de00, 0040de9a]]
// Convention: unknown
// Signature: int FUN_0040de00(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0040de00(int param_1,int param_2)

{
  double dVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  
  dVar1 = (double)(param_2 - param_1) + _DAT_00578051;
  if (*(int *)(0x01C775EC + 0x23c) == 0) {
    iVar3 = FUN_0056488c();
    fVar2 = (float)iVar3 * _DAT_00578059;
  }
  else {
    iVar3 = FUN_0040dd30();
    fVar2 = (float)iVar3 * _DAT_0057805d;
  }
  fVar4 = (float10)param_1 + (float10)fVar2 * (float10)dVar1;
  FUN_00563a30();
  iVar3 = (int)ROUND(fVar4);
  if ((param_1 <= iVar3) && (param_1 = param_2, iVar3 <= param_2)) {
    return iVar3;
  }
  return param_1;
}

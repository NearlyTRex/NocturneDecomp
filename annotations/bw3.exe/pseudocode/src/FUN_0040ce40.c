// Name: FUN_0040ce40
// Address: 0040ce40
// Address Range: [[0040ce40, 0040ce9f]]
// Convention: unknown
// Signature: float FUN_0040ce40(float param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_0040ce40(float param_1,float param_2)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(0x01D2130C + 0x260) == 0) {
    iVar2 = FUN_005a35cc();
    fVar1 = (float)iVar2 * _DAT_005b5ee5;
  }
  else {
    iVar2 = FUN_0040cdd0();
    fVar1 = (float)iVar2 * _DAT_005b5ee9;
  }
  return fVar1 * (param_2 - param_1) + param_1;
}

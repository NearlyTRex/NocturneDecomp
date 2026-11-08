// Name: FUN_0040cf40
// Address: 0040cf40
// Address Range: [[0040cf40, 0040cf91]]
// Convention: unknown
// Signature: bool FUN_0040cf40(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0040cf40(float param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(0x01D2130C + 0x260) == 0) {
    iVar2 = FUN_005a35cc();
    fVar1 = (float)iVar2 * _DAT_005b5f01;
  }
  else {
    iVar2 = FUN_0040cdd0();
    fVar1 = (float)iVar2 * _DAT_005b5f05;
  }
  return fVar1 < param_1;
}

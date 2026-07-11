// Name: FUN_0040dea0
// Address: 0040dea0
// Address Range: [[0040dea0, 0040def1]]
// Convention: unknown
// Signature: bool FUN_0040dea0(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0040dea0(float param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(0x01C775EC + 0x23c) == 0) {
    iVar2 = FUN_0056488c();
    fVar1 = (float)iVar2 * _DAT_00578061;
  }
  else {
    iVar2 = FUN_0040dd30();
    fVar1 = (float)iVar2 * _DAT_00578065;
  }
  return fVar1 < param_1;
}

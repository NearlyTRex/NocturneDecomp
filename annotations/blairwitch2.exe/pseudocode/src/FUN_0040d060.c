// Name: FUN_0040d060
// Address: 0040d060
// Address Range: [[0040d060, 0040d0b1]]
// Convention: unknown
// Signature: bool FUN_0040d060(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0040d060(float param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(0x01CB6900 + 600) == 0) {
    iVar2 = FUN_005b849c();
    fVar1 = (float)iVar2 * _DAT_005caf36;
  }
  else {
    iVar2 = FUN_0040cef0();
    fVar1 = (float)iVar2 * _DAT_005caf3a;
  }
  return fVar1 < param_1;
}

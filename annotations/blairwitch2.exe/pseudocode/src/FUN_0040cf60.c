// Name: FUN_0040cf60
// Address: 0040cf60
// Address Range: [[0040cf60, 0040cfbf]]
// Convention: unknown
// Signature: float FUN_0040cf60(float param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_0040cf60(float param_1,float param_2)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(0x01CB6900 + 600) == 0) {
    iVar2 = FUN_005b849c();
    fVar1 = (float)iVar2 * _DAT_005caf1a;
  }
  else {
    iVar2 = FUN_0040cef0();
    fVar1 = (float)iVar2 * _DAT_005caf1e;
  }
  return fVar1 * (param_2 - param_1) + param_1;
}

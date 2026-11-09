// Name: core_actor.cpp_FUN_0040cc00
// Address: 0040cc00
// Address Range: [[0040cc00, 0040cc5f]]
// Convention: unknown
// Signature: float core_actor_cpp_FUN_0040cc00(float param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_actor_cpp_FUN_0040cc00(float param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)&g_CGamePtr->field_0x258 == 0) {
    iVar3 = rand();
    fVar1 = (float)iVar3 * _DAT_005d2e95;
  }
  else {
    uVar2 = core_actor_cpp_generateRandomValue_FUN_0040cb90();
    fVar1 = (float)(int)uVar2 * _DAT_005d2e99;
  }
  return fVar1 * (param_2 - param_1) + param_1;
}

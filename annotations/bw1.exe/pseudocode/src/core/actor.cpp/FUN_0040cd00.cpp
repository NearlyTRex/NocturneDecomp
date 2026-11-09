// Name: core_actor.cpp_FUN_0040cd00
// Address: 0040cd00
// Address Range: [[0040cd00, 0040cd51]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_FUN_0040cd00(float probability_threshold)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_actor_cpp_FUN_0040cd00(float probability_threshold)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)&g_CGamePtr->field_0x258 == 0) {
    iVar3 = rand();
    fVar1 = (float)iVar3 * _DAT_005d2eb1;
  }
  else {
    uVar2 = core_actor_cpp_generateRandomValue_FUN_0040cb90();
    fVar1 = (float)(int)uVar2 * _DAT_005d2eb5;
  }
  return (uint)(fVar1 < probability_threshold);
}

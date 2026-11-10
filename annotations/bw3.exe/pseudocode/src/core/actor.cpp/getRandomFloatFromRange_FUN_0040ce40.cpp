// Name: core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
// Address: 0040ce40
// Address Range: [[0040ce40, 0040ce9f]]
// Convention: __cdecl
// Signature: float __cdecl core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value,float max_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value,float max_value)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)&g_CGamePtr->field_0x260 == 0) {
    iVar3 = rand();
    fVar1 = (float)iVar3 * _DAT_005b5ee5;
  }
  else {
    uVar2 = core_actor_cpp_generateRandomValue_FUN_0040cdd0();
    fVar1 = (float)(int)uVar2 * _DAT_005b5ee9;
  }
  return fVar1 * (max_value - min_value) + min_value;
}

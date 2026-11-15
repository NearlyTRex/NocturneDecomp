// Name: core_actor.cpp_getRandomInt_FUN_0040cfc0
// Address: 0040cfc0
// Address Range: [[0040cfc0, 0040d05a]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_getRandomInt_FUN_0040cfc0(int min_value,int max_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_actor_cpp_getRandomInt_FUN_0040cfc0(int min_value,int max_value)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  
  dVar4 = (double)(max_value - min_value) + _DAT_005caf26;
  if (g_CGamePtr->is_processing == 0) {
    iVar2 = rand();
    fVar1 = (float)iVar2 * _DAT_005caf2e;
  }
  else {
    uVar3 = core_actor_cpp_generateRandomValue_FUN_0040cef0();
    fVar1 = (float)(int)uVar3 * _DAT_005caf32;
  }
  dVar4 = round((double)((float)min_value + fVar1 * (float)dVar4));
  iVar2 = (int)ROUND(dVar4);
  if ((min_value <= iVar2) && (min_value = max_value, iVar2 <= max_value)) {
    return iVar2;
  }
  return min_value;
}

// Name: core_actor.cpp_getRandomInt_FUN_0040cc60
// Address: 0040cc60
// Address Range: [[0040cc60, 0040ccfa]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_getRandomInt_FUN_0040cc60(int min_value,int max_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_actor_cpp_getRandomInt_FUN_0040cc60(int min_value,int max_value)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  
  dVar4 = (double)(max_value - min_value) + _DAT_005d2ea1;
  if (g_CGamePtr->is_processing == 0) {
    iVar2 = rand();
    fVar1 = (float)iVar2 * _DAT_005d2ea9;
  }
  else {
    uVar3 = core_actor_cpp_generateRandomValue_FUN_0040cb90();
    fVar1 = (float)(int)uVar3 * _DAT_005d2ead;
  }
  dVar4 = round((double)((float)min_value + fVar1 * (float)dVar4));
  iVar2 = (int)ROUND(dVar4);
  if ((min_value <= iVar2) && (min_value = max_value, iVar2 <= max_value)) {
    return iVar2;
  }
  return min_value;
}

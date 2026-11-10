// Name: core_actor.cpp_getRandomInt_FUN_0040cfc0
// Address: 0040cfc0
// Address Range: [[0040cfc0, 0040d05a]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_getRandomInt_FUN_0040cfc0(int min_value,int max_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_actor_cpp_getRandomInt_FUN_0040cfc0(int min_value,int max_value)

{
  double dVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  
  dVar1 = (double)(max_value - min_value) + _DAT_005caf26;
  if (*(int *)&g_CGamePtr->field_0x258 == 0) {
    iVar3 = rand();
    fVar2 = (float)iVar3 * _DAT_005caf2e;
  }
  else {
    uVar4 = core_actor_cpp_generateRandomValue_FUN_0040cef0();
    fVar2 = (float)(int)uVar4 * _DAT_005caf32;
  }
  fVar5 = (float10)min_value + (float10)fVar2 * (float10)dVar1;
  round();
  iVar3 = (int)ROUND(fVar5);
  if ((min_value <= iVar3) && (min_value = max_value, iVar3 <= max_value)) {
    return iVar3;
  }
  return min_value;
}

// Name: core_actor.cpp_FUN_0040cc60
// Address: 0040cc60
// Address Range: [[0040cc60, 0040ccfa]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_FUN_0040cc60(int min_value,int max_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_actor_cpp_FUN_0040cc60(int min_value,int max_value)

{
  double dVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  
  dVar1 = (double)(max_value - min_value) + _DAT_005d2ea1;
  if (*(int *)&g_CGamePtr->field_0x258 == 0) {
    iVar3 = rand();
    fVar2 = (float)iVar3 * _DAT_005d2ea9;
  }
  else {
    uVar4 = core_actor_cpp_generateRandomValue_FUN_0040cb90();
    fVar2 = (float)(int)uVar4 * _DAT_005d2ead;
  }
  fVar5 = (float10)min_value + (float10)fVar2 * (float10)dVar1;
  round();
  iVar3 = (int)ROUND(fVar5);
  if ((min_value <= iVar3) && (min_value = max_value, iVar3 <= max_value)) {
    return iVar3;
  }
  return min_value;
}

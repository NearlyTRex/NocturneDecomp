// Name: core_actor.cpp_getRandomInt_FUN_0040cc70
// Address: 0040cc70
// Address Range: [[0040cc70, 0040cd0a]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_getRandomInt_FUN_0040cc70(int min_value,int max_value)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl core_actor_cpp_getRandomInt_FUN_0040cc70(int min_value,int max_value)

{
  int iVar1;
  int iVar3;
  uint uVar4;
  double dVar1;
  float fVar2;
  
  dVar1 = (double)(max_value - min_value) + 0.99999000000000005;
  if (g_CGamePtr->is_processing == 0) {
    iVar3 = rand();
    fVar2 = (float)iVar3 * 3.051851e-05f;
  }
  else {
    uVar4 = core_actor_cpp_generateRandomValue_FUN_0040cba0();
    fVar2 = (float)(int)uVar4 * 5.960465e-08f;
  }
  iVar1 = (int)ROUND(ROUND((float)min_value + fVar2 * (float)dVar1));
  if ((min_value <= iVar1) && (min_value = max_value, iVar1 <= max_value)) {
    return iVar1;
  }
  return min_value;
}

// Name: core_actor.cpp_getRandomInt_FUN_0040de00
// Address: 0040de00
// Address Range: [[0040de00, 0040de9a]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_getRandomInt_FUN_0040de00(int min_value,int max_value)

#include "nocturne.h"

int __cdecl core_actor_cpp_getRandomInt_FUN_0040de00(int min_value,int max_value)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  
  dVar4 = (double)(max_value - min_value) + 0.99999000000000005;
  if (*(int *)(0x01C775EC + 0x23c) == 0) {
    iVar2 = rand();
    fVar1 = (float)iVar2 * 3.051851e-05f;
  }
  else {
    uVar3 = core_actor_cpp_generateRandomValue_FUN_0040dd30();
    fVar1 = (float)(int)uVar3 * 5.960465e-08f;
  }
  dVar4 = round((double)((float)min_value + fVar1 * (float)dVar4));
  iVar2 = (int)ROUND(dVar4);
  if ((min_value <= iVar2) && (min_value = max_value, iVar2 <= max_value)) {
    return iVar2;
  }
  return min_value;
}

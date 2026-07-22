// Name: core_actor.cpp_getRandomInt_FUN_0040de00
// Address: 0040de00
// Address Range: [[0040de00, 0040de9a]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_getRandomInt_FUN_0040de00(int param_1,int param_2)

#include "nocturne.h"

int __cdecl core_actor_cpp_getRandomInt_FUN_0040de00(int param_1,int param_2)

{
  double dVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  
  dVar1 = (double)(param_2 - param_1) + 0.99999000000000005;
  if (*(int *)(0x01C775EC + 0x23c) == 0) {
    iVar3 = rand();
    fVar2 = (float)iVar3 * 3.051851e-05f;
  }
  else {
    iVar3 = core_actor_cpp_generateRandomValue_FUN_0040dd30();
    fVar2 = (float)iVar3 * 5.960465e-08f;
  }
  fVar4 = (float10)round((float10)param_1 + (float10)fVar2 * (float10)dVar1)
  ;
  iVar3 = (int)ROUND(fVar4);
  if ((param_1 <= iVar3) && (param_1 = param_2, iVar3 <= param_2)) {
    return iVar3;
  }
  return param_1;
}

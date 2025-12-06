// Name: core_actor.cpp_getRandomInt_FUN_0040cc70
// Address: 0040cc70
// Address Range: [[0040cc70, 0040cd0a]]
// Convention: __cdecl
// Signature: int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)

#include "nocturne.h"

int __cdecl core_actor_cpp_getRandomInt_FUN_0040cc70(int min_value,int max_value)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int extraout_EDX;
  float10 fVar4;
  uint uStack_1c;
  uint local_18;
  
  iVar3 = g_CGamePtr->is_processing;
  uStack_1c = (uint)((ulonglong)((double)(max_value - min_value) + 0.99999000000000005) >> 0x20);
  if (iVar3 == 0) {
    uVar2 = crt_stdlib_c_rand_FUN_005feb5c();
    fVar1 = (float)(int)uVar2 * 3.051851e-05f;
  }
  else {
    uVar2 = core_actor_cpp_generateRandomValue_FUN_0040cba0();
    fVar1 = (float)(int)uVar2 * (float)INT_00614304;
    iVar3 = extraout_EDX;
  }
  fVar4 = (float10)min_value + (float10)fVar1 * (float10)(double)CONCAT44 /* combine 2-byte values */(local_18,uStack_1c);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar3,uVar2));
  iVar3 = (int)ROUND(fVar4);
  if ((min_value <= iVar3) && (min_value = max_value, iVar3 <= max_value)) {
    return iVar3;
  }
  return min_value;
}

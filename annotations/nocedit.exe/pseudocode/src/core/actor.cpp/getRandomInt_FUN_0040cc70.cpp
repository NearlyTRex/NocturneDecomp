// Name: core_actor.cpp_getRandomInt_FUN_0040cc70
// Address: 0040cc70
// Address Range: [[0040cc70, 0040cd0a]]
// Convention: __cdecl
// Signature: int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)

#include "nocturne.h"

int __cdecl core_actor_cpp_getRandomInt_FUN_0040cc70(int min_value,int max_value)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  uint uStack_1c;
  uint local_18;
  
  uStack_1c = (uint)((ulonglong)((double)(max_value - min_value) + 0.99999000000000005) >> 0x20);
  if (g_CGamePtr->is_processing == 0) {
    iVar2 = crt_stdlib_c_rand_FUN_005feb5c();
    fVar1 = (float)iVar2 * 3.051851e-05f;
  }
  else {
    uVar3 = core_actor_cpp_generateRandomValue_FUN_0040cba0();
    fVar1 = (float)(int)uVar3 * (float)INT_00614304;
  }
  dVar4 = crt_math_c_round_FUN_005fe6b0
                    ((double)((float)min_value + fVar1 * (float)(double)CONCAT44 /* combine 2-byte values */(local_18,uStack_1c)
                             ));
  iVar2 = (int)ROUND(dVar4);
  if ((min_value <= iVar2) && (min_value = max_value, iVar2 <= max_value)) {
    return iVar2;
  }
  return min_value;
}

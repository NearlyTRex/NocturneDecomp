// Name: unkafter_enemy.cpp_FUN_0048a1b0
// Address: 0048a1b0
// Address Range: [[0048a1b0, 0048a1ff]]
// Convention: unknown
// Signature: undefined4 unkafter_enemy_cpp_FUN_0048a1b0(int param_1,float param_2)

#include "nocturne.h"

uint unkafter_enemy_cpp_FUN_0048a1b0(int param_1,float param_2)

{
  int iVar1;
  float10 fVar2;
  
  if (param_2 <= *(float *)(param_1 + 0xce60)) {
    fVar2 = (float10)*(float *)(param_1 + 0xce60);
    round();
    iVar1 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,(int)ROUND(fVar2));
    if (param_2 <= (float)iVar1) {
      return 0;
    }
  }
  return 1;
}

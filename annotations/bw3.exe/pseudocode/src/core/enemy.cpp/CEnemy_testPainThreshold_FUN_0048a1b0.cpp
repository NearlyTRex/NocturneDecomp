// Name: core_enemy.cpp_CEnemy_testPainThreshold_FUN_0048a1b0
// Address: 0048a1b0
// Address Range: [[0048a1b0, 0048a1ff]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_testPainThreshold_FUN_0048a1b0(CEnemy *this_ptr,float damage)

#include "nocturne.h"

int __cdecl core_enemy_cpp_CEnemy_testPainThreshold_FUN_0048a1b0(CEnemy *this_ptr,float damage)

{
  int iVar1;
  double dVar2;
  
  if (damage <= this_ptr->pain_threshold) {
    dVar2 = round((double)this_ptr->pain_threshold);
    iVar1 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,(int)ROUND(dVar2));
    if ((float)this_ptr <= (float)iVar1) {
      return 0;
    }
  }
  return 1;
}

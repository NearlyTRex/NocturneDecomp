// Name: core_enemy.cpp_CEnemy_onVictimLost_FUN_004aa0c0
// Address: 004aa0c0
// Address Range: [[004aa0c0, 004aa0e1]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_onVictimLost_FUN_004aa0c0(CEnemy *this_ptr,CDemonActor *lost_actor)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_onVictimLost_FUN_004aa0c0(CEnemy *this_ptr,CDemonActor *lost_actor)

{
  if ((CCharacter *)lost_actor != this_ptr->victim) {
    return;
  }
  (*(((this_ptr->base).base.vtable._uc)->_uc).releaseVictim)(&this_ptr->base);
  return;
}

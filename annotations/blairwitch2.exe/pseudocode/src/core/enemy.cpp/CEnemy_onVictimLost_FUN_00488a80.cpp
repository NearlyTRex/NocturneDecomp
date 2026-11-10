// Name: core_enemy.cpp_CEnemy_onVictimLost_FUN_00488a80
// Address: 00488a80
// Address Range: [[00488a80, 00488aa1]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_onVictimLost_FUN_00488a80(CEnemy *this_ptr,CDemonActor *lost_actor)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_onVictimLost_FUN_00488a80(CEnemy *this_ptr,CDemonActor *lost_actor)

{
  if ((CCharacter *)lost_actor != this_ptr->victim) {
    return;
  }
  (*(((this_ptr->base).base.vtable._uc)->_uc).releaseVictim)(&this_ptr->base);
  return;
}

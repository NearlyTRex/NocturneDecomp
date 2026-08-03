// Name: core_enemy.cpp_CEnemy_onVictimLost_FUN_0047a120
// Address: 0047a120
// Address Range: [[0047a120, 0047a141]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_onVictimLost_FUN_0047a120(CEnemy *this_ptr,CDemonActor *lost_actor)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_onVictimLost_FUN_0047a120(CEnemy *this_ptr,CDemonActor *lost_actor)

{
  if ((CCharacter *)lost_actor != this_ptr->victim) {
    return;
  }
  (*(((this_ptr->base).base.vtable._uc)->_uc).releaseVictim)(&this_ptr->base);
  return;
}

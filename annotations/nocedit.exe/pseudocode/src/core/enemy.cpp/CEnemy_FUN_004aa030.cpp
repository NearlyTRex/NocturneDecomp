// Name: core_enemy.cpp_CEnemy_FUN_004aa030
// Address: 004aa030
// Address Range: [[004aa030, 004aa0bd]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_FUN_004aa030(CEnemy *this_ptr)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_FUN_004aa030(CEnemy *this_ptr)

{
  CEnemy *pCVar1;
  
  if (this_ptr->victim != (CDemonActor *)0x0) {
    pCVar1 = (CEnemy *)(*(((this_ptr->victim->vtable)._uc)->_uc).cfunc8)();
    if (pCVar1 == this_ptr) {
      (*(((this_ptr->victim->vtable)._uc)->_uc).cfunc7)();
      if (((int *)(this_ptr->base).base.validation_magic == &g_ActorMagicNumber) &&
         ((this_ptr->base).model.model_ptr != (CDeformableModel *)0x0)) {
        core_charactr_cpp_CCharacter_FUN_00428f40(&this_ptr->base);
      }
      this_ptr->victim = (CDemonActor *)0x0;
      return;
    }
  }
  return;
}

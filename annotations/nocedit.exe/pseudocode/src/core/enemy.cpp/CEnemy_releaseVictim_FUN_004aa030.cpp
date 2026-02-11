// Name: core_enemy.cpp_CEnemy_releaseVictim_FUN_004aa030
// Address: 004aa030
// Address Range: [[004aa030, 004aa0bd]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_releaseVictim_FUN_004aa030(CEnemy *this_ptr)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_releaseVictim_FUN_004aa030(CEnemy *this_ptr)

{
  CCharacter *this_ptr_00;
  CEnemy *pCVar1;
  float fStack_8;
  
  this_ptr_00 = (CCharacter *)this_ptr->victim;
  if (this_ptr_00 != (CCharacter *)0x0) {
    pCVar1 = (CEnemy *)(*(((this_ptr_00->base).vtable._uc)->_uc).getGrabber)(this_ptr_00);
    if (pCVar1 == this_ptr) {
      (*(((((CCharacter *)this_ptr->victim)->base).vtable._uc)->_uc).releaseFromGrab)
                ((CCharacter *)this_ptr->victim);
      if (((int *)(this_ptr->base).base.validation_magic == &g_ActorMagicNumber) &&
         ((this_ptr->base).model.model_ptr != (CDeformableModel *)0x0)) {
        fStack_8 = 0.0;
        core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40
                  (&this_ptr->base,(CVector3f *)&fStack_8);
      }
      this_ptr->victim = (CDemonActor *)0x0;
      return;
    }
  }
  return;
}

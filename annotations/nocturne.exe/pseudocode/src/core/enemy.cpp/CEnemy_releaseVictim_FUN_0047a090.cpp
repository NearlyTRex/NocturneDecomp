// Name: core_enemy.cpp_CEnemy_releaseVictim_FUN_0047a090
// Address: 0047a090
// Address Range: [[0047a090, 0047a11d]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_releaseVictim_FUN_0047a090(CEnemy *this_ptr)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_releaseVictim_FUN_0047a090(CEnemy *this_ptr)

{
  CCharacter *this_ptr_00;
  CEnemy *pCVar1;
  CVector3f CStack_10;
  
  this_ptr_00 = this_ptr->victim;
  if (this_ptr_00 != (CCharacter *)0x0) {
    pCVar1 = (CEnemy *)(*(((this_ptr_00->base).vtable._uc)->_uc).getGrabber)(this_ptr_00);
    if (pCVar1 == this_ptr) {
      (*(((this_ptr->victim->base).vtable._uc)->_uc).releaseFromGrab)(this_ptr->victim);
      if (((byte *)(this_ptr->base).base.validation_magic == &DAT_0078a123) &&
         ((this_ptr->base).model.model_ptr != (CDeformableModel *)0x0)) {
        CStack_10.z = -0.001;
        CStack_10.x = 0.0;
        CStack_10.y = 0.0;
        core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(&this_ptr->base,&CStack_10);
      }
      this_ptr->victim = (CCharacter *)0x0;
      return;
    }
  }
  return;
}

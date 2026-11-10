// Name: core_enemy.cpp_CEnemy_releaseVictim_FUN_0048a050
// Address: 0048a050
// Address Range: [[0048a050, 0048a0fa]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_releaseVictim_FUN_0048a050(CEnemy *this_ptr)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_releaseVictim_FUN_0048a050(CEnemy *this_ptr)

{
  CEnemy *pCVar1;
  CVector3f CStack_14;
  
  if (this_ptr->victim != (CCharacter *)0x0) {
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"CEnemy::stopGrabbing %s\n",this_ptr->victim)
    ;
    pCVar1 = (CEnemy *)(*(((this_ptr->victim->base).vtable._uc)->_uc).getGrabber)(this_ptr->victim);
    if (pCVar1 == this_ptr) {
      (*(((this_ptr->victim->base).vtable._uc)->_uc).releaseFromGrab)(this_ptr->victim);
      if (((byte *)(this_ptr->base).base.validation_magic == &DAT_0078a123) &&
         ((this_ptr->base).model.model_ptr != (CDeformableModel *)0x0)) {
        CStack_14.x = 0.0;
        CStack_14.y = 0.0;
        CStack_14.z = -0.001;
        core_charactr_cpp_FUN_0042c230(&this_ptr->base,&CStack_14);
      }
      this_ptr->victim = (CCharacter *)0x0;
      return;
    }
  }
  return;
}

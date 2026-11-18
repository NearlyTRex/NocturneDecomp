// Name: core_doc.cpp_CDoc_handleActionButton_FUN_0045c960
// Address: 0045c960
// Address Range: [[0045c960, 0045c9ca]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_handleActionButton_FUN_0045c960(CDoc *this_ptr)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_handleActionButton_FUN_0045c960(CDoc *this_ptr)

{
  int iVar1;
  
  if (((this_ptr->base).player_input.action_state.fire != 0) && (this_ptr->action_pending == 0)) {
    iVar1 = core_doc_cpp_CDoc_tryThrowDynamite_FUN_0045d1f0(this_ptr);
    if ((iVar1 == 0) && ((this_ptr->guns_drawn == 0 && (this_ptr->lantern_tween_pct <= 0.0)))) {
      iVar1 = core_hero_cpp_CHero_findHeroAction_FUN_004d0780(&this_ptr->base,0);
      if (iVar1 == 0) {
        (this_ptr->base).player_input.action_state.fire = 0;
        return;
      }
      (*(((this_ptr->base).base.base.vtable._uh)->_uh).doHeroAction)(&this_ptr->base);
      return;
    }
  }
  return;
}

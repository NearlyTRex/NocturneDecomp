// Name: core_doc.cpp_CDoc_handleActionButton_FUN_00474ef0
// Address: 00474ef0
// Address Range: [[00474ef0, 00474f61]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_handleActionButton_FUN_00474ef0(CDoc *this_ptr)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_handleActionButton_FUN_00474ef0(CDoc *this_ptr)

{
  int iVar1;
  
  if (((this_ptr->base).player_input.action_state.fire != 0) &&
     ((this_ptr->base).action_pending == 0)) {
    iVar1 = core_doc_cpp_CDoc_tryThrowDynamite_FUN_00475890(this_ptr);
    if ((iVar1 == 0) && (this_ptr->guns_drawn == 0)) {
      iVar1 = core_hero_cpp_CHero_findHeroAction_FUN_004eca10(&this_ptr->base,0);
      if (iVar1 != 0) {
        (*(((this_ptr->base).base.base.vtable._uh)->_uh).doHeroAction)(&this_ptr->base);
        return;
      }
      iVar1 = core_doc_cpp_CDoc_tryPlaceObject_FUN_004712b0(this_ptr);
      if (iVar1 != 0) {
        (this_ptr->base).player_input.action_state.fire = 0;
        return;
      }
      (this_ptr->base).player_input.action_state.fire = 0;
      return;
    }
  }
  return;
}

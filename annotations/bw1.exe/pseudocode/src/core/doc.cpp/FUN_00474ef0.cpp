// Name: core_doc.cpp_FUN_00474ef0
// Address: 00474ef0
// Address Range: [[00474ef0, 00474f61]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00474ef0(CDoc *param_1)

#include "nocturne.h"

void core_doc_cpp_FUN_00474ef0(CDoc *param_1)

{
  int iVar1;
  
  if (((param_1->base).player_input.action_state.fire != 0) && ((param_1->base).action_pending == 0)
     ) {
    iVar1 = core_doc_cpp_FUN_00475890(param_1);
    if ((iVar1 == 0) && (param_1->guns_drawn == 0)) {
      iVar1 = core_hero_cpp_FUN_004eca10(param_1,0);
      if (iVar1 != 0) {
        (*(((param_1->base).base.base.vtable._uh)->_uh).doHeroAction)(&param_1->base);
        return;
      }
      iVar1 = core_doc_cpp_CDoc_tryPlaceObject_FUN_004712b0(param_1);
      if (iVar1 != 0) {
        (param_1->base).player_input.action_state.fire = 0;
        return;
      }
      (param_1->base).player_input.action_state.fire = 0;
      return;
    }
  }
  return;
}

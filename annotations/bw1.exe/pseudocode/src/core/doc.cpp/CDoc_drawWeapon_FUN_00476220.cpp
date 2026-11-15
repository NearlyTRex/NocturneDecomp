// Name: core_doc.cpp_CDoc_drawWeapon_FUN_00476220
// Address: 00476220
// Address Range: [[00476220, 0047625d]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_drawWeapon_FUN_00476220(CDoc *this_ptr,int drawn)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_drawWeapon_FUN_00476220(CDoc *this_ptr,int drawn)

{
  this_ptr->guns_drawn = drawn;
  if ((drawn == 0) && (g_CGamePtr->flashlight_active != 0)) {
    g_CGamePtr->flashlight_active = 0;
    (*((this_ptr->base).base.base.vtable._ub)->playSound)
              ((CDemonActor *)this_ptr,"@flashlit.wav @ .5" + 1);
    return;
  }
  return;
}

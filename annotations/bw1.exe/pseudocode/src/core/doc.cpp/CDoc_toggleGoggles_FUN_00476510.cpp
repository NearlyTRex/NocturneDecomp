// Name: core_doc.cpp_CDoc_toggleGoggles_FUN_00476510
// Address: 00476510
// Address Range: [[00476510, 004765ba]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_toggleGoggles_FUN_00476510(CDoc *this_ptr)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_toggleGoggles_FUN_00476510(CDoc *this_ptr)

{
  CDemonActor *pCVar1;
  float fVar2;
  uint class_name_hash;
  
  class_name_hash = g_CGogglesClassInfo.name_hash;
  pCVar1 = (CDemonActor *)core_inv_cpp_FUN_004f8c90(&(this_ptr->base).inventory,"CGoggles")
  ;
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c600(pCVar1,class_name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    if ((g_CGamePtr->letterbox_mode == 0) && (pCVar1[2].location.position.y == 0.0)) {
      fVar2 = 1.4013e-45;
    }
    else {
      fVar2 = 0.0;
    }
    pCVar1[2].location.position.y = fVar2;
  }
  if ((g_CGamePtr->goggles_active == 0) && (g_CGamePtr->letterbox_mode == 0)) {
    if (g_CGamePtr->letterbox_mode == 0) {
      return;
    }
  }
  else {
    (**(code **)g_CGamePtr->vtable)(g_CGamePtr,0);
    if (g_CGamePtr->letterbox_mode == 0) {
      return;
    }
  }
  (this_ptr->base).is_wearing_goggles = 0;
  return;
}

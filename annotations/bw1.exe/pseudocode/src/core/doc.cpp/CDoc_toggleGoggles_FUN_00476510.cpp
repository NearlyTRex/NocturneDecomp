// Name: core_doc.cpp_CDoc_toggleGoggles_FUN_00476510
// Address: 00476510
// Address Range: [[00476510, 004765ba]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_toggleGoggles_FUN_00476510(CDoc *this_ptr)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_toggleGoggles_FUN_00476510(CDoc *this_ptr)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = g_CGogglesClassInfo.name_hash;
  iVar1 = core_inv_cpp_FUN_004f8c90(&(this_ptr->base).inventory,"CGoggles");
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c600(iVar1,uVar3);
  if (iVar1 != 0) {
    if ((g_CGamePtr->letterbox_mode == 0) && (*(int *)(iVar1 + 0x2d4) == 0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    *(uint *)(iVar1 + 0x2d4) = uVar2;
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

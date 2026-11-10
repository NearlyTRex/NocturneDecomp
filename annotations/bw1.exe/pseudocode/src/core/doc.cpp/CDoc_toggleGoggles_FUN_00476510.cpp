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
  iVar1 = core_inv_cpp_FUN_004f8c90((CInventory *)&this_ptr->field_0x1fae8,"CGoggles");
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c600(iVar1,uVar3);
  if (iVar1 != 0) {
    if ((*(int *)&g_CGamePtr->field_0x244 == 0) && (*(int *)(iVar1 + 0x2d4) == 0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    *(uint *)(iVar1 + 0x2d4) = uVar2;
  }
  if ((*(int *)&g_CGamePtr->field_0x25c == 0) && (*(int *)&g_CGamePtr->field_0x244 == 0)) {
    if (*(int *)&g_CGamePtr->field_0x244 == 0) {
      return;
    }
  }
  else {
    (*(code *)**(uint **)&g_CGamePtr->field_0xb00)(g_CGamePtr,0);
    if (*(int *)&g_CGamePtr->field_0x244 == 0) {
      return;
    }
  }
  *(uint *)&this_ptr->field_0x1ff58 = 0;
  return;
}

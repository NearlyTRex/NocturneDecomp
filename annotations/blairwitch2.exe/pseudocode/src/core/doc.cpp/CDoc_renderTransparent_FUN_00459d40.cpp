// Name: core_doc.cpp_CDoc_renderTransparent_FUN_00459d40
// Address: 00459d40
// Address Range: [[00459d40, 00459da6]]
// Convention: __cdecl
// Signature: int __cdecl core_doc_cpp_CDoc_renderTransparent_FUN_00459d40(CDoc *this_ptr)

#include "nocturne.h"

int __cdecl core_doc_cpp_CDoc_renderTransparent_FUN_00459d40(CDoc *this_ptr)

{
  int iVar1;
  
  if (0.0 < *(float *)&this_ptr->field_0x259b0) {
    core_dlight_cpp_renderConeLightGeometry_FUN_0044d060
              ((CVector3f *)&this_ptr->field_0x25790,(CVector3f *)&this_ptr->field_0x2579c,32.0,5.0)
    ;
  }
  iVar1 = *(int *)&this_ptr->field_0x25698;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x1c))(iVar1);
  }
  unkafter_superopt_cpp_FUN_005a8290(&this_ptr->field_0x154);
  return 1;
}

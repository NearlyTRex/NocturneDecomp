// Name: core_set.cpp_CDemonSet_dtor_FUN_00569350
// Address: 00569350
// Address Range: [[00569350, 005693b0]]
// Convention: __cdecl
// Signature: CDemonSet * __cdecl core_set_cpp_CDemonSet_dtor_FUN_00569350(CDemonSet *this_ptr,uint flags)

#include "nocturne.h"

CDemonSet * __cdecl core_set_cpp_CDemonSet_dtor_FUN_00569350(CDemonSet *this_ptr,uint flags)

{
  CDemonSet_ptr_1422356 pSVar1;
  CDemonSet_ptr_1420992 pSVar2;
  CDemonSet_ptr_105008 pCVar1;
  CDemonSet_ptr_4 pCVar2;
  
  core_set_cpp_CDemonSet_clear_FUN_005693c0(this_ptr);
  pSVar1 = (CDemonSet_ptr_1422356)core_set_cpp_SVDBox_arrdtor_FUN_00571590(this_ptr->vdir_boxes,0);
  pSVar2 = (CDemonSet_ptr_1420992)core_set_cpp_SRoom_arrdtor_FUN_00571570(ADJ(pSVar1)->rooms,0);
  pCVar1 = (CDemonSet_ptr_105008)core_set_cpp_C3DSLight_arrdtor_FUN_00571550(ADJ(pSVar2)->lights,0);
  pCVar2 = (CDemonSet_ptr_4)core_set_cpp_C3DSCamera_arrdtor_FUN_00571530(ADJ(pCVar1)->cameras,0);
  return ADJ(pCVar2);
}

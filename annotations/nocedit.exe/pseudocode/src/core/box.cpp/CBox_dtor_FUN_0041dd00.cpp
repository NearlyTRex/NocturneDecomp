// Name: core_box.cpp_CBox_dtor_FUN_0041dd00
// Address: 0041dd00
// Address Range: [[0041dd00, 0041dd19]]
// Convention: __cdecl
// Signature: CBox * __cdecl core_box_cpp_CBox_dtor_FUN_0041dd00(CBox *this_ptr,uint flags)

#include "nocturne.h"

CBox * __cdecl core_box_cpp_CBox_dtor_FUN_0041dd00(CBox *this_ptr,uint flags)

{
  CBox_ptr_180 pSVar1;
  
  pSVar1 = (CBox_ptr_180)core_box_cpp_SScrape_arrdtor8_FUN_00420220(this_ptr->scrape_points,0);
  return ADJ(pSVar1);
}

// Name: core_box.cpp_CBox_dtor_FUN_0041a6c0
// Address: 0041a6c0
// Address Range: [[0041a6c0, 0041a6d9]]
// Convention: __cdecl
// Signature: CBox * __cdecl core_box_cpp_CBox_dtor_FUN_0041a6c0(CBox *this_ptr,uint flags)

#include "nocturne.h"

CBox * __cdecl core_box_cpp_CBox_dtor_FUN_0041a6c0(CBox *this_ptr,uint flags)

{
  SScrape *pSVar1;
  
  pSVar1 = core_box_cpp_SScrape_arrdtor_FUN_0041cbe0(this_ptr->scrape_points,0);
  return (CBox *)&pSVar1[-4].previous_position.y;
}

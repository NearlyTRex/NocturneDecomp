// Name: core_box.cpp_CBox_dtor_FUN_0041dd00
// Address: 0041dd00
// Address Range: [[0041dd00, 0041dd19]]
// Convention: __cdecl
// Signature: CBox * __cdecl core_box_cpp_CBox_dtor_FUN_0041dd00(CBox *this_ptr)

#include "nocturne.h"

CBox * __cdecl core_box_cpp_CBox_dtor_FUN_0041dd00(CBox *this_ptr)

{
  SScrape *pSVar1;
  
  pSVar1 = core_box_cpp_freeScrapes_FUN_00420220(this_ptr->scrape_points);
  return (CBox *)&pSVar1[-4].previous_position.y;
}

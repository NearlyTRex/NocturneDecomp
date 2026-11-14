// Name: core_fire.cpp_CToss_dtor_FUN_004b7620
// Address: 004b7620
// Address Range: [[004b7620, 004b7639]]
// Convention: __cdecl
// Signature: CToss * __cdecl core_fire_cpp_CToss_dtor_FUN_004b7620(CToss *this_ptr,uint flags)

#include "nocturne.h"

CToss * __cdecl core_fire_cpp_CToss_dtor_FUN_004b7620(CToss *this_ptr,uint flags)

{
  CBox *pCVar1;
  
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041dab0(&this_ptr->physics_box,0);
  return (CToss *)&pCVar1[-1].scrape_points[0].raytrace_intersection;
}

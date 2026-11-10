// Name: core_fire.cpp_CToss_dtor_FUN_004a46c0
// Address: 004a46c0
// Address Range: [[004a46c0, 004a46d9]]
// Convention: __cdecl
// Signature: CToss * __cdecl core_fire_cpp_CToss_dtor_FUN_004a46c0(CToss *this_ptr,uint flags)

#include "nocturne.h"

CToss * __cdecl core_fire_cpp_CToss_dtor_FUN_004a46c0(CToss *this_ptr,uint flags)

{
  CBox *pCVar1;
  
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041adf0((CBox *)&this_ptr->field_0x180,0);
  return (CToss *)&pCVar1[-1].scrape_points[0].raytrace_intersection;
}

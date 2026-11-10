// Name: core_fire.cpp_CToss_ctor_FUN_004b1c10
// Address: 004b1c10
// Address Range: [[004b1c10, 004b1c3d]]
// Convention: __cdecl
// Signature: CToss * __cdecl core_fire_cpp_CToss_ctor_FUN_004b1c10(CToss *this_ptr)

#include "nocturne.h"

CToss * __cdecl core_fire_cpp_CToss_ctor_FUN_004b1c10(CToss *this_ptr)

{
  CKeyFramedModelInstance *pCVar1;
  CBox *pCVar2;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860(&this_ptr->model);
  pCVar2 = core_box_cpp_CBox_ctor_FUN_0041da00((CBox *)(pCVar1 + 1));
  pCVar2[1].position.y = 0.0;
  return (CToss *)&pCVar2[-1].scrape_points[0].raytrace_intersection;
}

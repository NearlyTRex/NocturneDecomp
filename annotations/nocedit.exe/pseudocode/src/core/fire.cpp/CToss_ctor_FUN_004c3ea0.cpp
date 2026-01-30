// Name: core_fire.cpp_CToss_ctor_FUN_004c3ea0
// Address: 004c3ea0
// Address Range: [[004c3ea0, 004c3ecd]]
// Convention: __cdecl
// Signature: CToss * __cdecl core_fire_cpp_CToss_ctor_FUN_004c3ea0(CToss *this_ptr)

#include "nocturne.h"

CToss * __cdecl core_fire_cpp_CToss_ctor_FUN_004c3ea0(CToss *this_ptr)

{
  CToss *pCVar1;
  CBox *pCVar2;
  
  pCVar1 = (CToss *)core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&this_ptr->model);
  pCVar2 = core_box_cpp_CBox_ctor_FUN_0041dc50((CBox *)&(pCVar1->model).model_ptr);
  pCVar2[1].position.y = 0.0;
  return (CToss *)&pCVar2[-1].scrape_points[0].raytrace_intersection;
}

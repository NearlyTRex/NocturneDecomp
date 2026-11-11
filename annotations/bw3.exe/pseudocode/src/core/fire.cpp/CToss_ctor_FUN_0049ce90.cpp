// Name: core_fire.cpp_CToss_ctor_FUN_0049ce90
// Address: 0049ce90
// Address Range: [[0049ce90, 0049cebd]]
// Convention: __cdecl
// Signature: CToss * __cdecl core_fire_cpp_CToss_ctor_FUN_0049ce90(CToss *this_ptr)

#include "nocturne.h"

CToss * __cdecl core_fire_cpp_CToss_ctor_FUN_0049ce90(CToss *this_ptr)

{
  CKeyFramedModelInstance *pCVar1;
  CBox *pCVar2;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500(&this_ptr->model);
  pCVar2 = core_box_cpp_CBox_ctor_FUN_0041ad40((CBox *)(pCVar1 + 1));
  pCVar2[1].position.y = 0.0;
  return (CToss *)&pCVar2[-1].scrape_points[0].raytrace_intersection;
}

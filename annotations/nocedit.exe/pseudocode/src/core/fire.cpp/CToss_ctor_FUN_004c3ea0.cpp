// Name: core_fire.cpp_CToss_ctor_FUN_004c3ea0
// Address: 004c3ea0
// Address Range: [[004c3ea0, 004c3ecd]]
// Convention: __cdecl
// Signature: CToss * __cdecl core_fire_cpp_CToss_ctor_FUN_004c3ea0(CToss *this_ptr)

#include "nocturne.h"

CToss * __cdecl core_fire_cpp_CToss_ctor_FUN_004c3ea0(CToss *this_ptr)

{
  CKeyFramedModelInstance *pCVar1;
  CBox *pCVar2;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                     ((CKeyFramedModelInstance *)(this_ptr->unk + 4));
  pCVar2 = core_box_cpp_CBox_ctor_FUN_0041dc50((CBox *)(pCVar1 + 1));
  pCVar2[1].position.y = 0.0;
  return (CToss *)&pCVar2[-1].scrape_points[0].raytrace_intersection;
}

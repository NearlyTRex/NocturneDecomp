// Name: core_fire.cpp_CToss_ctor_FUN_00487370
// Address: 00487370
// Address Range: [[00487370, 0048739d]]
// Convention: unknown
// Signature: float * core_fire_cpp_CToss_ctor_FUN_00487370(int param_1)

#include "nocturne.h"

float * core_fire_cpp_CToss_ctor_FUN_00487370(int param_1)

{
  CKeyFramedModelInstance *pCVar1;
  CBox *pCVar2;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                     ((CKeyFramedModelInstance *)(param_1 + 4));
  pCVar2 = core_box_cpp_CBox_ctor_FUN_0041a610((CBox *)(pCVar1 + 1));
  pCVar2[1].position.y = 0.0;
  return &pCVar2[-1].scrape_points[0].raytrace_intersection;
}

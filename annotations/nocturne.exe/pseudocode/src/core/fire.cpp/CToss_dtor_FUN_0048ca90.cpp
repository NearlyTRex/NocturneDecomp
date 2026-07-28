// Name: core_fire.cpp_CToss_dtor_FUN_0048ca90
// Address: 0048ca90
// Address Range: [[0048ca90, 0048caa9]]
// Convention: unknown
// Signature: float * core_fire_cpp_CToss_dtor_FUN_0048ca90(int param_1)

#include "nocturne.h"

float * core_fire_cpp_CToss_dtor_FUN_0048ca90(int param_1)

{
  CBox *pCVar1;
  
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041a6c0((CBox *)(param_1 + 0x180),0);
  return &pCVar1[-1].scrape_points[0].raytrace_intersection;
}

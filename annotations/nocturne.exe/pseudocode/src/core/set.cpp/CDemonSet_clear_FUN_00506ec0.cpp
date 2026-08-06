// Name: core_set.cpp_CDemonSet_clear_FUN_00506ec0
// Address: 00506ec0
// Address Range: [[00506ec0, 00506f02]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_clear_FUN_00506ec0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_clear_FUN_00506ec0(CDemonSet *this_ptr)

{
  C3DSCamera *this_ptr_00;
  
  core_dmodel_cpp_CKeyFramedModel_FUN_00452f10(&g_CKeyFramedModel_01fbacc8);
  this_ptr_00 = this_ptr->cameras;
  do {
    core_setutil_cpp_C3DSCamera_FUN_00514430(this_ptr_00);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (C3DSCamera *)&this_ptr->light_count);
  core_terrain_cpp_CTerrain_free_FUN_005492f0(0x02DD10C8);
  return;
}

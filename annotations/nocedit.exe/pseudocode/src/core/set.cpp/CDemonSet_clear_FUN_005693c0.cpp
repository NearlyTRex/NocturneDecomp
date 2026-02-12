// Name: core_set.cpp_CDemonSet_clear_FUN_005693c0
// Address: 005693c0
// Address Range: [[005693c0, 0056940f]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_clear_FUN_005693c0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_clear_FUN_005693c0(CDemonSet *this_ptr)

{
  C3DSCamera *this_ptr_00;
  
  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(&g_CKeyFramedModelInstance);
  this_ptr_00 = this_ptr->cameras;
  do {
    core_setutil_cpp_C3DSCamera_free_FUN_00585360(this_ptr_00);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (C3DSCamera *)&this_ptr->light_count);
  core_terrain_cpp_CTerrain_free_FUN_005e1f30(g_CTerrainPtr);
  core_setdir_cpp_CDemonSet_freeThumbs_FUN_00575df0(this_ptr);
  return;
}

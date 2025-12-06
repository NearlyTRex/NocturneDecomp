// Name: core_set.cpp_CDemonSet_clear_FUN_005693c0
// Address: 005693c0
// Address Range: [[005693c0, 0056940f]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_clear_FUN_005693c0(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_clear_FUN_005693c0(CDemonSet *this_ptr)

{
  C3DSCamera *this_ptr_00;
  int in_stack_00000008;
  CDemonSet *in_stack_00000010;
  
  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(&g_CKeyFramedModelInstance);
  this_ptr_00 = (C3DSCamera *)(in_stack_00000008 + 4);
  do {
    core_setutil_cpp_C3DSCamera_free_FUN_00585360(this_ptr_00);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (C3DSCamera *)(in_stack_00000008 + 0x19a2c));
  core_terrain_cpp_CTerrain_dtor_FUN_005e1f30(g_CTerrainPtr);
  core_setdir_cpp_CDemonSet_freeThumbs_FUN_00575df0(in_stack_00000010);
  return;
}

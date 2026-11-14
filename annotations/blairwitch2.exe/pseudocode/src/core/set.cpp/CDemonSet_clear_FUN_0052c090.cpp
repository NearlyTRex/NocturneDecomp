// Name: core_set.cpp_CDemonSet_clear_FUN_0052c090
// Address: 0052c090
// Address Range: [[0052c090, 0052c0df]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_clear_FUN_0052c090(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_clear_FUN_0052c090(CDemonSet *this_ptr)

{
  C3DSCamera *this_ptr_00;
  
  core_dmodel_cpp_FUN_0044e590(&g_CKeyFramedModelInstance);
  this_ptr_00 = this_ptr->cameras;
  do {
    core_setutil_cpp_C3DSCamera_free_FUN_0053a830(this_ptr_00);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (C3DSCamera *)&this_ptr->light_count);
  core_terrain_cpp_CTerrain_free_FUN_0057b840(0x0265364C);
  core_setdir_cpp_CDemonSet_freeThumbs_FUN_00539be0(this_ptr);
  return;
}

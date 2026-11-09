// Name: core_set.cpp_CDemonSet_clear_FUN_0052c090
// Address: 0052c090
// Address Range: [[0052c090, 0052c0df]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_clear_FUN_0052c090(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_clear_FUN_0052c090(CDemonSet *this_ptr)

{
  byte *puVar1;
  
  core_dmodel_cpp_FUN_0044e590(&g_CKeyFramedModelInstance);
  puVar1 = &this_ptr->field_0x4;
  do {
    core_setutil_cpp_C3DSCamera_free_FUN_0053a830(puVar1);
    puVar1 = puVar1 + 0x1a4;
  } while (puVar1 != &this_ptr->field_0x19a2c);
  core_terrain_cpp_CTerrain_free_FUN_0057b840(0x0265364C);
  core_setdir_cpp_CDemonSet_freeThumbs_FUN_00539be0(this_ptr);
  return;
}

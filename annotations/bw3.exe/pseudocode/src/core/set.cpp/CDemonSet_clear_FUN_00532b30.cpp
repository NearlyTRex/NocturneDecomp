// Name: core_set.cpp_CDemonSet_clear_FUN_00532b30
// Address: 00532b30
// Address Range: [[00532b30, 00532b7f]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_clear_FUN_00532b30(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_clear_FUN_00532b30(CDemonSet *this_ptr)

{
  byte *puVar1;
  
  core_dmodel_cpp_FUN_00460e10(&g_CKeyFramedModelInstance);
  puVar1 = &this_ptr->field_0x4;
  do {
    core_setutil_cpp_C3DSCamera_free_FUN_00541ac0(puVar1);
    puVar1 = puVar1 + 0x1a4;
  } while (puVar1 != &this_ptr->field_0x19a2c);
  core_terrain_cpp_CTerrain_free_FUN_005723b0(0x02CFD8B8);
  core_setdir_cpp_FUN_00541a60(this_ptr);
  return;
}

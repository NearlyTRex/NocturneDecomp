// Name: core_set.cpp_CDemonSet_clear_FUN_0054d370
// Address: 0054d370
// Address Range: [[0054d370, 0054d3bf]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_clear_FUN_0054d370(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_clear_FUN_0054d370(CDemonSet *this_ptr)

{
  byte *puVar1;
  
  core_dmodel_cpp_FUN_00467160(&g_CKeyFramedModelInstance);
  puVar1 = &this_ptr->field_0x4;
  do {
    core_setutil_cpp_C3DSCamera_free_FUN_0055c100(puVar1);
    puVar1 = puVar1 + 0x1a4;
  } while (puVar1 != &this_ptr->field_0x19a2c);
  core_terrain_cpp_CTerrain_free_FUN_0059f3c0(0x02C8AE68);
  core_setdir_cpp_FUN_0055c0a0(this_ptr);
  return;
}

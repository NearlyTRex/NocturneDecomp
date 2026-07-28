// Name: core_set.cpp_CDemonSet_clear_FUN_00506ec0
// Address: 00506ec0
// Address Range: [[00506ec0, 00506f02]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_clear_FUN_00506ec0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_clear_FUN_00506ec0(CDemonSet *this_ptr)

{
  C3DSCamera *pCVar1;
  
  core_dmodel_cpp_FUN_00452f10(0x1fbacc8);
  pCVar1 = this_ptr->cameras;
  do {
    core_setutil_cpp_FUN_00514430(pCVar1);
    pCVar1 = (C3DSCamera *)&pCVar1->enabled;
  } while (pCVar1 != (C3DSCamera *)&this_ptr->cameras[0xf7].position.y);
  core_terrain_cpp_CTerrain_free_FUN_005492f0(0x02DD10C8);
  return;
}

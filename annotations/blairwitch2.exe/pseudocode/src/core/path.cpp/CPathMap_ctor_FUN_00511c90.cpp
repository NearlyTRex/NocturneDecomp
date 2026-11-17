// Name: core_path.cpp_CPathMap_ctor_FUN_00511c90
// Address: 00511c90
// Address Range: [[00511c90, 00511d09]]
// Convention: __cdecl
// Signature: CPathMap * __cdecl core_path_cpp_CPathMap_ctor_FUN_00511c90(CPathMap *this_ptr)

#include "nocturne.h"

CPathMap * __cdecl core_path_cpp_CPathMap_ctor_FUN_00511c90(CPathMap *this_ptr)

{
  int iVar1;
  
  (this_ptr->cached_voxel_coords).z = 0x7fffffff;
  iVar1 = (this_ptr->cached_voxel_coords).z;
  (this_ptr->cached_voxel_coords).y = iVar1;
  (this_ptr->cached_voxel_coords).x = iVar1;
  core_path_cpp_CPathMap_reset_FUN_00513eb0(this_ptr);
  if (199 < g_INT_01e4fed8) {
    g_CHAR_PTR_01d046a0 = "..\\core\\path.cpp";
    g_INT_01d046a4 = 0x123;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Too many pathmaps!");
  }
  g_CPathMap_PTR_ARRAY_01e4fedc[g_INT_01e4fed8] = this_ptr;
  g_INT_01e4fed8 = g_INT_01e4fed8 + 1;
  return this_ptr;
}

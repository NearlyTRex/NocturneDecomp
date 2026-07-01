// Name: core_path.cpp_CPathMap_ctor_FUN_00546450
// Address: 00546450
// Address Range: [[00546450, 005464c9]]
// Convention: __cdecl
// Signature: CPathMap * __cdecl core_path_cpp_CPathMap_ctor_FUN_00546450(CPathMap *this_ptr)

#include "nocturne.h"

CPathMap * __cdecl core_path_cpp_CPathMap_ctor_FUN_00546450(CPathMap *this_ptr)

{
  int iVar1;
  
  (this_ptr->cached_voxel_coords).z = 0x7fffffff;
  iVar1 = (this_ptr->cached_voxel_coords).z;
  (this_ptr->cached_voxel_coords).y = iVar1;
  (this_ptr->cached_voxel_coords).x = iVar1;
  core_path_cpp_CPathMap_reset_FUN_00548510(this_ptr);
  if (199 < g_PathMapCount) {
    g_CurrentFilename = "..\\core\\path.cpp";
    g_CurrentLineNumber = 291;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many pathmaps!");
  }
  g_PathMapList[g_PathMapCount] = this_ptr;
  g_PathMapCount = g_PathMapCount + 1;
  return this_ptr;
}

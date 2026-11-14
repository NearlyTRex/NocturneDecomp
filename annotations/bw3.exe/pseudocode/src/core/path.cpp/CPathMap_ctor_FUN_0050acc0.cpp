// Name: core_path.cpp_CPathMap_ctor_FUN_0050acc0
// Address: 0050acc0
// Address Range: [[0050acc0, 0050ad39]]
// Convention: __cdecl
// Signature: CPathMap * __cdecl core_path_cpp_CPathMap_ctor_FUN_0050acc0(CPathMap *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CPathMap * __cdecl core_path_cpp_CPathMap_ctor_FUN_0050acc0(CPathMap *this_ptr)

{
  int iVar1;
  
  (this_ptr->cached_voxel_coords).z = 0x7fffffff;
  iVar1 = (this_ptr->cached_voxel_coords).z;
  (this_ptr->cached_voxel_coords).y = iVar1;
  (this_ptr->cached_voxel_coords).x = iVar1;
  core_path_cpp_CPathMap_reset_FUN_0050cee0(this_ptr);
  if (199 < _DAT_01ec1518) {
    _DAT_01d71de0 = "..\\core\\path.cpp";
    _DAT_01d71de4 = 0x123;
    core_main_c_FUN_004e4330("Too many pathmaps!");
  }
  *(CPathMap **)(_DAT_01ec1518 * 4 + 0x1ec151c) = this_ptr;
  _DAT_01ec1518 = _DAT_01ec1518 + 1;
  return this_ptr;
}

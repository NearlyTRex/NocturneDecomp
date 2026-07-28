// Name: core_path.cpp_CPathMap_ctor_FUN_004efd50
// Address: 004efd50
// Address Range: [[004efd50, 004efdc9]]
// Convention: __cdecl
// Signature: CPathMap * __cdecl core_path_cpp_CPathMap_ctor_FUN_004efd50(CPathMap *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CPathMap * __cdecl core_path_cpp_CPathMap_ctor_FUN_004efd50(CPathMap *this_ptr)

{
  int iVar1;
  
  (this_ptr->cached_voxel_coords).z = 0x7fffffff;
  iVar1 = (this_ptr->cached_voxel_coords).z;
  (this_ptr->cached_voxel_coords).y = iVar1;
  (this_ptr->cached_voxel_coords).x = iVar1;
  core_path_cpp_CPathMap_reset_FUN_004f1e10(this_ptr);
  if (199 < _DAT_01e312f8) {
    PTR_01cc4800 = "..\\core\\path.cpp";
    INT_01cc4804 = 0x123;
    core_main_c_FUN_004c8440("Too many pathmaps!");
  }
  *(CPathMap **)(_DAT_01e312f8 * 4 + 0x1e312fc) = this_ptr;
  _DAT_01e312f8 = _DAT_01e312f8 + 1;
  return this_ptr;
}

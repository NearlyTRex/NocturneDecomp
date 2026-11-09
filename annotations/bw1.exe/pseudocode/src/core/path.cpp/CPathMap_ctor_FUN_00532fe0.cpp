// Name: core_path.cpp_CPathMap_ctor_FUN_00532fe0
// Address: 00532fe0
// Address Range: [[00532fe0, 00533059]]
// Convention: __cdecl
// Signature: CPathMap * __cdecl core_path_cpp_CPathMap_ctor_FUN_00532fe0(CPathMap *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CPathMap * __cdecl core_path_cpp_CPathMap_ctor_FUN_00532fe0(CPathMap *this_ptr)

{
  *(uint *)&this_ptr->field_0x138b8 = 0x7fffffff;
  *(uint *)&this_ptr->field_0x138b4 = *(uint *)&this_ptr->field_0x138b8;
  *(uint *)&this_ptr->field_0x138b0 = *(uint *)&this_ptr->field_0x138b8;
  core_path_cpp_CPathMap_reset_FUN_00535200(this_ptr);
  if (199 < _DAT_01e6be48) {
    _DAT_01d1d400 = "..\\core\\path.cpp";
    _DAT_01d1d404 = 0x123;
    core_main_c_FUN_005030e0("Too many pathmaps!");
  }
  *(CPathMap **)(_DAT_01e6be48 * 4 + 0x1e6be4c) = this_ptr;
  _DAT_01e6be48 = _DAT_01e6be48 + 1;
  return this_ptr;
}

// Name: core_path.cpp_CPathMap_ctor_FUN_00511c90
// Address: 00511c90
// Address Range: [[00511c90, 00511d09]]
// Convention: __cdecl
// Signature: CPathMap * __cdecl core_path_cpp_CPathMap_ctor_FUN_00511c90(CPathMap *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CPathMap * __cdecl core_path_cpp_CPathMap_ctor_FUN_00511c90(CPathMap *this_ptr)

{
  *(uint *)&this_ptr->field_0x138b8 = 0x7fffffff;
  *(uint *)&this_ptr->field_0x138b4 = *(uint *)&this_ptr->field_0x138b8;
  *(uint *)&this_ptr->field_0x138b0 = *(uint *)&this_ptr->field_0x138b8;
  core_path_cpp_CPathMap_reset_FUN_00513eb0(this_ptr);
  if (199 < _DAT_01e4fed8) {
    _DAT_01d046a0 = "..\\core\\path.cpp";
    _DAT_01d046a4 = 0x123;
    core_main_c_FUN_004e4500("Too many pathmaps!");
  }
  *(CPathMap **)(_DAT_01e4fed8 * 4 + 0x1e4fedc) = this_ptr;
  _DAT_01e4fed8 = _DAT_01e4fed8 + 1;
  return this_ptr;
}

// Name: core_path.cpp_CPathMap_ctor_FUN_004efd50
// Address: 004efd50
// Address Range: [[004efd50, 004efdc9]]
// Convention: __cdecl
// Signature: int __cdecl core_path_cpp_CPathMap_ctor_FUN_004efd50(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_path_cpp_CPathMap_ctor_FUN_004efd50(int param_1)

{
  *(uint *)(param_1 + 0x138b8) = 0x7fffffff;
  *(uint *)(param_1 + 0x138b4) = *(uint *)(param_1 + 0x138b8);
  *(uint *)(param_1 + 0x138b0) = *(uint *)(param_1 + 0x138b8);
  core_path_cpp_CPathMap_reset_FUN_004f1e10(param_1);
  if (199 < _DAT_01e312f8) {
    PTR_01cc4800 = "..\\core\\path.cpp";
    INT_01cc4804 = 0x123;
    core_main_c_FUN_004c8440("Too many pathmaps!");
  }
  *(int *)(_DAT_01e312f8 * 4 + 0x1e312fc) = param_1;
  _DAT_01e312f8 = _DAT_01e312f8 + 1;
  return param_1;
}

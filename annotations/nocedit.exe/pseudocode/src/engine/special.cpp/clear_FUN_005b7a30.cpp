// Name: engine_special.cpp_clear_FUN_005b7a30
// Address: 005b7a30
// Address Range: [[005b7a30, 005b7a42]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_clear_FUN_005b7a30(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_clear_FUN_005b7a30(void)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_clear)();
  return iVar1;
}

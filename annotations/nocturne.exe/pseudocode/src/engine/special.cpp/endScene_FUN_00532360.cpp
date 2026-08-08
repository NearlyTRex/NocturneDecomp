// Name: engine_special.cpp_endScene_FUN_00532360
// Address: 00532360
// Address Range: [[00532360, 00532372]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_endScene_FUN_00532360(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_endScene_FUN_00532360(void)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_endScene)();
  return iVar1;
}

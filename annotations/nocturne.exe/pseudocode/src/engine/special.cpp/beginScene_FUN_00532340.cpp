// Name: engine_special.cpp_beginScene_FUN_00532340
// Address: 00532340
// Address Range: [[00532340, 00532352]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_beginScene_FUN_00532340(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_beginScene_FUN_00532340(void)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_beginScene)();
  return iVar1;
}

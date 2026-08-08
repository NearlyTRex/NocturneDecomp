// Name: engine_special.cpp_sync_FUN_00532b30
// Address: 00532b30
// Address Range: [[00532b30, 00532b42]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_sync_FUN_00532b30(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_sync_FUN_00532b30(void)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_sync)();
  return iVar1;
}

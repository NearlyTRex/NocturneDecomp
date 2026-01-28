// Name: wincore_windll.cpp_sync_FUN_005b7bc0
// Address: 005b7bc0
// Address Range: [[005b7bc0, 005b7bd2]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_sync_FUN_005b7bc0(void)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_sync_FUN_005b7bc0(void)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_sync)();
  return iVar1;
}

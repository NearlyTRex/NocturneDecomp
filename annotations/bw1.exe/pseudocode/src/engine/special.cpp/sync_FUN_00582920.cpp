// Name: engine_special.cpp_sync_FUN_00582920
// Address: 00582920
// Address Range: [[00582920, 00582932]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_sync_FUN_00582920(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_sync_FUN_00582920(void)

{
  int iVar1;
  
  if (g_INT_01c50948 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_APIDLL_sync)();
  return iVar1;
}

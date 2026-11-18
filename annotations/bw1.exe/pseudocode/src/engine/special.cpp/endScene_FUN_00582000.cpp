// Name: engine_special.cpp_endScene_FUN_00582000
// Address: 00582000
// Address Range: [[00582000, 00582012]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_endScene_FUN_00582000(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_endScene_FUN_00582000(void)

{
  int iVar1;
  
  if (g_INT_01c50948 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_02c833a4)();
  return iVar1;
}

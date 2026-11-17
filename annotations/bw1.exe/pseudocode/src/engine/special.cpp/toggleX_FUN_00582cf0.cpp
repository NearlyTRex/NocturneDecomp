// Name: engine_special.cpp_toggleX_FUN_00582cf0
// Address: 00582cf0
// Address Range: [[00582cf0, 00582d02]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_toggleX_FUN_00582cf0(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_toggleX_FUN_00582cf0(void)

{
  int iVar1;
  
  if (g_PTR_02c83440 == (byte *)0x0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_02c83440)();
  return iVar1;
}

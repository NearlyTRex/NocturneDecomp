// Name: engine_special.cpp_restoreVideoMode_FUN_0055f8c0
// Address: 0055f8c0
// Address Range: [[0055f8c0, 0055f8e7]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_restoreVideoMode_FUN_0055f8c0(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_restoreVideoMode_FUN_0055f8c0(void)

{
  int iVar1;
  
  if ((g_INT_01c37788 != 0) && (g_INT_01c37788 = 0, g_PTR_0264bbcc != (byte *)0x0)) {
    iVar1 = (*(code *)g_PTR_0264bbcc)();
    return iVar1;
  }
  return 0;
}

// Name: engine_special.cpp_endScene_FUN_005658d0
// Address: 005658d0
// Address Range: [[005658d0, 005658e2]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_endScene_FUN_005658d0(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_endScene_FUN_005658d0(void)

{
  int iVar1;
  
  if (g_INT_01c6cee8 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_02cf6000)();
  return iVar1;
}

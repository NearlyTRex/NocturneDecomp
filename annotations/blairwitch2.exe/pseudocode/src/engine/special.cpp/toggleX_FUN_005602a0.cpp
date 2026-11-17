// Name: engine_special.cpp_toggleX_FUN_005602a0
// Address: 005602a0
// Address Range: [[005602a0, 005602b2]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_toggleX_FUN_005602a0(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_toggleX_FUN_005602a0(void)

{
  int iVar1;
  
  if (g_PTR_0264bc70 == (byte *)0x0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_0264bc70)();
  return iVar1;
}

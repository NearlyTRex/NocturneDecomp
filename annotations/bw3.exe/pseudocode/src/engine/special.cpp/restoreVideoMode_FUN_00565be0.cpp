// Name: engine_special.cpp_restoreVideoMode_FUN_00565be0
// Address: 00565be0
// Address Range: [[00565be0, 00565c07]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_restoreVideoMode_FUN_00565be0(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_restoreVideoMode_FUN_00565be0(void)

{
  int iVar1;
  
  if ((g_INT_01c6cee8 != 0) && (g_INT_01c6cee8 = 0, g_PTR_02cf5ff8 != (byte *)0x0)) {
    iVar1 = (*(code *)g_PTR_02cf5ff8)();
    return iVar1;
  }
  return 0;
}

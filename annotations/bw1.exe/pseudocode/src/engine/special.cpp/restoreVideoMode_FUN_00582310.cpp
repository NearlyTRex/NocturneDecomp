// Name: engine_special.cpp_restoreVideoMode_FUN_00582310
// Address: 00582310
// Address Range: [[00582310, 00582337]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_restoreVideoMode_FUN_00582310(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_restoreVideoMode_FUN_00582310(void)

{
  int iVar1;
  
  if ((g_INT_01c50948 != 0) && (g_INT_01c50948 = 0, g_APIDLL_restoreVideoMode != (byte *)0x0))
  {
    iVar1 = (*(code *)g_APIDLL_restoreVideoMode)();
    return iVar1;
  }
  return 0;
}

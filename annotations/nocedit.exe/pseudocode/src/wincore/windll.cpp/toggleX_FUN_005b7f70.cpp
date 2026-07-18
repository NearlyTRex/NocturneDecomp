// Name: wincore_windll.cpp_toggleX_FUN_005b7f70
// Address: 005b7f70
// Address Range: [[005b7f70, 005b7f82]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_toggleX_FUN_005b7f70(void)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_toggleX_FUN_005b7f70(void)

{
  int iVar1;
  
  if (g_APIDLL_toggleX == (APIDLL_toggleX *)0x0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_toggleX)();
  return iVar1;
}

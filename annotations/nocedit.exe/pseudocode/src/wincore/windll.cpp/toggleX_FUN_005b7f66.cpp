// Name: wincore_windll.cpp_toggleX_FUN_005b7f66
// Address: 005b7f66
// Address Range: [[005b7f66, 005b7f82]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_toggleX_FUN_005b7f66(void)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_toggleX_FUN_005b7f66(void)

{
  int iVar1;
  
  if (g_APIDLL_toggleX == (APIDLL_toggleX *)0x0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_toggleX)();
  return iVar1;
}

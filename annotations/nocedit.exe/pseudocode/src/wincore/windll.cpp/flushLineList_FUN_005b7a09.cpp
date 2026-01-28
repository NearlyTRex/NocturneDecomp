// Name: wincore_windll.cpp_flushLineList_FUN_005b7a09
// Address: 005b7a09
// Address Range: [[005b7a09, 005b7a22]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_flushLineList_FUN_005b7a09(void)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_flushLineList_FUN_005b7a09(void)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_flushLineList)();
  return iVar1;
}

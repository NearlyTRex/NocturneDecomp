// Name: engine_special.cpp_lockFrame_FUN_00565820
// Address: 00565820
// Address Range: [[00565820, 00565868]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_lockFrame_FUN_00565820(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_lockFrame_FUN_00565820(void)

{
  int iVar1;
  
  if (g_INT_01c6cee8 == 0) {
    g_INT_02cf612c = g_INT_01c6cee8;
  }
  else {
    iVar1 = (*(code *)g_APIDLL_lockFrame)();
    if (iVar1 != 0) {
      g_INT_02cf6128 = g_INT_005fba20;
      g_INT_02cf612c = 1;
      g_INT_01c6cee8 = 0;
      g_INT_005fba20 = g_INT_02cf6120;
      return 1;
    }
  }
  return 0;
}

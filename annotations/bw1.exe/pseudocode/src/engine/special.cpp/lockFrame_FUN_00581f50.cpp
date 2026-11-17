// Name: engine_special.cpp_lockFrame_FUN_00581f50
// Address: 00581f50
// Address Range: [[00581f50, 00581f98]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_lockFrame_FUN_00581f50(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_lockFrame_FUN_00581f50(void)

{
  int iVar1;
  
  if (g_INT_01c50948 == 0) {
    g_INT_02c834d0 = g_INT_01c50948;
  }
  else {
    iVar1 = (*(code *)g_PTR_02c833a8)();
    if (iVar1 != 0) {
      g_INT_02c834cc = g_INT_0061b4a0;
      g_INT_02c834d0 = 1;
      g_INT_01c50948 = 0;
      g_INT_0061b4a0 = g_INT_02c834c4;
      return 1;
    }
  }
  return 0;
}

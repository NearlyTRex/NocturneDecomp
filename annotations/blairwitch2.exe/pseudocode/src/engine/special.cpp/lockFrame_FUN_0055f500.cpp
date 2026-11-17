// Name: engine_special.cpp_lockFrame_FUN_0055f500
// Address: 0055f500
// Address Range: [[0055f500, 0055f548]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_lockFrame_FUN_0055f500(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_lockFrame_FUN_0055f500(void)

{
  int iVar1;
  
  if (g_INT_01c37788 == 0) {
    g_INT_0264bd00 = g_INT_01c37788;
  }
  else {
    iVar1 = (*(code *)g_PTR_0264bbd8)();
    if (iVar1 != 0) {
      g_INT_0264bcfc = g_INT_006141c0;
      g_INT_0264bd00 = 1;
      g_INT_01c37788 = 0;
      g_INT_006141c0 = g_INT_0264bcf4;
      return 1;
    }
  }
  return 0;
}

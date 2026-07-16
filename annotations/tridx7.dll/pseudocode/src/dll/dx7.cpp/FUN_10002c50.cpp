// Name: dll_dx7.cpp_FUN_10002c50
// Address: 10002c50
// Address Range: [[10002c50, 10002ca2]]
// Convention: unknown
// Signature: undefined4 dll_dx7_cpp_FUN_10002c50(void)

#include "nocturne.h"

uint dll_dx7_cpp_FUN_10002c50(void)

{
  int iVar1;
  void **ppvVar2;
  void **ppvVar3;
  
  if (DAT_100141f4 == 0) {
    return 1;
  }
  if (0 < g_ScreenHeight) {
    ppvVar2 = g_ScanlinePointers;
    ppvVar3 = g_ScanlinePtrBase;
    for (iVar1 = g_ScreenHeight; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppvVar3 = *ppvVar2;
      ppvVar2 = ppvVar2 + 1;
      ppvVar3 = ppvVar3 + 1;
    }
  }
  iVar1 = dll_dx7_cpp_FUN_10002cb0(g_BackBufferSurface);
  if (iVar1 == 0) {
    return 0;
  }
  DAT_100141f4 = 0;
  return 1;
}

// Name: engine_mini3d.cpp_getTextureHandle_FUN_004eda80
// Address: 004eda80
// Address Range: [[004eda80, 004eda9b]]
// Convention: __cdecl
// Signature: int __cdecl engine_mini3d_cpp_getTextureHandle_FUN_004eda80(void)

#include "nocturne.h"

int __cdecl engine_mini3d_cpp_getTextureHandle_FUN_004eda80(void)

{
  int iVar1;
  
  if ((g_PTR_02cf60e0 != (byte *)0x0) && (g_INT_01c6cee8 != 0)) {
    iVar1 = (*(code *)g_PTR_02cf60e0)();
    return iVar1;
  }
  return 0;
}

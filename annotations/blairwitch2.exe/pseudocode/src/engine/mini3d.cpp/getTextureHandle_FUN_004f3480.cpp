// Name: engine_mini3d.cpp_getTextureHandle_FUN_004f3480
// Address: 004f3480
// Address Range: [[004f3480, 004f349b]]
// Convention: __cdecl
// Signature: int __cdecl engine_mini3d_cpp_getTextureHandle_FUN_004f3480(void)

#include "nocturne.h"

int __cdecl engine_mini3d_cpp_getTextureHandle_FUN_004f3480(void)

{
  int iVar1;
  
  if ((g_APIDLL_setLightVector != (byte *)0x0) && (g_INT_01c37788 != 0)) {
    iVar1 = (*(code *)g_APIDLL_setLightVector)();
    return iVar1;
  }
  return 0;
}

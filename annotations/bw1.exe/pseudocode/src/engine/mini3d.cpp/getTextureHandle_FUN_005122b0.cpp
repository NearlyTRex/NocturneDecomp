// Name: engine_mini3d.cpp_getTextureHandle_FUN_005122b0
// Address: 005122b0
// Address Range: [[005122b0, 005122cb]]
// Convention: __cdecl
// Signature: int __cdecl engine_mini3d_cpp_getTextureHandle_FUN_005122b0(void)

#include "nocturne.h"

int __cdecl engine_mini3d_cpp_getTextureHandle_FUN_005122b0(void)

{
  int iVar1;
  
  if ((g_PTR_02c83484 != (byte *)0x0) && (g_INT_01c50948 != 0)) {
    iVar1 = (*(code *)g_PTR_02c83484)();
    return iVar1;
  }
  return 0;
}

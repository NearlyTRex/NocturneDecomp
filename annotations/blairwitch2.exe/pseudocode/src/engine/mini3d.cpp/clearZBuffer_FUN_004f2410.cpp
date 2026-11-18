// Name: engine_mini3d.cpp_clearZBuffer_FUN_004f2410
// Address: 004f2410
// Address Range: [[004f2410, 004f2424]]
// Convention: __cdecl
// Signature: int __cdecl engine_mini3d_cpp_clearZBuffer_FUN_004f2410(void)

#include "nocturne.h"

int __cdecl engine_mini3d_cpp_clearZBuffer_FUN_004f2410(void)

{
  int extraout_EAX;
  int iVar1;
  
  if (g_INT_01c37788 == 0) {
    engine_special_cpp_clearZBufferNative_FUN_0055b254();
    return extraout_EAX;
  }
  if (g_INT_01c37788 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_0264bc24)();
  return iVar1;
}

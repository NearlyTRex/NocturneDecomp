// Name: core_dcamera.cpp_shadeScreenPixel_FUN_004425d0
// Address: 004425d0
// Address Range: [[004425d0, 004425ed]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_shadeScreenPixel_FUN_004425d0(uint unused,int x,int y)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_shadeScreenPixel_FUN_004425d0(uint unused,int x,int y)

{
  *(byte *)((int)g_ScreenBufferArray[y] + x) =
       g_LightTable[4][*(byte *)((int)g_ScreenBufferArray[y] + x)];
  return;
}

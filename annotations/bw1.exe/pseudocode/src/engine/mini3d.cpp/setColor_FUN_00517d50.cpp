// Name: engine_mini3d.cpp_setColor_FUN_00517d50
// Address: 00517d50
// Address Range: [[00517d50, 00517dd4]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setColor_FUN_00517d50(uint rgb)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setColor_FUN_00517d50(uint rgb)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  
  fVar3 = (float)(rgb >> 0x10 & 0xff) * 0.003921569f;
  fVar1 = (float)(rgb >> 8 & 0xff) * 0.003921569f;
  fVar2 = (float)(rgb & 0xff) * 0.003921569f;
  dVar4 = round((double)(g_FLOAT_01d224c0 * 255.0f));
  g_FLOAT_01d25f38 = fVar3;
  g_FLOAT_01d25f3c = fVar1;
  g_FLOAT_01d25f40 = fVar2;
  g_INT_01d25f44 = rgb & 0xffffff | (int)ROUND(dVar4) << 0x18;
  return;
}

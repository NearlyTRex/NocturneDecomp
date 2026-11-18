// Name: engine_mini3d.cpp_setColor_FUN_004f3520
// Address: 004f3520
// Address Range: [[004f3520, 004f35a4]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setColor_FUN_004f3520(uint rgb)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setColor_FUN_004f3520(uint rgb)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  
  fVar3 = (float)(rgb >> 0x10 & 0xff) * 0.003921569f;
  fVar1 = (float)(rgb >> 8 & 0xff) * 0.003921569f;
  fVar2 = (float)(rgb & 0xff) * 0.003921569f;
  dVar4 = round((double)(g_FLOAT_01d76c40 * 255.0f));
  g_FLOAT_01d7a6b8 = fVar3;
  g_FLOAT_01d7a6bc = fVar1;
  g_FLOAT_01d7a6c0 = fVar2;
  g_INT_01d7a6c4 = rgb & 0xffffff | (int)ROUND(dVar4) << 0x18;
  return;
}

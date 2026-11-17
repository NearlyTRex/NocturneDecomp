// Name: engine_mini3d.cpp_setColor4f_FUN_004f8d40
// Address: 004f8d40
// Address Range: [[004f8d40, 004f8e1c]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setColor4f_FUN_004f8d40(float alpha,float red,float green,float blue)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setColor4f_FUN_004f8d40(float alpha,float red,float green,float blue)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  g_FLOAT_01d0d2d8 = red;
  g_FLOAT_01d0d2dc = green;
  g_FLOAT_01d0d2e0 = blue;
  if (g_FLOAT_01d09860 != alpha) {
    g_FLOAT_01d09860 = alpha;
    if ((g_PTR_0264bc78 != (byte *)0x0) && (g_INT_01c37788 != 0)) {
      (*(code *)g_PTR_0264bc78)(g_FLOAT_01d098e4,g_INT_01d098e8,g_INT_01d098ec,alpha);
    }
  }
  fVar1 = green * 255.0f;
  fVar2 = blue * 255.0f;
  fVar3 = alpha * 255.0f;
  dVar4 = round((double)(red * 255.0f));
  dVar5 = round((double)fVar1);
  dVar6 = round((double)fVar3);
  dVar7 = round((double)fVar2);
  g_INT_01d0d2e4 =
       (int)ROUND(dVar7) |
       (int)ROUND(dVar5) << 8 | (int)ROUND(dVar4) << 0x10 | (int)ROUND(dVar6) << 0x18;
  return;
}

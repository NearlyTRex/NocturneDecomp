// Name: engine_mini3d.cpp_setColor4f_FUN_004f3440
// Address: 004f3440
// Address Range: [[004f3440, 004f351c]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setColor4f_FUN_004f3440(float alpha,float red,float green,float blue)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setColor4f_FUN_004f3440(float alpha,float red,float green,float blue)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  g_FLOAT_01d7a6b8 = red;
  g_FLOAT_01d7a6bc = green;
  g_FLOAT_01d7a6c0 = blue;
  if (g_FLOAT_01d76c40 != alpha) {
    g_FLOAT_01d76c40 = alpha;
    if ((g_PTR_02cf60a4 != (byte *)0x0) && (g_INT_01c6cee8 != 0)) {
      (*(code *)g_PTR_02cf60a4)(g_FLOAT_01d76cc8,g_INT_01d76ccc,g_INT_01d76cd0,alpha);
    }
  }
  fVar1 = green * 255.0f;
  fVar2 = blue * 255.0f;
  fVar3 = alpha * 255.0f;
  dVar4 = round((double)(red * 255.0f));
  dVar5 = round((double)fVar1);
  dVar6 = round((double)fVar3);
  dVar7 = round((double)fVar2);
  g_INT_01d7a6c4 =
       (int)ROUND(dVar7) |
       (int)ROUND(dVar5) << 8 | (int)ROUND(dVar4) << 0x10 | (int)ROUND(dVar6) << 0x18;
  return;
}

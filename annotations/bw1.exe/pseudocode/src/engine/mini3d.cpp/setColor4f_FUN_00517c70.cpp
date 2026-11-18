// Name: engine_mini3d.cpp_setColor4f_FUN_00517c70
// Address: 00517c70
// Address Range: [[00517c70, 00517d4c]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setColor4f_FUN_00517c70(float alpha,float red,float green,float blue)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setColor4f_FUN_00517c70(float alpha,float red,float green,float blue)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  g_FLOAT_01d25f38 = red;
  g_FLOAT_01d25f3c = green;
  g_FLOAT_01d25f40 = blue;
  if (g_FLOAT_01d224c0 != alpha) {
    g_FLOAT_01d224c0 = alpha;
    if ((g_PTR_02c83448 != (byte *)0x0) && (g_INT_01c50948 != 0)) {
      (*(code *)g_PTR_02c83448)(g_FLOAT_01d22548,g_INT_01d2254c,g_INT_01d22550,alpha);
    }
  }
  fVar1 = green * 255.0f;
  fVar2 = blue * 255.0f;
  fVar3 = alpha * 255.0f;
  dVar4 = round((double)(red * 255.0f));
  dVar5 = round((double)fVar1);
  dVar6 = round((double)fVar3);
  dVar7 = round((double)fVar2);
  g_INT_01d25f44 =
       (int)ROUND(dVar7) |
       (int)ROUND(dVar5) << 8 | (int)ROUND(dVar4) << 0x10 | (int)ROUND(dVar6) << 0x18;
  return;
}

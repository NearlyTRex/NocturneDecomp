// Name: engine_mini3d.cpp_setColor3f_FUN_00517bd0
// Address: 00517bd0
// Address Range: [[00517bd0, 00517c62]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setColor3f_FUN_00517bd0(float red,float green,float blue)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setColor3f_FUN_00517bd0(float red,float green,float blue)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float unaff_retaddr;
  uint uStack_4;
  
  fVar1 = green * 255.0f;
  fVar2 = blue * 255.0f;
  fVar3 = g_FLOAT_01d224c0 * 255.0f;
  g_FLOAT_01d25f38 = red;
  dVar4 = round((double)(red * 255.0f));
  dVar5 = round((double)fVar1);
  dVar6 = round((double)fVar3);
  g_FLOAT_01d25f3c = uStack_4;
  g_FLOAT_01d25f40 = unaff_retaddr;
  dVar7 = round((double)fVar2);
  g_INT_01d25f44 =
       (int)ROUND(dVar7) |
       (int)ROUND(dVar5) << 8 | (int)ROUND(dVar6) << 0x18 | (int)ROUND(dVar4) << 0x10;
  return;
}

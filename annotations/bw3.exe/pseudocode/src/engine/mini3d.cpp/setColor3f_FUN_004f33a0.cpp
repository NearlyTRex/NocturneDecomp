// Name: engine_mini3d.cpp_setColor3f_FUN_004f33a0
// Address: 004f33a0
// Address Range: [[004f33a0, 004f3432]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setColor3f_FUN_004f33a0(float red,float green,float blue)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setColor3f_FUN_004f33a0(float red,float green,float blue)

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
  fVar3 = g_FLOAT_01d76c40 * 255.0f;
  g_FLOAT_01d7a6b8 = red;
  dVar4 = round((double)(red * 255.0f));
  dVar5 = round((double)fVar1);
  dVar6 = round((double)fVar3);
  g_FLOAT_01d7a6bc = uStack_4;
  g_FLOAT_01d7a6c0 = unaff_retaddr;
  dVar7 = round((double)fVar2);
  g_INT_01d7a6c4 =
       (int)ROUND(dVar7) |
       (int)ROUND(dVar5) << 8 | (int)ROUND(dVar6) << 0x18 | (int)ROUND(dVar4) << 0x10;
  return;
}

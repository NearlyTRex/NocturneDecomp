// Name: engine_mini3d.cpp_setColor3f_FUN_004f33a0
// Address: 004f33a0
// Address Range: [[004f33a0, 004f3432]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setColor3f_FUN_004f33a0(float red,float green,float blue)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setColor3f_FUN_004f33a0(float red,float green,float blue)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint unaff_retaddr;
  uint uStack_4;
  
  fVar1 = green * _DAT_005c832d;
  fVar2 = blue * _DAT_005c832d;
  fVar3 = _DAT_01d76c40 * _DAT_005c832d;
  _DAT_01d7a6b8 = red;
  dVar4 = round((double)(red * _DAT_005c832d));
  dVar5 = round((double)fVar1);
  dVar6 = round((double)fVar3);
  _DAT_01d7a6bc = uStack_4;
  _DAT_01d7a6c0 = unaff_retaddr;
  dVar7 = round((double)fVar2);
  _DAT_01d7a6c4 =
       (int)ROUND(dVar7) |
       (int)ROUND(dVar5) << 8 | (int)ROUND(dVar6) << 0x18 | (int)ROUND(dVar4) << 0x10;
  return;
}

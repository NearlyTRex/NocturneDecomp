// Name: engine_mini3d.cpp_setColor3f_FUN_004f8ca0
// Address: 004f8ca0
// Address Range: [[004f8ca0, 004f8d32]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setColor3f_FUN_004f8ca0(float red,float green,float blue)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setColor3f_FUN_004f8ca0(float red,float green,float blue)

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
  
  fVar1 = green * _DAT_005ddfe4;
  fVar2 = blue * _DAT_005ddfe4;
  fVar3 = _DAT_01d09860 * _DAT_005ddfe4;
  _DAT_01d0d2d8 = red;
  dVar4 = round((double)(red * _DAT_005ddfe4));
  dVar5 = round((double)fVar1);
  dVar6 = round((double)fVar3);
  _DAT_01d0d2dc = uStack_4;
  _DAT_01d0d2e0 = unaff_retaddr;
  dVar7 = round((double)fVar2);
  _DAT_01d0d2e4 =
       (int)ROUND(dVar7) |
       (int)ROUND(dVar5) << 8 | (int)ROUND(dVar6) << 0x18 | (int)ROUND(dVar4) << 0x10;
  return;
}

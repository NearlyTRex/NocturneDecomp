// Name: engine_mini3d.cpp_setColor4f_FUN_004f3440
// Address: 004f3440
// Address Range: [[004f3440, 004f351c]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setColor4f_FUN_004f3440(float alpha,float red,float green,float blue)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setColor4f_FUN_004f3440(float alpha,float red,float green,float blue)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _DAT_01d7a6b8 = red;
  _DAT_01d7a6bc = green;
  _DAT_01d7a6c0 = blue;
  if (_DAT_01d76c40 != alpha) {
    _DAT_01d76c40 = alpha;
    if ((_DAT_02cf60a4 != (code *)0x0) && (_DAT_01c6cee8 != 0)) {
      (*_DAT_02cf60a4)(_DAT_01d76cc8,_DAT_01d76ccc,_DAT_01d76cd0,alpha);
    }
  }
  fVar1 = green * _DAT_005c8331;
  fVar2 = blue * _DAT_005c8331;
  fVar3 = alpha * _DAT_005c8331;
  dVar4 = round((double)(red * _DAT_005c8331));
  dVar5 = round((double)fVar1);
  dVar6 = round((double)fVar3);
  dVar7 = round((double)fVar2);
  _DAT_01d7a6c4 =
       (int)ROUND(dVar7) |
       (int)ROUND(dVar5) << 8 | (int)ROUND(dVar4) << 0x10 | (int)ROUND(dVar6) << 0x18;
  return;
}

// Name: engine_mini3d.cpp_setColor4f_FUN_00517c70
// Address: 00517c70
// Address Range: [[00517c70, 00517d4c]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setColor4f_FUN_00517c70(float alpha,float red,float green,float blue)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setColor4f_FUN_00517c70(float alpha,float red,float green,float blue)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _DAT_01d25f38 = red;
  _DAT_01d25f3c = green;
  _DAT_01d25f40 = blue;
  if (_DAT_01d224c0 != alpha) {
    _DAT_01d224c0 = alpha;
    if ((_DAT_02c83448 != (code *)0x0) && (_DAT_01c50948 != 0)) {
      (*_DAT_02c83448)(_DAT_01d22548,_DAT_01d2254c,_DAT_01d22550,alpha);
    }
  }
  fVar1 = green * _DAT_005e902f;
  fVar2 = blue * _DAT_005e902f;
  fVar3 = alpha * _DAT_005e902f;
  dVar4 = round((double)(red * _DAT_005e902f));
  dVar5 = round((double)fVar1);
  dVar6 = round((double)fVar3);
  dVar7 = round((double)fVar2);
  _DAT_01d25f44 =
       (int)ROUND(dVar7) |
       (int)ROUND(dVar5) << 8 | (int)ROUND(dVar4) << 0x10 | (int)ROUND(dVar6) << 0x18;
  return;
}

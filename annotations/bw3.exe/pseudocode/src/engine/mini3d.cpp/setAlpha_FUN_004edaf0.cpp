// Name: engine_mini3d.cpp_setAlpha_FUN_004edaf0
// Address: 004edaf0
// Address Range: [[004edaf0, 004edb73]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setAlpha_FUN_004edaf0(float alpha)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setAlpha_FUN_004edaf0(float alpha)

{
  float10 fVar1;
  float10 fVar2;
  ulonglong uVar3;
  
  _DAT_01d76c40 = alpha;
  if ((_DAT_02cf60a4 != (code *)0x0) && (_DAT_01c6cee8 != 0)) {
    (*_DAT_02cf60a4)(_DAT_01d76cc8,_DAT_01d76ccc,_DAT_01d76cd0,alpha);
  }
  fVar1 = (float10)alpha * (float10)_DAT_005c7f85;
  fVar2 = (float10)alpha * (float10)_DAT_005c7f8d;
  round();
  uVar3 = round((int)ROUND(fVar1));
  DAT_005fba38 = (int)ROUND(fVar2);
  _DAT_01d7a6c4 = (uint)((ulonglong)uVar3 >> 0x20) | (uint)uVar3;
  return;
}

// Name: engine_mini3d.cpp_setAlpha_FUN_004f3570
// Address: 004f3570
// Address Range: [[004f3570, 004f35f3]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setAlpha_FUN_004f3570(float alpha)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setAlpha_FUN_004f3570(float alpha)

{
  float10 fVar1;
  float10 fVar2;
  ulonglong uVar3;
  
  _DAT_01d09860 = alpha;
  if ((_DAT_0264bc78 != (code *)0x0) && (_DAT_01c37788 != 0)) {
    (*_DAT_0264bc78)(_DAT_01d098e4,_DAT_01d098e8,_DAT_01d098ec,alpha);
  }
  fVar1 = (float10)alpha * (float10)_DAT_005ddc3c;
  fVar2 = (float10)alpha * (float10)_DAT_005ddc44;
  round();
  uVar3 = round((int)ROUND(fVar1));
  DAT_006141d8 = (int)ROUND(fVar2);
  _DAT_01d0d2e4 = (uint)((ulonglong)uVar3 >> 0x20) | (uint)uVar3;
  return;
}

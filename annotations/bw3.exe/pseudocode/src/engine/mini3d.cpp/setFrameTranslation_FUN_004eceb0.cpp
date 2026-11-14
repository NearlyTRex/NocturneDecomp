// Name: engine_mini3d.cpp_setFrameTranslation_FUN_004eceb0
// Address: 004eceb0
// Address Range: [[004eceb0, 004eceeb]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setFrameTranslation_FUN_004eceb0(CVector3f *position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setFrameTranslation_FUN_004eceb0(CVector3f *position)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = _DAT_01d76cfc;
  fVar1 = _DAT_01d76c94;
  *(float *)(_DAT_01d76cfc + 0x24) = _DAT_01d76c90 - position->x;
  fVar2 = _DAT_01d76c98;
  *(float *)(iVar3 + 0x28) = fVar1 - position->y;
  *(float *)(iVar3 + 0x2c) = fVar2 - position->z;
  _DAT_01d7977c = 1;
  return;
}

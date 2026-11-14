// Name: engine_mini3d.cpp_setFrameTranslation2_FUN_005117e0
// Address: 005117e0
// Address Range: [[005117e0, 0051181b]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setFrameTranslation2_FUN_005117e0(CVector3f *position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setFrameTranslation2_FUN_005117e0(CVector3f *position)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = _DAT_01d2257c;
  fVar1 = _DAT_01d22514;
  *(float *)(_DAT_01d2257c + 0x24) = _DAT_01d22510 - position->x;
  fVar2 = _DAT_01d22518;
  *(float *)(iVar3 + 0x28) = fVar1 - position->y;
  *(float *)(iVar3 + 0x2c) = fVar2 - position->z;
  _DAT_01d24ffc = 1;
  return;
}

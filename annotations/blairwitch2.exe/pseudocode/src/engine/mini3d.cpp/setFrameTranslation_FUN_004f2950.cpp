// Name: engine_mini3d.cpp_setFrameTranslation_FUN_004f2950
// Address: 004f2950
// Address Range: [[004f2950, 004f298b]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setFrameTranslation_FUN_004f2950(CVector3f *position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setFrameTranslation_FUN_004f2950(CVector3f *position)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = _DAT_01d09918;
  fVar1 = _DAT_01d098b4;
  *(float *)(_DAT_01d09918 + 0x24) = _DAT_01d098b0 - position->x;
  fVar2 = _DAT_01d098b8;
  *(float *)(iVar3 + 0x28) = fVar1 - position->y;
  *(float *)(iVar3 + 0x2c) = fVar2 - position->z;
  _DAT_01d0c398 = 1;
  return;
}

// Name: engine_mini3d.cpp_setLightVector_FUN_004f4e70
// Address: 004f4e70
// Address Range: [[004f4e70, 004f4ef2]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setLightVector_FUN_004f4e70(CVector3f *direction,float intensity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setLightVector_FUN_004f4e70(CVector3f *direction,float intensity)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  engine_mini3d_cpp_updateTransform_FUN_004f3740();
  iVar2 = _DAT_01d09918;
  fVar1 = intensity /
          SQRT(direction->z * direction->z +
               direction->x * direction->x + direction->y * direction->y);
  *(float *)(_DAT_01d09918 + 0x30) = direction->x * fVar1;
  *(float *)(iVar2 + 0x34) = direction->y * fVar1;
  pcVar3 = _DAT_0264bc7c;
  *(float *)(iVar2 + 0x38) = fVar1 * direction->z;
  if ((pcVar3 != (code *)0x0) && (_DAT_01c37788 != 0)) {
    uStack_14 = *(uint *)(iVar2 + 0x30);
    uStack_10 = *(uint *)(iVar2 + 0x34);
    uStack_c = *(uint *)(iVar2 + 0x38);
    (*_DAT_0264bc7c)(&uStack_14,intensity);
    return;
  }
  return;
}

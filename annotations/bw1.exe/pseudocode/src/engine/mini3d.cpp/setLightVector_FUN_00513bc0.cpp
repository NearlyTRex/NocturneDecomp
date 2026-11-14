// Name: engine_mini3d.cpp_setLightVector_FUN_00513bc0
// Address: 00513bc0
// Address Range: [[00513bc0, 00513c4b]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setLightVector_FUN_00513bc0(CVector3f *direction,float intensity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setLightVector_FUN_00513bc0(CVector3f *direction,float intensity)

{
  int iVar1;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  engine_mini3d_cpp_updateTransform_FUN_005124f0();
  fStack_8 = intensity /
             SQRT(direction->z * direction->z +
                  direction->x * direction->x + direction->y * direction->y);
  if ((_DAT_02c8344c != (code *)0x0) && (_DAT_01c50948 != 0)) {
    fStack_14 = direction->x * fStack_8;
    fStack_10 = direction->y * fStack_8;
    fStack_c = fStack_8 * direction->z;
    (*_DAT_02c8344c)(&fStack_14,intensity);
  }
  iVar1 = _DAT_01d2257c;
  *(float *)(_DAT_01d2257c + 0x30) = direction->x * fStack_8;
  *(float *)(iVar1 + 0x34) = direction->y * fStack_8;
  *(float *)(iVar1 + 0x38) = fStack_8 * direction->z;
  return;
}

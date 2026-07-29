// Name: engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00405e10
// Address: 00405e10
// Address Range: [[00405e10, 00406009]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00405e10(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00405e10(SMRGLHeaderPrimitive *primitive)

{
  int iVar1;
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00404610(&primitive->surface_normal);
  if (iVar2 != 0) {
    if (DAT_006b0278 == 0) {
      if (DAT_006b0274 == 0) {
        if (_DAT_01c03948 == 0) {
          if (DAT_005b7624 == 0x20) {
            _DAT_01c00c7c = engine_special_cpp_FUN_005300ec;
          }
          else {
            _DAT_01c00c7c = engine_special_cpp_FUN_00530322;
          }
        }
        else if (DAT_005b7624 == 0x20) {
          _DAT_01c00c7c = engine_special_cpp_FUN_0052f031;
        }
        else {
          _DAT_01c00c7c = engine_special_cpp_FUN_0052f823;
        }
        _DAT_01c039a0 = 0xd1;
        _DAT_01c039a4 = 3;
        engine_3d_c_calculatePolygonLighting_FUN_00404710(primitive);
      }
      else {
        if (_DAT_01c03948 == 0) {
          if (DAT_005b7624 == 0x20) {
            _DAT_01c00c7c = engine_special_cpp_FUN_005300ec;
          }
          else {
            _DAT_01c00c7c = engine_special_cpp_FUN_00530322;
          }
        }
        else if (DAT_005b7624 == 0x20) {
          _DAT_01c00c7c = engine_special_cpp_FUN_0052f031;
        }
        else {
          _DAT_01c00c7c = engine_special_cpp_FUN_0052f823;
        }
        _DAT_01c039a0 = 0xd0;
        _DAT_01c039a4 = 1;
        engine_light_cpp_calculateLighting_FUN_004c6cc0
                  ((primitive->surface_normal).A.i,(primitive->surface_normal).B.i,
                   (primitive->surface_normal).C.i);
        _DAT_01c00c70 = engine_3d_c_FUN_00404680(DAT_006b0260,_DAT_01c00c74);
      }
    }
    else {
      if (_DAT_01c03948 == 0) {
        if (DAT_005b7624 == 0x20) {
          _DAT_01c00c7c = engine_special_cpp_FUN_005300ec;
        }
        else {
          _DAT_01c00c7c = engine_special_cpp_FUN_00530322;
        }
      }
      else if (DAT_005b7624 == 0x20) {
        _DAT_01c00c7c = engine_special_cpp_FUN_0052f031;
      }
      else {
        _DAT_01c00c7c = engine_special_cpp_FUN_0052f823;
      }
      _DAT_01c039a4 = 0;
      _DAT_01c039a0 = 0;
    }
    iVar2 = 0;
    iVar5 = 0;
    pSVar3 = primitive + 1;
    for (iVar4 = 0; iVar4 < (primitive->base).count * 3; iVar4 = iVar4 + 3) {
      iVar1 = (pSVar3->base).type;
      *(int *)((int)&DAT_006b029c + iVar2) = iVar1;
      (&DAT_005c502c)[iVar1 * 0xc] = (pSVar3->base).count;
      iVar2 = iVar2 + 4;
      iVar5 = iVar5 + 1;
      *(UIntegerFloat *)(&DAT_005c5030 + (pSVar3->base).type * 0x30) = (pSVar3->surface_normal).A;
      pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
    }
    engine_clipper_c_FUN_00432cd0(iVar5,&DAT_006b029c);
  }
  return (SMRGLHeaderExtended *)((int)&primitive[1].base + (primitive->base).count * 0xc);
}

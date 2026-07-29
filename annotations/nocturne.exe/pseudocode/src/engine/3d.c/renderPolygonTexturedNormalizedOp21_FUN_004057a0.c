// Name: engine_3d.c_renderPolygonTexturedNormalizedOp21_FUN_004057a0
// Address: 004057a0
// Address Range: [[004057a0, 00405836]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedNormalizedOp21_FUN_004057a0(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedNormalizedOp21_FUN_004057a0(SMRGLHeaderPrimitive *primitive)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(&primitive->surface_normal);
  if (iVar1 != 0) {
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
    _DAT_01c039a0 = 1;
    _DAT_01c039a4 = 2;
    engine_clipper_c_FUN_00432cd0((primitive->base).count,primitive + 1);
  }
  return (SMRGLHeaderExtended *)(&primitive[1].base.type + (primitive->base).count);
}

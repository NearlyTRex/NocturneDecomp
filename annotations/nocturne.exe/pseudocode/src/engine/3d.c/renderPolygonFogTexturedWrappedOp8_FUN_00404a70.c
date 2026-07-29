// Name: engine_3d.c_renderPolygonFogTexturedWrappedOp8_FUN_00404a70
// Address: 00404a70
// Address Range: [[00404a70, 00404b06]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFogTexturedWrappedOp8_FUN_00404a70(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFogTexturedWrappedOp8_FUN_00404a70(SMRGLHeaderPrimitive *primitive)

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
    _DAT_01c039a0 = 5;
    _DAT_01c039a4 = 4;
    engine_clipper_c_FUN_00432cd0((primitive->base).count,primitive + 1);
  }
  return (SMRGLHeaderExtended *)(&primitive[1].base.type + (primitive->base).count);
}

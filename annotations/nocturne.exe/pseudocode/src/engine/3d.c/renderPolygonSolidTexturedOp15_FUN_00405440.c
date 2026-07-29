// Name: engine_3d.c_renderPolygonSolidTexturedOp15_FUN_00405440
// Address: 00405440
// Address Range: [[00405440, 004054e0]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidTexturedOp15_FUN_00405440(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidTexturedOp15_FUN_00405440(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(&prim->surface_normal);
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
    _DAT_01c039a0 = 3;
    engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
    _DAT_01c039a4 = 0;
    engine_clipper_c_FUN_00432cd0((prim->base).count,prim + 1);
  }
  return (SMRGLHeaderExtended *)(&prim[1].base.type + (prim->base).count);
}

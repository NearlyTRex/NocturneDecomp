// Name: engine_3d.c_renderPolygonSolidTexturedLitOp48_FUN_00407690
// Address: 00407690
// Address Range: [[00407690, 0040773c]]
// Convention: unknown
// Signature: int * engine_3d_c_renderPolygonSolidTexturedLitOp48_FUN_00407690(SMRGLHeaderPrimitive *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * engine_3d_c_renderPolygonSolidTexturedLitOp48_FUN_00407690(SMRGLHeaderPrimitive *param_1)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(&param_1->surface_normal);
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
    _DAT_01c039a0 = 0xc3;
    engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
    _DAT_01c039a4 = 1;
    engine_3d_c_calculatePolygonLighting_FUN_00404710(param_1);
    engine_clipper_c_FUN_00432cd0((param_1->base).count,param_1 + 1);
  }
  return &param_1[1].base.type + (param_1->base).count;
}

// Name: engine_3d.c_renderPolygonBlendedLitOp63_FUN_00408270
// Address: 00408270
// Address Range: [[00408270, 0040834a]]
// Convention: unknown
// Signature: int * engine_3d_c_renderPolygonBlendedLitOp63_FUN_00408270(SMRGLHeaderPrimitive *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * engine_3d_c_renderPolygonBlendedLitOp63_FUN_00408270(SMRGLHeaderPrimitive *param_1)

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
    if (_DAT_01c00c78 == 0) {
      _DAT_01c039a0 = 0x267;
    }
    else {
      _DAT_01c039a0 = 0x67;
    }
    _DAT_01c039a4 = 1;
    engine_3d_c_calculatePolygonLighting_FUN_00404710(param_1);
    if (_DAT_01c00c78 == 0) {
      engine_clipper_c_clipPolygonToViewport_FUN_004349a0
                ((param_1->base).count,(int *)(param_1 + 1));
      return &param_1[1].base.type + (param_1->base).count;
    }
    engine_clipper_c_FUN_00432cd0((param_1->base).count,param_1 + 1);
  }
  return &param_1[1].base.type + (param_1->base).count;
}

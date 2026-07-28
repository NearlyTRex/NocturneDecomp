// Name: engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_004083d0
// Address: 004083d0
// Address Range: [[004083d0, 00408505]]
// Convention: unknown
// Signature: SMRGLHeaderExtended * engine_3d_c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_004083d0(SMRGLHeaderPrimitive *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * engine_3d_c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_004083d0(SMRGLHeaderPrimitive *param_1)

{
  int iVar1;
  SMRGLHeaderExtended *pSVar2;
  
  if (_DAT_01c02594 == 0) {
    engine_3d_c_renderPolygonDepthWritePass_FUN_00406f30(param_1);
    pSVar2 = engine_3d_c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_00406c60(param_1);
    return pSVar2;
  }
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(&param_1->surface_normal);
  if (iVar1 != 0) {
    if (_DAT_01c00c78 == 0) {
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
      _DAT_01c039a0 = 0x28d;
      _DAT_01c039a4 = 0;
      engine_clipper_c_clipPolygonToViewport_FUN_004349a0
                ((param_1->base).count,(int *)(param_1 + 1));
      return (SMRGLHeaderExtended *)(&param_1[1].base.type + (param_1->base).count);
    }
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
    _DAT_01c039a0 = 0x8d;
    _DAT_01c039a4 = 4;
    engine_clipper_c_FUN_00432cd0((param_1->base).count,param_1 + 1);
  }
  return (SMRGLHeaderExtended *)(&param_1[1].base.type + (param_1->base).count);
}

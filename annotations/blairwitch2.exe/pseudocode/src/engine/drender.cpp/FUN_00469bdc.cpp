// Name: engine_drender.cpp_FUN_00469bdc
// Address: 00469bdc
// Address Range: [[00469bdc, 00469c5a]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_00469bdc(CDemonRenderer *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_drender_cpp_FUN_00469bdc(CDemonRenderer *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  if ((param_1->plane_culling_enabled == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970((SClipPlane *)(param_2 + 8)), iVar1 != 0)) {
    bVar2 = param_1->shadow_pass_active == 0;
    if (bVar2) {
      _DAT_01c38b58 = 6;
      _DAT_01c35e6c = core_dstrendr_cpp_renderPerspectiveTexturedScanline_FUN_004722e9;
    }
    else {
      _DAT_01c38b58 = 0;
      _DAT_01c35e6c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046e936;
    }
    _DAT_01c38b54 = (uint)bVar2;
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
              (param_1,*(int *)(param_2 + 4),(int *)(param_2 + 0x18));
  }
  return;
}

// Name: engine_drender.cpp_FUN_004824ac
// Address: 004824ac
// Address Range: [[004824ac, 0048253f]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_004824ac(CDemonRenderer *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_drender_cpp_FUN_004824ac(CDemonRenderer *param_1,int param_2)

{
  int iVar1;
  
  if ((param_1->plane_culling_enabled == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920((SClipPlane *)(param_2 + 8)), iVar1 != 0)) {
    if (param_1->shadow_pass_active == 0) {
      if (DAT_0061b4a0 == 0x20) {
        _DAT_01c4f02c = engine_special_cpp_FUN_0057de01;
      }
      else {
        _DAT_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
      }
      _DAT_01c51d18 = 6;
      _DAT_01c51d14 = 0x2cd;
    }
    else {
      _DAT_01c51d14 = 0;
      _DAT_01c51d18 = 0;
      _DAT_01c4f02c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_00486e26;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
              (param_1,*(int *)(param_2 + 4),(int *)(param_2 + 0x18));
  }
  return;
}

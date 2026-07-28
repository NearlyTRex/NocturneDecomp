// Name: engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
// Address: 0045ee60
// Address Range: [[0045ee60, 0045eeda]]
// Convention: unknown
// Signature: void engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60(CDemonRenderer *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60(CDemonRenderer *param_1,int param_2)

{
  int iVar1;
  
  if ((param_1->plane_culling_enabled == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610((SClipPlane *)(param_2 + 8)), iVar1 != 0)) {
    if (param_1->face_count == 0) {
      _DAT_01c039a0 = 0xc0;
      _DAT_01c039a4 = 6;
      _DAT_01c00c7c = core_dstrender_cpp_renderSolidColorDepth16xUnrolled_FUN_00463d98;
    }
    else {
      _DAT_01c039a0 = 0;
      _DAT_01c039a4 = 0;
      _DAT_01c00c7c = core_dstrender_cpp_renderDepthOnlyStandard_FUN_00463a79;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
              (param_1,*(int *)(param_2 + 4),(int *)(param_2 + 0x18));
  }
  return;
}

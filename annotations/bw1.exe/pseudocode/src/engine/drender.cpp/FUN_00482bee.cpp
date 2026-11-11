// Name: engine_drender.cpp_FUN_00482bee
// Address: 00482bee
// Address Range: [[00482bee, 00482cc1]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_00482bee(CDemonRenderer *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_drender_cpp_FUN_00482bee(CDemonRenderer *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_1->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403920(param_2 + 8), iVar3 != 0)) {
    uVar2 = 0xffffffff;
    iVar3 = 0;
    if (0 < *(int *)(param_2 + 4)) {
      iVar1 = param_2;
      do {
        iVar3 = iVar3 + 1;
        uVar2 = uVar2 & param_1->vertex_buffer_ptr[*(int *)(iVar1 + 0x18)].projected_vertex.screen_x
        ;
        iVar1 = iVar1 + 4;
      } while (iVar3 < *(int *)(param_2 + 4));
    }
    if (((uVar2 & 0x80000000) == 0) || ((uVar2 & 0x1f) == 0)) {
      if (param_1->shadow_pass_active == 0) {
        if (DAT_0061b4a0 == 0x20) {
          _DAT_01c4f02c = engine_special_cpp_FUN_0057de01;
        }
        else {
          _DAT_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
        }
        _DAT_01c51d18 = 6;
        _DAT_01c51d14 = 0x2e7;
      }
      else {
        _DAT_01c51d14 = 1;
        _DAT_01c51d18 = 0;
        _DAT_01c4f02c = core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_00486ed7;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
                (param_1,*(int *)(param_2 + 4),(int *)(param_2 + 0x18));
    }
  }
  return;
}

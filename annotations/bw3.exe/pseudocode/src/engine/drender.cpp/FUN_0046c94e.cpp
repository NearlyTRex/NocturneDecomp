// Name: engine_drender.cpp_FUN_0046c94e
// Address: 0046c94e
// Address Range: [[0046c94e, 0046ca16]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_0046c94e(CDemonRenderer *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_drender_cpp_FUN_0046c94e(CDemonRenderer *param_1,int param_2)

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
        if (DAT_005fba20 == 0x20) {
          _DAT_01c6b5cc = engine_special_cpp_FUN_00560f31;
        }
        else {
          _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
        }
        _DAT_01c6e2b4 = 0x327;
      }
      else {
        _DAT_01c6e2b4 = 0;
        _DAT_01c6b5cc = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046f9a6;
      }
      _DAT_01c6e2b8 = 0;
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
                (param_1,*(int *)(param_2 + 4),(int *)(param_2 + 0x18));
    }
  }
  return;
}

// Name: engine_drender.cpp_FUN_0046c16e
// Address: 0046c16e
// Address Range: [[0046c16e, 0046c2c4]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_0046c16e(CDemonRenderer *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_drender_cpp_FUN_0046c16e(CDemonRenderer *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uStack_14;
  
  if ((param_1->plane_culling_enabled == 0) ||
     (iVar4 = engine_3d_c_isVisiblePlane_FUN_00403920((SClipPlane *)(param_2 + 8)), iVar4 != 0)) {
    iVar4 = 0;
    uStack_14 = 0xffffffff;
    if (0 < *(int *)(param_2 + 4)) {
      iVar3 = 0;
      iVar2 = param_2;
      do {
        iVar1 = *(int *)(iVar2 + 0x18);
        *(int *)(&DAT_01bdd818 + iVar3) = iVar1;
        iVar3 = iVar3 + 4;
        uStack_14 = uStack_14 & param_1->vertex_buffer_ptr[iVar1].projected_vertex.screen_x;
        iVar2 = iVar2 + 0xc;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_2 + 4));
    }
    if (((uStack_14 & 0x80000000) == 0) || ((uStack_14 & 0x1f) == 0)) {
      if (param_1->shadow_pass_active == 0) {
        if (DAT_005fba20 == 0x20) {
          _DAT_01c6b5cc = engine_special_cpp_FUN_00560f31;
        }
        else {
          _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
        }
        _DAT_01c6e2b8 = 6;
        _DAT_01c6e2b4 = 999;
        if ((param_1->skip_uv_extraction == 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 4))) {
          iVar3 = 0;
          iVar2 = param_2;
          do {
            iVar1 = *(int *)(&DAT_01bdd818 + iVar3);
            param_1->vertex_buffer_ptr[iVar1].u = *(int *)(iVar2 + 0x1c);
            param_1->vertex_buffer_ptr[iVar1].v = *(int *)(iVar2 + 0x20);
            iVar2 = iVar2 + 0xc;
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 4;
          } while (iVar4 < *(int *)(param_2 + 4));
        }
      }
      else {
        _DAT_01c6e2b4 = 1;
        _DAT_01c6e2b8 = 0;
        _DAT_01c6b5cc = core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_0046fa57;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
                (param_1,*(int *)(param_2 + 4),(int *)&DAT_01bdd818);
    }
  }
  return;
}

// Name: engine_drender.cpp_FUN_0046a57e
// Address: 0046a57e
// Address Range: [[0046a57e, 0046a6e3]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_0046a57e(CDemonRenderer *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_drender_cpp_FUN_0046a57e(CDemonRenderer *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uStack_14;
  
  if ((param_1->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403970(param_2 + 8), iVar3 != 0)) {
    uStack_14 = 0xffffffff;
    iVar3 = 0;
    if (0 < *(int *)(param_2 + 4)) {
      iVar2 = 0;
      iVar4 = param_2;
      do {
        iVar1 = *(int *)(iVar4 + 0x18);
        *(int *)(&DAT_01ba5c84 + iVar2) = iVar1;
        iVar2 = iVar2 + 4;
        uStack_14 = uStack_14 & param_1->vertex_buffer_ptr[iVar1].projected_vertex.screen_x;
        iVar4 = iVar4 + 0xc;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_2 + 4));
    }
    if (((uStack_14 & 0x80000000) == 0) || ((uStack_14 & 0x1f) == 0)) {
      if (param_1->shadow_pass_active == 0) {
        if (DAT_006141c0 == 0x20) {
          _DAT_01c35e6c = engine_special_cpp_FUN_0055b3b1;
        }
        else {
          _DAT_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
        }
        _DAT_01c38b58 = 6;
        _DAT_01c38b54 = 999;
        if ((param_1->skip_uv_extraction == 0) && (iVar3 = 0, 0 < *(int *)(param_2 + 4))) {
          iVar2 = 0;
          iVar4 = param_2;
          do {
            iVar1 = *(int *)(&DAT_01ba5c84 + iVar2);
            param_1->vertex_buffer_ptr[iVar1].u = *(int *)(iVar4 + 0x1c);
            param_1->vertex_buffer_ptr[iVar1].v = *(int *)(iVar4 + 0x20);
            iVar4 = iVar4 + 0xc;
            iVar3 = iVar3 + 1;
            iVar2 = iVar2 + 4;
          } while (iVar3 < *(int *)(param_2 + 4));
        }
      }
      else {
        _DAT_01c38b54 = 1;
        _DAT_01c38b58 = 0;
        _DAT_01c35e6c = core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_0046e9e7;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
                (param_1,*(int *)(param_2 + 4),(int *)&DAT_01ba5c84);
    }
  }
  return;
}

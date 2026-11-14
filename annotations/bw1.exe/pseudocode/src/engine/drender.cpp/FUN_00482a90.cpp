// Name: engine_drender.cpp_FUN_00482a90
// Address: 00482a90
// Address Range: [[00482a90, 00482be4]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_00482a90(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_drender_cpp_FUN_00482a90(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CDemonRenderer *in_stack_00000004;
  int in_stack_00000008;
  uint uStack_14;
  
  if ((in_stack_00000004->plane_culling_enabled == 0) ||
     (iVar4 = engine_3d_c_isVisiblePlane_FUN_00403920((SClipPlane *)(in_stack_00000008 + 8)),
     iVar4 != 0)) {
    iVar4 = 0;
    uStack_14 = 0xffffffff;
    if (0 < *(int *)(in_stack_00000008 + 4)) {
      iVar3 = 0;
      iVar2 = in_stack_00000008;
      do {
        iVar1 = *(int *)(iVar2 + 0x18);
        *(int *)(&DAT_01bc1240 + iVar3) = iVar1;
        iVar3 = iVar3 + 4;
        uStack_14 = uStack_14 &
                    in_stack_00000004->vertex_buffer_ptr[iVar1].projected_vertex.screen_x;
        iVar2 = iVar2 + 0xc;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(in_stack_00000008 + 4));
    }
    if (((uStack_14 & 0x80000000) == 0) || ((uStack_14 & 0x1f) == 0)) {
      if (in_stack_00000004->shadow_pass_active == 0) {
        if (DAT_0061b4a0 == 0x20) {
          _DAT_01c4f02c = engine_special_cpp_FUN_0057de01;
        }
        else {
          _DAT_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
        }
        _DAT_01c51d18 = 6;
        _DAT_01c51d14 = 999;
        if ((in_stack_00000004->skip_uv_extraction == 0) &&
           (iVar4 = 0, 0 < *(int *)(in_stack_00000008 + 4))) {
          iVar3 = 0;
          iVar2 = in_stack_00000008;
          do {
            iVar1 = *(int *)(&DAT_01bc1240 + iVar3);
            in_stack_00000004->vertex_buffer_ptr[iVar1].u = *(int *)(iVar2 + 0x1c);
            in_stack_00000004->vertex_buffer_ptr[iVar1].v = *(int *)(iVar2 + 0x20);
            iVar2 = iVar2 + 0xc;
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 4;
          } while (iVar4 < *(int *)(in_stack_00000008 + 4));
        }
      }
      else {
        _DAT_01c51d14 = 1;
        _DAT_01c51d18 = 0;
        _DAT_01c4f02c = core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_00486ed7;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
                (in_stack_00000004,*(int *)(in_stack_00000008 + 4),(int *)&DAT_01bc1240);
    }
  }
  return;
}

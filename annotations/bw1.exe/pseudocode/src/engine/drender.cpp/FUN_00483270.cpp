// Name: engine_drender.cpp_FUN_00483270
// Address: 00483270
// Address Range: [[00483270, 00483336]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_00483270(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_drender_cpp_FUN_00483270(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  CDemonRenderer *in_stack_00000004;
  int in_stack_00000008;
  
  if ((in_stack_00000004->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403920((SClipPlane *)(in_stack_00000008 + 8)),
     iVar3 != 0)) {
    uVar2 = 0xffffffff;
    iVar3 = 0;
    if (0 < *(int *)(in_stack_00000008 + 4)) {
      iVar1 = in_stack_00000008;
      do {
        iVar3 = iVar3 + 1;
        uVar2 = uVar2 & in_stack_00000004->vertex_buffer_ptr[*(int *)(iVar1 + 0x18)].
                        projected_vertex.screen_x;
        iVar1 = iVar1 + 4;
      } while (iVar3 < *(int *)(in_stack_00000008 + 4));
    }
    if (((uVar2 & 0x80000000) == 0) || ((uVar2 & 0x1f) == 0)) {
      if (in_stack_00000004->shadow_pass_active == 0) {
        if (DAT_0061b4a0 == 0x20) {
          _DAT_01c4f02c = engine_special_cpp_FUN_0057de01;
        }
        else {
          _DAT_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
        }
        _DAT_01c51d14 = 0x327;
      }
      else {
        _DAT_01c51d14 = 0;
        _DAT_01c4f02c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_00486e26;
      }
      _DAT_01c51d18 = 0;
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
                (in_stack_00000004,*(int *)(in_stack_00000008 + 4),(int *)(in_stack_00000008 + 0x18)
                );
    }
  }
  return;
}

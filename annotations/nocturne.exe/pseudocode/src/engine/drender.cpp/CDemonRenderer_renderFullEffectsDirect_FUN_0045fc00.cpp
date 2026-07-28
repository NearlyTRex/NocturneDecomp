// Name: engine_drender.cpp_CDemonRenderer_renderFullEffectsDirect_FUN_0045fc00
// Address: 0045fc00
// Address Range: [[0045fc00, 0045fcd1]]
// Convention: unknown
// Signature: void engine_drender_cpp_CDemonRenderer_renderFullEffectsDirect_FUN_0045fc00(CDemonRenderer *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_drender_cpp_CDemonRenderer_renderFullEffectsDirect_FUN_0045fc00(CDemonRenderer *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_1->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00404610((SClipPlane *)(param_2 + 8)), iVar3 != 0)) {
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
      if (param_1->face_count == 0) {
        if (DAT_005b7624 == 0x20) {
          _DAT_01c00c7c = engine_special_cpp_FUN_0052f031;
        }
        else {
          _DAT_01c00c7c = engine_special_cpp_FUN_0052f823;
        }
        _DAT_01c039a4 = 6;
        _DAT_01c039a0 = 999;
      }
      else {
        _DAT_01c039a0 = 1;
        _DAT_01c039a4 = 0;
        _DAT_01c00c7c = core_dstrender_cpp_renderTexturedAlphaMMXScanline_FUN_00463b27;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
                (param_1,*(int *)(param_2 + 4),(int *)(param_2 + 0x18));
    }
  }
  return;
}

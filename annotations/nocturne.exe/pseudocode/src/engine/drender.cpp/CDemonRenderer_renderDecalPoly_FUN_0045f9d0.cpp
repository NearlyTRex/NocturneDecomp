// Name: engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_0045f9d0
// Address: 0045f9d0
// Address Range: [[0045f9d0, 0045faf8]]
// Convention: unknown
// Signature: void engine_drender_cpp_CDemonRenderer_renderDecalPoly_FUN_0045f9d0(CDemonRenderer *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_drender_cpp_CDemonRenderer_renderDecalPoly_FUN_0045f9d0(CDemonRenderer *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1->plane_culling_enabled == 0) ||
     (iVar2 = engine_3d_c_isVisiblePlane_FUN_00404610((SClipPlane *)(param_2 + 8)), iVar2 != 0)) {
    if (param_1->face_count == 0) {
      if (0 < *(int *)(param_2 + 4)) {
        iVar4 = 0;
        iVar2 = 0;
        iVar3 = param_2;
        do {
          iVar1 = *(int *)(iVar3 + 0x18);
          if (param_1->skip_uv_extraction == 0) {
            param_1->vertex_buffer_ptr[iVar1].u = *(int *)(iVar3 + 0x1c);
            param_1->vertex_buffer_ptr[iVar1].v = *(int *)(iVar3 + 0x20);
          }
          *(int *)(&DAT_01b4d76c + iVar4) = iVar1;
          iVar3 = iVar3 + 0xc;
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar2 < *(int *)(param_2 + 4));
      }
    }
    else {
      iVar2 = 0;
      if (0 < *(int *)(param_2 + 4)) {
        iVar4 = 0;
        iVar3 = param_2;
        do {
          *(uint *)(&DAT_01b4d76c + iVar4) = *(uint *)(iVar3 + 0x18);
          iVar4 = iVar4 + 4;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0xc;
        } while (iVar2 < *(int *)(param_2 + 4));
      }
    }
    if (param_1->face_count == 0) {
      _DAT_01c039a0 = 0x41;
      _DAT_01c039a4 = 6;
      _DAT_01c00c7c = core_dstrender_cpp_renderTexturedDecalMMXScanline_FUN_004649dd;
    }
    else {
      _DAT_01c039a0 = 0;
      _DAT_01c039a4 = 0;
      _DAT_01c00c7c = core_dstrender_cpp_renderDepthOnlyStandard_FUN_00463a79;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
              (param_1,*(int *)(param_2 + 4),(int *)&DAT_01b4d76c);
  }
  return;
}

// Name: core_set.cpp_FUN_0050ddd0
// Address: 0050ddd0
// Address Range: [[0050ddd0, 0050decc]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_0050ddd0(CDemonSet *param_1,SMRGLPrimitiveQuad *param_2,int param_3,int param_4)

#include "nocturne.h"

void core_set_cpp_FUN_0050ddd0(CDemonSet *param_1,SMRGLPrimitiveQuad *param_2,int param_3,int param_4)

{
  SMRGLPrimitiveQuad *pSVar1;
  int iVar2;
  SMRGLHeaderPrimitive local_38;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (*(int *)(0x01C775EC + 0x1f0) == 0) {
    if ((*(int *)(0x01C775EC + 500) != 0) &&
       (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704),
       iVar2 == 0)) {
      core_set_cpp_CDemonSet_renderEnvMapBatchQuad_FUN_0050d670
                (param_1,&param_2->base,param_3,0xffff);
      return;
    }
    if ((param_1->renderable_actors[0x6e8] != (CDemonActor *)0x0) &&
       (iVar2 = 0, pSVar1 = param_2, 0 < param_3)) {
      do {
        local_38.base.count = (pSVar1->base).base.count;
        local_38.surface_normal.A = (pSVar1->base).surface_normal.A;
        local_38.surface_normal.B = (pSVar1->base).surface_normal.B;
        local_38.surface_normal.C = (pSVar1->base).surface_normal.C;
        local_38.surface_normal.D = (pSVar1->base).surface_normal.D;
        local_20 = pSVar1->vertices[0].vertex_index;
        local_1c = pSVar1->vertices[1].vertex_index;
        local_18 = pSVar1->vertices[2].vertex_index;
        local_14 = pSVar1->vertices[3].vertex_index;
        pSVar1 = pSVar1 + 1;
        iVar2 = iVar2 + 1;
        engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80
                  (DAT_005ae704,&local_38,core_dcamera_cpp_renderFlatColorScanline_FUN_00444440);
      } while (iVar2 < param_3);
    }
    engine_drender_cpp_CDemonRenderer_renderQuadBatch_FUN_00461440
              (DAT_005ae704,param_2,param_3,param_4);
  }
  return;
}

// Name: core_glass.cpp_CGlass_renderBackground_FUN_004ac9b0
// Address: 004ac9b0
// Address Range: [[004ac9b0, 004acb57]]
// Convention: unknown
// Signature: void core_glass_cpp_CGlass_renderBackground_FUN_004ac9b0(CGlass *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_glass_cpp_CGlass_renderBackground_FUN_004ac9b0(CGlass *param_1,int param_2)

{
  CDemonRenderer *this_ptr;
  CBoundingBox3D *this_ptr_00;
  CVector3f *pCVar1;
  CVector3i *pCVar2;
  CGlass *pCVar3;
  int iVar4;
  SMRGLPrimitivePoly *poly;
  SMRGLTextureBasic *texture;
  CBoundingBox3D local_20;
  
  if (param_1->background_flag == 0) {
    if (((param_2 != 0) && (param_1->shattered != 0)) && (param_1->mirror_flag != 0)) {
      core_glass_cpp_FUN_004ac7c0(param_1);
      return;
    }
  }
  else if ((param_2 != 0) || (param_1->pending_background_render != 0)) {
    param_1->pending_background_render = 0;
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&param_1->base);
    this_ptr_00 = (*((param_1->base).vtable._ub)->getBoundingBox)(&param_1->base,&local_20);
    core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
    if (param_1->shattered == 0) {
      texture = &param_1->glass_texture;
    }
    else {
      texture = &param_1->broken_texture;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,texture);
    pCVar1 = param_1->broken_vertices;
    iVar4 = 0;
    pCVar2 = param_1->render_vertices;
    if (0 < param_1->broken_vertex_count) {
      do {
        pCVar2->x = (int)ROUND(pCVar1->x * _DAT_0059e390);
        pCVar2->y = (int)ROUND(pCVar1->y * _DAT_0059e390);
        pCVar2->z = (int)ROUND(pCVar1->z * _DAT_0059e390);
        iVar4 = iVar4 + 1;
        pCVar1 = pCVar1 + 1;
        pCVar2 = pCVar2 + 1;
      } while (iVar4 < param_1->broken_vertex_count);
    }
    iVar4 = 0;
    core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200
              (g_CDemonSet_PTR_005be368,param_1->broken_vertex_count,param_1->render_vertices);
    if (0 < param_1->broken_polygon_count) {
      poly = (SMRGLPrimitivePoly *)param_1->broken_quads;
      pCVar3 = param_1;
      do {
        pCVar3->broken_quads[0].base.surface_normal.A.i = 0;
        this_ptr = DAT_005ae704;
        pCVar3->broken_quads[0].base.surface_normal.B.i = 0;
        iVar4 = iVar4 + 1;
        pCVar3->broken_quads[0].base.surface_normal.C.i = 0;
        pCVar3->broken_quads[0].base.surface_normal.D.i = 0;
        pCVar3 = (CGlass *)((pCVar3->base).orient_matrix.m + 1);
        engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460(this_ptr,poly,0xc1);
        poly = (SMRGLPrimitivePoly *)(poly->vertices + 4);
      } while (iVar4 < param_1->broken_polygon_count);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&param_1->base);
  }
  return;
}

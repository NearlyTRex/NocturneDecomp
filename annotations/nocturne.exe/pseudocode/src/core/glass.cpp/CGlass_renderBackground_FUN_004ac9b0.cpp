// Name: core_glass.cpp_CGlass_renderBackground_FUN_004ac9b0
// Address: 004ac9b0
// Address Range: [[004ac9b0, 004acb57]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_renderBackground_FUN_004ac9b0(CGlass *this_ptr,int layer_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_glass_cpp_CGlass_renderBackground_FUN_004ac9b0(CGlass *this_ptr,int layer_flag)

{
  CDemonRenderer *this_ptr_00;
  CBoundingBox3D *this_ptr_01;
  CVector3f *pCVar1;
  CVector3i *pCVar2;
  CGlass *pCVar3;
  int iVar4;
  SMRGLPrimitivePoly *poly;
  SMRGLTextureBasic *texture;
  CBoundingBox3D local_20;
  
  if (this_ptr->background_flag == 0) {
    if (((layer_flag != 0) && (this_ptr->shattered != 0)) && (this_ptr->mirror_flag != 0)) {
      core_glass_cpp_CGlass_FUN_004ac7c0(this_ptr);
      return;
    }
  }
  else if ((layer_flag != 0) || (this_ptr->pending_background_render != 0)) {
    this_ptr->pending_background_render = 0;
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&this_ptr->base);
    this_ptr_01 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_20);
    core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_01);
    if (this_ptr->shattered == 0) {
      texture = &this_ptr->glass_texture;
    }
    else {
      texture = &this_ptr->broken_texture;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (g_CDemonRenderer_PTR_005ae704,texture);
    pCVar1 = this_ptr->broken_vertices;
    iVar4 = 0;
    pCVar2 = this_ptr->render_vertices;
    if (0 < this_ptr->broken_vertex_count) {
      do {
        pCVar2->x = (int)ROUND(pCVar1->x * _DAT_0059e390);
        pCVar2->y = (int)ROUND(pCVar1->y * _DAT_0059e390);
        pCVar2->z = (int)ROUND(pCVar1->z * _DAT_0059e390);
        iVar4 = iVar4 + 1;
        pCVar1 = pCVar1 + 1;
        pCVar2 = pCVar2 + 1;
      } while (iVar4 < this_ptr->broken_vertex_count);
    }
    iVar4 = 0;
    core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200
              (g_CDemonSet_PTR_005be368,this_ptr->broken_vertex_count,this_ptr->render_vertices);
    if (0 < this_ptr->broken_polygon_count) {
      poly = (SMRGLPrimitivePoly *)this_ptr->broken_quads;
      pCVar3 = this_ptr;
      do {
        pCVar3->broken_quads[0].base.surface_normal.A.i = 0;
        this_ptr_00 = g_CDemonRenderer_PTR_005ae704;
        pCVar3->broken_quads[0].base.surface_normal.B.i = 0;
        iVar4 = iVar4 + 1;
        pCVar3->broken_quads[0].base.surface_normal.C.i = 0;
        pCVar3->broken_quads[0].base.surface_normal.D.i = 0;
        pCVar3 = (CGlass *)((pCVar3->base).orient_matrix.m + 1);
        engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460(this_ptr_00,poly,0xc1);
        poly = (SMRGLPrimitivePoly *)(poly->vertices + 4);
      } while (iVar4 < this_ptr->broken_polygon_count);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
  }
  return;
}

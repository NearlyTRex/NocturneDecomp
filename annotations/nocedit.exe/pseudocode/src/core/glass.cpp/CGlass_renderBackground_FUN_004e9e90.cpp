// Name: core_glass.cpp_CGlass_renderBackground_FUN_004e9e90
// Address: 004e9e90
// Address Range: [[004e9e90, 004ea027]]
// Convention: __cdecl
// Signature: void core_glass.cpp_CGlass_renderBackground_FUN_004e9e90(CGlass * this_ptr, int layer_flag)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_renderBackground_FUN_004e9e90(CGlass *this_ptr,int layer_flag)

{
  CDemonRenderer *this_ptr_00;
  CBoundingBox3D *this_ptr_01;
  CVector3f *pCVar1;
  char *pcVar2;
  CGlass *pCVar3;
  int iVar4;
  SMRGLHeaderPrimitive *polygon_info;
  SMRGLTextureBasic *texture;
  
  if (this_ptr->background_flag == 0) {
    if (((layer_flag != 0) && (this_ptr->shattered != 0)) && (this_ptr->mirror_flag != 0)) {
      core_glass_cpp_CGlass_renderBrokenGlass_FUN_004e9ca0(this_ptr);
      return;
    }
  }
  else if ((layer_flag != 0) || (this_ptr->unk4 != 0)) {
    this_ptr->unk4 = 0;
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
    this_ptr_01 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                            (&this_ptr->base,(CBoundingBox3D *)&stack0xffffffe0);
    core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_01);
    if (this_ptr->shattered == 0) {
      texture = &this_ptr->glass_texture;
    }
    else {
      texture = &this_ptr->broken_texture;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr2,texture);
    pCVar1 = this_ptr->broken_vertices;
    iVar4 = 0;
    pcVar2 = this_ptr->unk1;
    if (0 < this_ptr->broken_vertex_count) {
      do {
        *(int *)pcVar2 = (int)ROUND(pCVar1->x * 256.0f);
        *(int *)(pcVar2 + 4) = (int)ROUND(pCVar1->y * 256.0f);
        *(int *)(pcVar2 + 8) = (int)ROUND(pCVar1->z * 256.0f);
        iVar4 = iVar4 + 1;
        pCVar1 = pCVar1 + 1;
        pcVar2 = pcVar2 + 0xc;
      } while (iVar4 < this_ptr->broken_vertex_count);
    }
    iVar4 = 0;
    core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0
              (g_CDemonSetPtr,this_ptr->broken_vertex_count,(int *)this_ptr->unk1);
    if (0 < this_ptr->broken_polygon_count) {
      polygon_info = &this_ptr->broken_quads[0].base;
      pCVar3 = this_ptr;
      do {
        pCVar3->broken_quads[0].base.surface_normal.A = 0;
        this_ptr_00 = g_CDemonRendererPtr2;
        pCVar3->broken_quads[0].base.surface_normal.B = 0;
        iVar4 = iVar4 + 1;
        pCVar3->broken_quads[0].base.surface_normal.C = 0;
        pCVar3->broken_quads[0].base.surface_normal.D = 0;
        pCVar3 = (CGlass *)((pCVar3->base).orient_matrix.m + 1);
        engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
                  (this_ptr_00,polygon_info,0xc1);
        polygon_info = polygon_info + 3;
      } while (iVar4 < this_ptr->broken_polygon_count);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  }
  return;
}

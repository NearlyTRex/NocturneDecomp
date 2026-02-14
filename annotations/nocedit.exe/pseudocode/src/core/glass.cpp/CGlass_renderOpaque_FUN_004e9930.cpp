// Name: core_glass.cpp_CGlass_renderOpaque_FUN_004e9930
// Address: 004e9930
// Address Range: [[004e9930, 004e9ae4]]
// Convention: __cdecl
// Signature: int __cdecl core_glass_cpp_CGlass_renderOpaque_FUN_004e9930(CGlass *this_ptr)

#include "nocturne.h"

int __cdecl core_glass_cpp_CGlass_renderOpaque_FUN_004e9930(CGlass *this_ptr)

{
  char *input_vertices;
  longlong lVar1;
  CDemonRenderer *this_ptr_00;
  int iVar2;
  CBoundingBox3D *this_ptr_01;
  char *pcVar3;
  CVector3f *pCVar4;
  CGlass *pCVar5;
  SMRGLHeaderPrimitive *polygon_info;
  CBoundingBox3D local_28;
  int iStack_10;
  
  if ((((this_ptr->background_flag == 0) && ((this_ptr->base).is_transparent == 0)) &&
      (64999 < this_ptr->opacity)) &&
     ((this_ptr->shattered == 0 &&
      (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
      iVar2 == 0)))) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
    this_ptr_01 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_28);
    iStack_10 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_01);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr2,&this_ptr->glass_texture);
    pCVar4 = this_ptr->broken_vertices;
    input_vertices = this_ptr->unk1;
    iVar2 = 0;
    pcVar3 = input_vertices;
    if (0 < this_ptr->broken_vertex_count) {
      do {
        *(int *)pcVar3 = (int)ROUND(pCVar4->x * 256.0f);
        *(int *)(pcVar3 + 4) = (int)ROUND(pCVar4->y * 256.0f);
        *(int *)(pcVar3 + 8) = (int)ROUND(pCVar4->z * 256.0f);
        iVar2 = iVar2 + 1;
        pCVar4 = pCVar4 + 1;
        pcVar3 = pcVar3 + 0xc;
      } while (iVar2 < this_ptr->broken_vertex_count);
    }
    core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0
              (g_CDemonSetPtr,this_ptr->broken_vertex_count,(int *)input_vertices);
    lVar1 = (longlong)(0xffff - (int)g_PerspectiveReciprocal) * (longlong)this_ptr->opacity;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
              (g_CDemonRendererPtr2,(uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    polygon_info = &this_ptr->broken_quads[0].base;
    iVar2 = 0;
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,this_ptr->broken_vertex_count,this_ptr->broken_polygon_count,
               (SInputFace *)polygon_info,(int)input_vertices,4,0);
    pCVar5 = this_ptr;
    if (0 < this_ptr->broken_polygon_count) {
      do {
        this_ptr_00 = g_CDemonRendererPtr2;
        pCVar5->broken_quads[0].base.surface_normal.A = 0;
        pCVar5->broken_quads[0].base.surface_normal.B = 0;
        iVar2 = iVar2 + 1;
        pCVar5->broken_quads[0].base.surface_normal.C = 0;
        pCVar5->broken_quads[0].base.surface_normal.D = 0;
        engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
                  (this_ptr_00,polygon_info);
        polygon_info = polygon_info + 3;
        pCVar5 = (CGlass *)((pCVar5->base).orient_matrix.m + 1);
      } while (iVar2 < this_ptr->broken_polygon_count);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
    return iStack_10;
  }
  return 0;
}

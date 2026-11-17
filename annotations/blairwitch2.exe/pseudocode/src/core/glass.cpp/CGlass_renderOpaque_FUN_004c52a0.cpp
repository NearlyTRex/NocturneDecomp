// Name: core_glass.cpp_CGlass_renderOpaque_FUN_004c52a0
// Address: 004c52a0
// Address Range: [[004c52a0, 004c5464]]
// Convention: __cdecl
// Signature: int __cdecl core_glass_cpp_CGlass_renderOpaque_FUN_004c52a0(CGlass *this_ptr)

#include "nocturne.h"

int __cdecl core_glass_cpp_CGlass_renderOpaque_FUN_004c52a0(CGlass *this_ptr)

{
  CVector3i *input_vertices;
  longlong lVar1;
  CDemonRenderer *this_ptr_00;
  int iVar2;
  CVector3f *pCVar3;
  CVector3i *pCVar4;
  CGlass *pCVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  SMRGLPrimitivePoly *poly;
  byte bVar9;
  int in_stack_ffffffc0;
  CBoundingBox3D CStack_38;
  uint auStack_20 [5];
  
  bVar9 = 0;
  if ((((this_ptr->background_flag == 0) && ((this_ptr->base).is_transparent == 0)) &&
      (64999 < this_ptr->opacity)) &&
     ((this_ptr->shattered == 0 &&
      (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960
                         (g_CDemonRenderer_PTR_0060b280), iVar2 == 0)))) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(&this_ptr->base);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
    puVar6 = auStack_20;
    puVar8 = (uint *)&stack0xffffffc0;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
    }
    iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041a840(&CStack_38,in_stack_ffffffc0);
    iVar7 = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (g_CDemonRenderer_PTR_0060b280,&this_ptr->glass_texture);
    pCVar3 = this_ptr->broken_vertices;
    input_vertices = this_ptr->render_vertices;
    pCVar4 = input_vertices;
    if (0 < this_ptr->broken_vertex_count) {
      do {
        pCVar4->x = (int)ROUND(pCVar3->x * 256.0f);
        pCVar4->y = (int)ROUND(pCVar3->y * 256.0f);
        pCVar4->z = (int)ROUND(pCVar3->z * 256.0f);
        iVar7 = iVar7 + 1;
        pCVar3 = pCVar3 + 1;
        pCVar4 = pCVar4 + 1;
      } while (iVar7 < this_ptr->broken_vertex_count);
    }
    core_set_cpp_CDemonSet_rotateVerticies_FUN_00531e90
              (g_CDemonSetPtr,this_ptr->broken_vertex_count,input_vertices);
    lVar1 = (longlong)(0xffff - g_INT_01c38aec) * (longlong)this_ptr->opacity;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
              (g_CDemonRenderer_PTR_0060b280,
               (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    poly = (SMRGLPrimitivePoly *)this_ptr->broken_quads;
    iVar7 = 0;
    core_set_cpp_CDemonSet_lightVerticies_FUN_00532190
              (g_CDemonSetPtr,this_ptr->broken_vertex_count,this_ptr->broken_polygon_count,poly,
               input_vertices,4,(CVector3i *)0x0);
    pCVar5 = this_ptr;
    if (0 < this_ptr->broken_polygon_count) {
      do {
        this_ptr_00 = g_CDemonRenderer_PTR_0060b280;
        pCVar5->broken_quads[0].base.surface_normal.A.i = 0;
        pCVar5->broken_quads[0].base.surface_normal.B.i = 0;
        iVar7 = iVar7 + 1;
        pCVar5->broken_quads[0].base.surface_normal.C.i = 0;
        pCVar5->broken_quads[0].base.surface_normal.D.i = 0;
        engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_0046ac20(this_ptr_00,poly);
        poly = (SMRGLPrimitivePoly *)(poly->vertices + 4);
        pCVar5 = (CGlass *)((pCVar5->base).orient_matrix.m + 1);
      } while (iVar7 < this_ptr->broken_polygon_count);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
    return iVar2;
  }
  return 0;
}

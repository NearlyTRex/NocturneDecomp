// Name: core_glass.cpp_CGlass_renderBrokenGlass_FUN_004e9ca0
// Address: 004e9ca0
// Address Range: [[004e9ca0, 004e9e88]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_renderBrokenGlass_FUN_004e9ca0(CGlass *this_ptr)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_renderBrokenGlass_FUN_004e9ca0(CGlass *this_ptr)

{
  CDemonRenderer *pCVar1;
  CBoundingBox3D *this_ptr_00;
  int iVar2;
  int iVar3;
  CGlass *pCVar4;
  CVector3f *pCVar5;
  SMRGLPrimitivePoly *poly;
  CBoundingBox3D CStack_28;
  CVector3i CStack_10;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_28);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
    return;
  }
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar2 == 0) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr2,&this_ptr->broken_texture);
  }
  else {
    engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr2,0);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr2,&this_ptr->broken_texture);
    engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr2,1);
  }
  iVar2 = 0;
  if (0 < this_ptr->broken_vertex_count) {
    pCVar5 = this_ptr->broken_vertices;
    iVar3 = 0;
    do {
      CStack_10.x = (int)ROUND(pCVar5->x * 256.0f);
      CStack_10.y = (int)ROUND(pCVar5->y * 256.0f);
      CStack_10.z = (int)ROUND(pCVar5->z * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar3),&CStack_10);
      pCVar1 = g_CDemonRendererPtr2;
      *(uint *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->r + iVar3) = 0xffff;
      *(uint *)((int)&pCVar1->vertex_buffer_ptr->g + iVar3) = 0xffff;
      *(uint *)((int)&pCVar1->vertex_buffer_ptr->b + iVar3) = 0xffff;
      iVar2 = iVar2 + 1;
      pCVar5 = pCVar5 + 1;
      iVar3 = iVar3 + 0x30;
    } while (iVar2 < this_ptr->broken_vertex_count);
  }
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr2,this_ptr->opacity);
  iVar2 = 0;
  if (0 < this_ptr->broken_polygon_count) {
    poly = (SMRGLPrimitivePoly *)this_ptr->broken_quads;
    pCVar4 = this_ptr;
    do {
      pCVar4->broken_quads[0].base.surface_normal.A.i = 0;
      pCVar4->broken_quads[0].base.surface_normal.B.i = 0;
      pCVar1 = g_CDemonRendererPtr2;
      pCVar4->broken_quads[0].base.surface_normal.C.i = 0;
      pCVar4->broken_quads[0].base.surface_normal.D.i = 0;
      engine_drender_cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0048b550(pCVar1,poly);
      pCVar4 = (CGlass *)((pCVar4->base).orient_matrix.m + 1);
      iVar2 = iVar2 + 1;
      poly = (SMRGLPrimitivePoly *)(poly->vertices + 4);
    } while (iVar2 < this_ptr->broken_polygon_count);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  return;
}

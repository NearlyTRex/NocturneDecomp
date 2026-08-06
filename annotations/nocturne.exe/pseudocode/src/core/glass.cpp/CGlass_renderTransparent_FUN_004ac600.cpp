// Name: core_glass.cpp_CGlass_renderTransparent_FUN_004ac600
// Address: 004ac600
// Address Range: [[004ac600, 004ac7b4]]
// Convention: __cdecl
// Signature: int __cdecl core_glass_cpp_CGlass_renderTransparent_FUN_004ac600(CGlass *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_glass_cpp_CGlass_renderTransparent_FUN_004ac600(CGlass *this_ptr)

{
  CVector3i *input_vertices;
  longlong lVar1;
  CDemonRenderer *this_ptr_00;
  int iVar2;
  CBoundingBox3D *this_ptr_01;
  CVector3i *pCVar3;
  CVector3f *pCVar4;
  CGlass *pCVar5;
  SMRGLPrimitivePoly *poly;
  CBoundingBox3D local_28;
  int iStack_10;
  
  if ((((this_ptr->background_flag == 0) && (this_ptr->opacity != 0)) && (this_ptr->shattered == 0))
     && (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090
                           (g_CDemonRenderer_PTR_005ae704), iVar2 == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&this_ptr->base);
    this_ptr_01 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_28);
    iStack_10 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_01);
    iVar2 = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (g_CDemonRenderer_PTR_005ae704,&this_ptr->glass_texture);
    pCVar4 = this_ptr->broken_vertices;
    input_vertices = this_ptr->render_vertices;
    pCVar3 = input_vertices;
    if (0 < this_ptr->broken_vertex_count) {
      do {
        pCVar3->x = (int)ROUND(pCVar4->x * _DAT_0059e390);
        pCVar3->y = (int)ROUND(pCVar4->y * _DAT_0059e390);
        pCVar3->z = (int)ROUND(pCVar4->z * _DAT_0059e390);
        iVar2 = iVar2 + 1;
        pCVar4 = pCVar4 + 1;
        pCVar3 = pCVar3 + 1;
      } while (iVar2 < this_ptr->broken_vertex_count);
    }
    core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200
              (g_CDemonSet_PTR_005be368,this_ptr->broken_vertex_count,input_vertices);
    lVar1 = (longlong)(0xffff - _DAT_01c038f4) * (longlong)this_ptr->opacity;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
              (g_CDemonRenderer_PTR_005ae704,
               (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    poly = (SMRGLPrimitivePoly *)this_ptr->broken_quads;
    core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
              (g_CDemonSet_PTR_005be368,this_ptr->broken_vertex_count,this_ptr->broken_polygon_count
               ,poly,input_vertices,4,(CVector3i *)0x0);
    iVar2 = 0;
    pCVar5 = this_ptr;
    if (0 < this_ptr->broken_polygon_count) {
      do {
        this_ptr_00 = g_CDemonRenderer_PTR_005ae704;
        pCVar5->broken_quads[0].base.surface_normal.A.i = 0;
        pCVar5->broken_quads[0].base.surface_normal.B.i = 0;
        iVar2 = iVar2 + 1;
        pCVar5->broken_quads[0].base.surface_normal.C.i = 0;
        pCVar5->broken_quads[0].base.surface_normal.D.i = 0;
        engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370(this_ptr_00,poly);
        poly = (SMRGLPrimitivePoly *)(poly->vertices + 4);
        pCVar5 = (CGlass *)((pCVar5->base).orient_matrix.m + 1);
      } while (iVar2 < this_ptr->broken_polygon_count);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
    return iStack_10;
  }
  return 0;
}

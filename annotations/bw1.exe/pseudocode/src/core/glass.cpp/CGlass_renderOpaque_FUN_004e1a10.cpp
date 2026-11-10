// Name: core_glass.cpp_CGlass_renderOpaque_FUN_004e1a10
// Address: 004e1a10
// Address Range: [[004e1a10, 004e1bd4]]
// Convention: __cdecl
// Signature: int __cdecl core_glass_cpp_CGlass_renderOpaque_FUN_004e1a10(CGlass *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_glass_cpp_CGlass_renderOpaque_FUN_004e1a10(CGlass *this_ptr)

{
  CVector3i *input_vertices;
  longlong lVar1;
  CDemonRenderer *this_ptr_00;
  int iVar2;
  CVector3f *pCVar3;
  CVector3i *pCVar4;
  CGlass *pCVar5;
  uint *puVar6;
  uint *puVar7;
  SMRGLPrimitivePoly *poly;
  byte bVar8;
  uint auStack_40 [6];
  uint auStack_28 [6];
  int iStack_10;
  
  bVar8 = 0;
  if ((((this_ptr->background_flag == 0) && ((this_ptr->base).is_transparent == 0)) &&
      (64999 < this_ptr->opacity)) &&
     ((this_ptr->shattered == 0 &&
      (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560), iVar2 == 0
      )))) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(&this_ptr->base);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
    puVar6 = auStack_28;
    puVar7 = auStack_40;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    iStack_10 = core_box_cpp_FUN_004207b0(auStack_40);
    iVar2 = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (DAT_00612560,&this_ptr->glass_texture);
    pCVar3 = this_ptr->broken_vertices;
    input_vertices = this_ptr->render_vertices;
    pCVar4 = input_vertices;
    if (0 < this_ptr->broken_vertex_count) {
      do {
        pCVar4->x = (int)ROUND(pCVar3->x * _DAT_00601450);
        pCVar4->y = (int)ROUND(pCVar3->y * _DAT_00601450);
        pCVar4->z = (int)ROUND(pCVar3->z * _DAT_00601450);
        iVar2 = iVar2 + 1;
        pCVar3 = pCVar3 + 1;
        pCVar4 = pCVar4 + 1;
      } while (iVar2 < this_ptr->broken_vertex_count);
    }
    core_set_cpp_CDemonSet_rotateVerticies_FUN_00553140
              (g_CDemonSetPtr,this_ptr->broken_vertex_count,input_vertices);
    lVar1 = (longlong)(0xffff - _DAT_01c51cac) * (longlong)this_ptr->opacity;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
              (DAT_00612560,(uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    poly = (SMRGLPrimitivePoly *)this_ptr->broken_quads;
    iVar2 = 0;
    core_set_cpp_CDemonSet_lightVerticies_FUN_00553440
              (g_CDemonSetPtr,this_ptr->broken_vertex_count,this_ptr->broken_polygon_count,poly,
               input_vertices,4,(CVector3i *)0x0);
    pCVar5 = this_ptr;
    if (0 < this_ptr->broken_polygon_count) {
      do {
        this_ptr_00 = DAT_00612560;
        pCVar5->broken_quads[0].base.surface_normal.A.i = 0;
        pCVar5->broken_quads[0].base.surface_normal.B.i = 0;
        iVar2 = iVar2 + 1;
        pCVar5->broken_quads[0].base.surface_normal.C.i = 0;
        pCVar5->broken_quads[0].base.surface_normal.D.i = 0;
        engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120(this_ptr_00,poly);
        poly = poly + 0x48;
        pCVar5 = (CGlass *)((pCVar5->base).orient_matrix.m + 1);
      } while (iVar2 < this_ptr->broken_polygon_count);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(&this_ptr->base);
    return iStack_10;
  }
  return 0;
}

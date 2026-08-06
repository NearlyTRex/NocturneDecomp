// Name: core_glass.cpp_CGlass_FUN_004ac7c0
// Address: 004ac7c0
// Address Range: [[004ac7c0, 004ac9a8]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_FUN_004ac7c0(CGlass *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_glass_cpp_CGlass_FUN_004ac7c0(CGlass *this_ptr)

{
  CDemonRenderer *pCVar1;
  CBoundingBox3D *this_ptr_00;
  int iVar2;
  int iVar3;
  CGlass *pCVar4;
  CVector3f *pCVar5;
  SMRGLPrimitivePoly *poly;
  CBoundingBox3D local_28;
  CVector3i CStack_10;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_28);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
    return;
  }
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(g_CDemonRenderer_PTR_005ae704)
  ;
  if (iVar2 == 0) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (g_CDemonRenderer_PTR_005ae704,&this_ptr->broken_texture);
  }
  else {
    engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070(g_CDemonRenderer_PTR_005ae704,0);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (g_CDemonRenderer_PTR_005ae704,&this_ptr->broken_texture);
    engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070(g_CDemonRenderer_PTR_005ae704,1);
  }
  iVar2 = 0;
  if (0 < this_ptr->broken_vertex_count) {
    pCVar5 = this_ptr->broken_vertices;
    iVar3 = 0;
    do {
      CStack_10.x = (int)ROUND(pCVar5->x * _DAT_0059e390);
      CStack_10.y = (int)ROUND(pCVar5->y * _DAT_0059e390);
      CStack_10.z = (int)ROUND(pCVar5->z * _DAT_0059e390);
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex).
                        transformed_x + iVar3),&CStack_10);
      pCVar1 = g_CDemonRenderer_PTR_005ae704;
      *(uint *)((int)&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->r + iVar3) = 0xffff;
      *(uint *)((int)&pCVar1->vertex_buffer_ptr->g + iVar3) = 0xffff;
      *(uint *)((int)&pCVar1->vertex_buffer_ptr->b + iVar3) = 0xffff;
      iVar2 = iVar2 + 1;
      pCVar5 = pCVar5 + 1;
      iVar3 = iVar3 + 0x30;
    } while (iVar2 < this_ptr->broken_vertex_count);
  }
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
            (g_CDemonRenderer_PTR_005ae704,this_ptr->opacity);
  iVar2 = 0;
  if (0 < this_ptr->broken_polygon_count) {
    poly = (SMRGLPrimitivePoly *)this_ptr->broken_quads;
    pCVar4 = this_ptr;
    do {
      pCVar4->broken_quads[0].base.surface_normal.A.i = 0;
      pCVar4->broken_quads[0].base.surface_normal.B.i = 0;
      pCVar1 = g_CDemonRenderer_PTR_005ae704;
      pCVar4->broken_quads[0].base.surface_normal.C.i = 0;
      pCVar4->broken_quads[0].base.surface_normal.D.i = 0;
      engine_drender_cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0045fb00(pCVar1,poly);
      pCVar4 = (CGlass *)((pCVar4->base).orient_matrix.m + 1);
      iVar2 = iVar2 + 1;
      poly = (SMRGLPrimitivePoly *)(poly->vertices + 4);
    } while (iVar2 < this_ptr->broken_polygon_count);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
  return;
}

// Name: core_actor.cpp_CDemonActor_renderBoundingBoxSolid_FUN_0040dec0
// Address: 0040dec0
// Address Range: [[0040dec0, 0040e125]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_renderBoundingBoxSolid_FUN_0040dec0(CDemonActor *this_ptr,int red,int green,int blue,int alpha)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_renderBoundingBoxSolid_FUN_0040dec0(CDemonActor *this_ptr,int red,int green,int blue,int alpha)

{
  int iVar1;
  uint corner_index;
  SMRGLHeaderPrimitive SStack_74;
  CBoundingBox3D local_4c;
  CVector3f CStack_34;
  CVector3i CStack_28;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  CDemonRenderer *this_ptr_00;
  
  (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,&local_4c);
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(this_ptr);
  corner_index = 0;
  iVar1 = 0;
  do {
    core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(&local_4c,&CStack_34,corner_index);
    CStack_28.x = (int)ROUND(CStack_34.x * 256.0f);
    CStack_28.y = (int)ROUND(CStack_34.y * 256.0f);
    CStack_28.z = (int)ROUND(CStack_34.z * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar1),&CStack_28);
    this_ptr_00 = g_CDemonRendererPtr2;
    *(int *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->r + iVar1) = red << 8;
    *(int *)((int)&this_ptr_00->vertex_buffer_ptr->g + iVar1) = green << 8;
    *(int *)((int)&this_ptr_00->vertex_buffer_ptr->b + iVar1) = blue << 8;
    *(int *)((int)&this_ptr_00->vertex_buffer_ptr->a + iVar1) = alpha << 8;
    *(uint *)((int)&this_ptr_00->vertex_buffer_ptr->u + iVar1) = 0x800000;
    corner_index = corner_index + 1;
    *(uint *)((int)&this_ptr_00->vertex_buffer_ptr->v + iVar1) = 0x800000;
    iVar1 = iVar1 + 0x30;
  } while ((int)corner_index < 8);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (this_ptr_00,&SMRGLTextureBasic_0066e158);
  SStack_74.base.count = 4;
  SStack_74.surface_normal.D = 0;
  SStack_74.surface_normal.C = 0;
  SStack_74.surface_normal.B = 0;
  SStack_74.surface_normal.A = 0;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr2,&SStack_74);
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr2,&SStack_74);
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr2,&SStack_74);
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr2,&SStack_74);
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr2,&SStack_74);
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr2,&SStack_74);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(this_ptr);
  return;
}

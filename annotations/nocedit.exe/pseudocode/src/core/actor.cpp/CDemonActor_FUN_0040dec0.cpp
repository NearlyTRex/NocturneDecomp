// Name: core_actor.cpp_CDemonActor_FUN_0040dec0
// Address: 0040dec0
// Address Range: [[0040dec0, 0040e125]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_FUN_0040dec0(CDemonActor *this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_FUN_0040dec0(CDemonActor *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  int iVar1;
  uint corner_index;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  SMRGLHeaderPrimitive SStack_74;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  CBoundingBox3D local_4c;
  CVector3f CStack_34;
  CVector3i CStack_28;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,&local_4c);
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(this_ptr);
  iStack_18 = in_stack_00000008 << 8;
  corner_index = 0;
  iStack_14 = in_stack_0000000c << 8;
  iStack_1c = in_stack_00000014 << 8;
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
    *(int *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->z + iVar1) = iStack_18;
    *(int *)((int)&this_ptr_00->vertex_buffer_ptr->r + iVar1) = iStack_14;
    *(int *)((int)&this_ptr_00->vertex_buffer_ptr->g + iVar1) = in_stack_00000010 << 8;
    *(int *)((int)&this_ptr_00->vertex_buffer_ptr->fog + iVar1) = iStack_1c;
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
  uStack_5c = 0;
  uStack_58 = 2;
  uStack_54 = 6;
  uStack_50 = 4;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr2,&SStack_74);
  uStack_5c = 1;
  uStack_58 = 3;
  uStack_54 = 7;
  uStack_50 = 5;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr2,&SStack_74);
  uStack_54 = 3;
  uStack_5c = 0;
  uStack_58 = 1;
  uStack_50 = 2;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr2,&SStack_74);
  uStack_5c = 4;
  uStack_58 = 5;
  uStack_54 = 7;
  uStack_50 = 6;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr2,&SStack_74);
  uStack_54 = 7;
  uStack_5c = 2;
  uStack_58 = 3;
  uStack_50 = 6;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr2,&SStack_74);
  uStack_58 = 1;
  uStack_50 = 4;
  uStack_5c = 0;
  uStack_54 = 5;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr2,&SStack_74);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(this_ptr);
  return;
}

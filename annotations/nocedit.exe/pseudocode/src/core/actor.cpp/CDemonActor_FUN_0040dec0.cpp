// Name: core_actor.cpp_CDemonActor_FUN_0040dec0
// Address: 0040dec0
// Address Range: [[0040dec0, 0040e125]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_FUN_0040dec0(CDemonActor * this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_FUN_0040dec0(CDemonActor *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  int iVar1;
  uint corner_index;
  CDemonActor *in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  SMRGLHeaderPrimitive SStack_6c;
  uint uStack_54;
  uint uStack_50;
  byte local_4c [32];
  CVector3f CStack_2c;
  CVector3i CStack_20;
  int iStack_14;
  
  (*this_ptr->vtable->getBoundingBox)(this_ptr,(CBoundingBox3D *)local_4c);
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_0000000c);
  corner_index = 0;
  iStack_14 = in_stack_0000001c << 8;
  iVar1 = 0;
  do {
    core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
              ((CBoundingBox3D *)(local_4c + 8),&CStack_2c,corner_index);
    CStack_20.x = (int)ROUND(CStack_2c.x * 256.0f);
    CStack_20.y = (int)ROUND(CStack_2c.y * 256.0f);
    CStack_20.z = (int)ROUND(CStack_2c.z * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar1),&CStack_20);
    this_ptr_00 = g_CDemonRendererPtr2;
    *(int *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->light + iVar1) = in_stack_00000010 << 8;
    *(int *)((int)&this_ptr_00->vertex_buffer_ptr->color + iVar1) = in_stack_00000014 << 8;
    *(int *)((int)&this_ptr_00->vertex_buffer_ptr->fog + iVar1) = in_stack_00000018 << 8;
    *(int *)((int)&this_ptr_00->vertex_buffer_ptr->w_recip + iVar1) = iStack_14;
    *(uint *)((int)&this_ptr_00->vertex_buffer_ptr->u + iVar1) = 0x800000;
    corner_index = corner_index + 1;
    *(uint *)((int)&this_ptr_00->vertex_buffer_ptr->v + iVar1) = 0x800000;
    iVar1 = iVar1 + 0x30;
  } while ((int)corner_index < 8);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(this_ptr_00,&DAT_0066e158);
  SStack_6c.base.count = 4;
  SStack_6c.surface_normal.D = 0;
  SStack_6c.surface_normal.C = 0;
  SStack_6c.surface_normal.B = 0;
  SStack_6c.surface_normal.A = 0;
  uStack_54 = 0;
  uStack_50 = 2;
  local_4c._0_4_ = 8.40779e-45;
  local_4c._4_4_ = 5.60519e-45;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr2,&SStack_6c);
  uStack_54 = 1;
  uStack_50 = 3;
  local_4c._0_4_ = 9.80909e-45;
  local_4c._4_4_ = 7.00649e-45;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr2,&SStack_6c);
  local_4c._0_4_ = 4.2039e-45;
  uStack_54 = 0;
  uStack_50 = 1;
  local_4c._4_4_ = 2.8026e-45;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr2,&SStack_6c);
  uStack_54 = 4;
  uStack_50 = 5;
  local_4c._0_4_ = 9.80909e-45;
  local_4c._4_4_ = 8.40779e-45;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr2,&SStack_6c);
  local_4c._0_4_ = 9.80909e-45;
  uStack_54 = 2;
  uStack_50 = 3;
  local_4c._4_4_ = 8.40779e-45;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr2,&SStack_6c);
  uStack_50 = 1;
  local_4c._4_4_ = 5.60519e-45;
  uStack_54 = 0;
  local_4c._0_4_ = 7.00649e-45;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr2,&SStack_6c);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_0000000c);
  return;
}

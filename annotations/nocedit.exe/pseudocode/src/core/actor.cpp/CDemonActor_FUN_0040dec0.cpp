// Name: core_actor.cpp_CDemonActor_FUN_0040dec0
// Address: 0040dec0
// Address Range: [[0040dec0, 0040e125]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_FUN_0040dec0(CDemonActor * this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_FUN_0040dec0(CDemonActor *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  BADSPACEBASE *in_ESP;
  int iVar1;
  uint corner_index;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  CDemonActor *in_stack_00000018;
  int in_stack_00000024;
  int in_stack_00000028;
  CDemonActor *in_stack_00000040;
  CBoundingBox3D CStack_34;
  CVector3f CStack_1c;
  
  (*this_ptr->vtable->getBoundingBox)(this_ptr,(CBoundingBox3D *)&stack0xffffffb4);
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000018);
  corner_index = 0;
  iVar1 = 0;
  do {
    core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(&CStack_34,&CStack_1c,corner_index);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar1),(CVector3i *)&stack0xfffffff4);
    this_ptr_00 = g_CDemonRendererPtr;
    *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar1) = in_stack_00000008
    ;
    *(uint *)((int)&this_ptr_00->vertex_buffer_ptr->color + iVar1) = in_stack_0000000c;
    *(int *)((int)&this_ptr_00->vertex_buffer_ptr->fog + iVar1) = in_stack_00000028 << 8;
    *(int *)((int)&this_ptr_00->vertex_buffer_ptr->w_recip + iVar1) = in_stack_00000024 << 8;
    *(uint *)((int)&this_ptr_00->vertex_buffer_ptr->u + iVar1) = 0x800000;
    corner_index = corner_index + 1;
    *(uint *)((int)&this_ptr_00->vertex_buffer_ptr->v + iVar1) = 0x800000;
    iVar1 = iVar1 + 0x30;
  } while ((int)corner_index < 8);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(this_ptr_00,&DAT_0066e158);
  CStack_34.min.x = 2.8026e-45;
  CStack_34.min.y = 8.40779e-45;
  CStack_34.min.z = 5.60519e-45;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffffb0);
  CStack_34.min.x = 1.4013e-45;
  CStack_34.min.y = 4.2039e-45;
  CStack_34.min.z = 9.80909e-45;
  CStack_34.max.x = 7.00649e-45;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffffb4);
  CStack_34.max.x = 4.2039e-45;
  CStack_34.min.y = 0.0;
  CStack_34.min.z = 1.4013e-45;
  CStack_34.max.y = 2.8026e-45;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffffb8);
  CStack_34.min.z = 5.60519e-45;
  CStack_34.max.x = 7.00649e-45;
  CStack_34.max.y = 9.80909e-45;
  CStack_34.max.z = 8.40779e-45;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffffbc);
  CStack_34.max.z = 9.80909e-45;
  CStack_34.max.x = 2.8026e-45;
  CStack_34.max.y = 4.2039e-45;
  CStack_1c.x = 8.40779e-45;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffffc0);
  CStack_34.max.z = 1.4013e-45;
  CStack_1c.y = 5.60519e-45;
  CStack_34.max.y = 0.0;
  CStack_1c.x = 7.00649e-45;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffffc4);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000040);
  return;
}

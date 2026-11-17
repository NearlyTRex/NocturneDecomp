// Name: core_fire.cpp_CPopcorn_render_FUN_0049b9d0
// Address: 0049b9d0
// Address Range: [[0049b9d0, 0049bd37]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CPopcorn_render_FUN_0049b9d0(CPopcorn *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CPopcorn_render_FUN_0049b9d0(CPopcorn *this_ptr)

{
  SRenderVertex *vertex_ptr;
  int iVar1;
  byte bVar2;
  uint auStackY_1060 [1002];
  CVector3i *rotation;
  SMRGLHeaderPrimitive SStack_a0;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  CVector3i CStack_78;
  CVector3i CStack_6c;
  CVector3i CStack_60;
  CVector3i CStack_54;
  CVector3i CStack_48;
  CVector3i CStack_3c;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  CVector3i CStack_24;
  CVector3i CStack_18;
  
  bVar2 = 0;
  vertex_ptr = g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr;
  CStack_48.x = (int)ROUND((this_ptr->base).position.x * 256.0f);
  CStack_48.y = (int)ROUND((this_ptr->base).position.y * 256.0f);
  CStack_48.z = (int)ROUND((this_ptr->base).position.z * 256.0f);
  engine_special_cpp_transformPoint_FUN_0055d9ec(&vertex_ptr->projected_vertex,&CStack_48);
  iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0046cad0
                    (g_CDemonRenderer_PTR_0060b280,vertex_ptr);
  if (iVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (g_CDemonRenderer_PTR_0060b280,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046b650
            (g_CDemonRenderer_PTR_0060b280,&CStack_78);
  rotation = (CVector3i *)0x0;
  CStack_60.x = CStack_78.x;
  *(uint *)((int)&CStack_60 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&CStack_78 + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&CStack_60 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&CStack_78 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
            (g_CDemonRenderer_PTR_0060b280,&CStack_60,rotation);
  uStack_30 = 0xbe000000;
  uStack_2c = 0xbe000000;
  uStack_28 = 0;
  CStack_18.x = (int)ROUND(256.0f * -0.125);
  CStack_18.y = (int)ROUND(256.0f * -0.125);
  CStack_18.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr->projected_vertex,&CStack_18);
  uStack_30 = 0x3e000000;
  uStack_2c = 0xbe000000;
  uStack_28 = 0;
  CStack_3c.x = (int)ROUND(256.0f * 0.125);
  CStack_3c.y = (int)ROUND(256.0f * -0.125);
  CStack_3c.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[1].projected_vertex,&CStack_3c);
  uStack_30 = 0x3e000000;
  uStack_2c = 0x3e000000;
  uStack_28 = 0;
  CStack_6c.x = (int)ROUND(256.0f * 0.125);
  CStack_6c.y = (int)ROUND(256.0f * 0.125);
  CStack_6c.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[2].projected_vertex,&CStack_6c);
  uStack_30 = 0xbe000000;
  uStack_2c = 0x3e000000;
  uStack_28 = 0;
  CStack_54.x = (int)ROUND(256.0f * -0.125);
  CStack_54.y = (int)ROUND(256.0f * 0.125);
  CStack_54.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[3].projected_vertex,&CStack_54);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (g_CDemonRenderer_PTR_0060b280,&g_SMRGLTextureBasic_0061585c);
  (*((g_CDemonCamera_PTR_007bda74->base).vtable)->setupPerspectiveAndFog)
            (g_CDemonCamera_PTR_007bda74,(CVector3f *)this_ptr,(SProjectedVertex *)0x0);
  g_SRenderVertex_ARRAY_00622014[0].u = 0x80000;
  g_SRenderVertex_ARRAY_00622014[0].v = 0xf80000;
  g_SRenderVertex_ARRAY_00622014[1].u = 0xf80000;
  g_SRenderVertex_ARRAY_00622014[1].v = 0xf80000;
  g_SRenderVertex_ARRAY_00622014[2].u = 0xf80000;
  g_SRenderVertex_ARRAY_00622014[2].v = 0x80000;
  g_SRenderVertex_ARRAY_00622014[3].u = 0x80000;
  g_SRenderVertex_ARRAY_00622014[0].a = 0xffff - g_INT_01c38aec;
  g_SRenderVertex_ARRAY_00622014[3].v = 0x80000;
  CStack_24.x = (int)ROUND((this_ptr->base).position.x * 256.0f);
  CStack_24.y = (int)ROUND((this_ptr->base).position.y * 256.0f);
  CStack_24.z = (int)ROUND((this_ptr->base).position.z * 256.0f);
  g_SRenderVertex_ARRAY_00622014[1].a = g_SRenderVertex_ARRAY_00622014[0].a;
  g_SRenderVertex_ARRAY_00622014[2].a = g_SRenderVertex_ARRAY_00622014[0].a;
  g_SRenderVertex_ARRAY_00622014[3].a = g_SRenderVertex_ARRAY_00622014[0].a;
  core_set_cpp_CDemonSet_computeLighting_FUN_005317c0
            (g_CDemonSetPtr,&CStack_24,&g_CVector3i_01c3dec4,0,4);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(g_CDemonRenderer_PTR_0060b280,1);
  SStack_a0.surface_normal.D.i = 0;
  SStack_a0.surface_normal.C.i = 0;
  SStack_a0.surface_normal.B.i = 0;
  SStack_a0.surface_normal.A.i = 0;
  uStack_88 = 0;
  uStack_7c = 3;
  SStack_a0.base.count = 4;
  uStack_84 = 1;
  uStack_80 = 2;
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
            (g_CDemonRenderer_PTR_0060b280,&SStack_a0);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(g_CDemonRenderer_PTR_0060b280,0);
  engine_drender_cpp_pop_FUN_0046b4a0();
  return;
}

// Name: core_fire.cpp_CSpark_render_FUN_004c0420
// Address: 004c0420
// Address Range: [[004c0420, 004c0ab5]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CSpark_render_FUN_004c0420(CSpark *this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004c0a9d) */

void __cdecl core_fire_cpp_CSpark_render_FUN_004c0420(CSpark *this_ptr)

{
  SRenderVertex *vertex_ptr;
  float fVar1;
  uint uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  SMRGLTextureBasic *texture;
  float fStack_d4;
  CVector3i local_d0;
  CVector3i CStack_c4;
  float local_b8;
  float local_b4;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  CVector3i local_a0;
  CVector3i CStack_94;
  CVector3f CStack_88;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  CVector3i local_70;
  CVector3i local_64;
  CVector3i CStack_58;
  CVector3i local_4c;
  CVector3i aCStack_40 [2];
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  vertex_ptr = g_CDemonRendererPtr2->vertex_buffer_ptr;
  local_64.x = (int)ROUND((this_ptr->base).position.x * 256.0f);
  local_64.y = (int)ROUND((this_ptr->base).position.y * 256.0f);
  local_64.z = (int)ROUND((this_ptr->base).position.z * 256.0f);
  engine_special_cpp_transformPoint_FUN_005b5a25(&vertex_ptr->projected_vertex,&local_64);
  iVar6 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0048dc50(g_CDemonRendererPtr2,vertex_ptr);
  if (iVar6 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
            (g_CDemonRendererPtr2,&g_BillboardCameraRight,(CVector3i *)0x0);
  local_d0.x = (int)ROUND(256.0f * -0.4);
  local_d0.y = (int)ROUND(256.0f * -0.4);
  local_d0.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_d0);
  local_4c.x = (int)ROUND(256.0f * 0.4);
  local_4c.y = (int)ROUND(256.0f * -0.4);
  local_4c.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_4c);
  local_a0.x = (int)ROUND(256.0f * 0.4);
  local_a0.y = (int)ROUND(256.0f * 0.4);
  local_a0.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_a0);
  local_70.x = (int)ROUND(256.0f * -0.4);
  local_70.y = (int)ROUND(256.0f * 0.4);
  local_70.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_70);
  uVar2 = this_ptr->spark_type;
  if (uVar2 == 0) {
    texture = &g_FireEffectSparkTexture;
  }
  else if (uVar2 < 2) {
    texture = &g_FireEffectBlueSparkTexture;
  }
  else {
    if (uVar2 != 2) goto LAB_004c04af;
    texture = &g_FireEffectGreenSparkTexture;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr2,texture);
LAB_004c04af:
  (*((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)
            (g_CurrentSceneCamera,(CVector3f *)this_ptr,(SProjectedVertex *)0x0);
  lVar3 = (longlong)this_ptr->intensity_current * (longlong)(0xffff - g_PerspectiveReciprocal);
  g_RenderVertexBuffer[0].a = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
  g_RenderVertexBuffer[0].r = 0xffff;
  g_RenderVertexBuffer[0].g = 0xffff;
  g_RenderVertexBuffer[0].b = 0xffff;
  g_RenderVertexBuffer[1].r = 0xffff;
  g_RenderVertexBuffer[1].g = 0xffff;
  g_RenderVertexBuffer[1].b = 0xffff;
  g_RenderVertexBuffer[2].r = 0xffff;
  g_RenderVertexBuffer[2].g = 0xffff;
  g_RenderVertexBuffer[2].b = 0xffff;
  g_RenderVertexBuffer[3].r = 0xffff;
  g_RenderVertexBuffer[3].g = 0xffff;
  g_RenderVertexBuffer[3].b = 0xffff;
  g_RenderVertexBuffer[1].a = g_RenderVertexBuffer[0].a;
  g_RenderVertexBuffer[2].a = g_RenderVertexBuffer[0].a;
  g_RenderVertexBuffer[3].a = g_RenderVertexBuffer[0].a;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0048bad0
            (g_CDemonRendererPtr2,&g_BillboardPrimitive.base);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  CStack_88.y = (this_ptr->base).position.x;
  CStack_88.z = (this_ptr->base).position.y;
  fVar1 = (this_ptr->base).velocity.x;
  fStack_74 = (this_ptr->base).velocity.y;
  local_70.x = (int)(this_ptr->base).velocity.z;
  local_d0.x = 0x3f800000;
  iVar6 = 0;
  fStack_d4 = 0.025;
  do {
    fStack_d4 = fStack_d4 * (float)0.69999999999999996;
    local_d0.x = (int)((float)0.69999999999999996 * (float)local_d0.x);
    fStack_74 = fStack_74 - fStack_d4 * (this_ptr->base).gravity_acceleration;
    local_a0.x = (int)((float)local_70.x * fStack_d4);
    CStack_88.y = CStack_88.y - fVar1 * fStack_d4;
    CStack_88.z = CStack_88.z - fStack_74 * fStack_d4;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,(CVector3f *)&CStack_88.y);
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
              (g_CDemonRendererPtr2,&g_BillboardCameraRight,(CVector3i *)0x0);
    fVar4 = -fStack_1c * (float)local_d0.x;
    CStack_58.y = (int)ROUND(fVar4 * 256.0f);
    CStack_58.z = (int)ROUND(fVar4 * 256.0f);
    local_4c.x = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,(CVector3i *)&CStack_58.y)
    ;
    fVar5 = fStack_1c * (float)local_d0.x;
    aCStack_40[0].y = (int)ROUND(fVar5 * 256.0f);
    aCStack_40[0].z = (int)ROUND(fVar4 * 256.0f);
    aCStack_40[1].x = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,
               (CVector3i *)&aCStack_40[0].y);
    CStack_c4.y = (int)ROUND(fVar5 * 256.0f);
    CStack_c4.z = (int)ROUND(fVar5 * 256.0f);
    engine_special_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,
               (CVector3i *)&CStack_c4.y);
    CStack_94.y = (int)ROUND(fVar4 * 256.0f);
    CStack_94.z = (int)ROUND(fVar5 * 256.0f);
    CStack_88.x = (float)(int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,
               (CVector3i *)&CStack_94.y);
    (*((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)
              (g_CurrentSceneCamera,(CVector3f *)this_ptr,(SProjectedVertex *)0x0);
    lVar3 = (longlong)this_ptr->intensity_current * (longlong)(0xffff - g_PerspectiveReciprocal);
    g_RenderVertexBuffer[0].a = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
    g_RenderVertexBuffer[0].r = 0xffff;
    g_RenderVertexBuffer[0].g = 0xffff;
    g_RenderVertexBuffer[0].b = 0xffff;
    g_RenderVertexBuffer[1].r = 0xffff;
    g_RenderVertexBuffer[1].g = 0xffff;
    g_RenderVertexBuffer[1].b = 0xffff;
    g_RenderVertexBuffer[2].r = 0xffff;
    g_RenderVertexBuffer[2].g = 0xffff;
    g_RenderVertexBuffer[2].b = 0xffff;
    g_RenderVertexBuffer[3].r = 0xffff;
    g_RenderVertexBuffer[3].g = 0xffff;
    g_RenderVertexBuffer[3].b = 0xffff;
    g_RenderVertexBuffer[1].a = g_RenderVertexBuffer[0].a;
    g_RenderVertexBuffer[2].a = g_RenderVertexBuffer[0].a;
    g_RenderVertexBuffer[3].a = g_RenderVertexBuffer[0].a;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0048bad0
              (g_CDemonRendererPtr2,&g_BillboardPrimitive.base);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
    iVar6 = iVar6 + 1;
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  } while (iVar6 < 3);
  return;
}

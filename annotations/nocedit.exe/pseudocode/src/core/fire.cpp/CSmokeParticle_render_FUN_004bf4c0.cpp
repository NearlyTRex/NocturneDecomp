// Name: core_fire.cpp_CSmokeParticle_render_FUN_004bf4c0
// Address: 004bf4c0
// Address Range: [[004bf4c0, 004bf7e2] [004bf7e6, 004bf7ed]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CSmokeParticle_render_FUN_004bf4c0(CSmokeParticle *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CSmokeParticle_render_FUN_004bf4c0(CSmokeParticle *this_ptr)

{
  SRenderVertex *vertex_ptr;
  longlong lVar1;
  int iVar2;
  double dVar3;
  CVector3i local_64;
  float local_58;
  uint local_54;
  CVector3i local_50;
  CVector3i local_44;
  CVector3i local_38;
  CVector3i local_2c;
  float local_20;
  int local_1c;
  float local_18;
  
  vertex_ptr = g_CDemonRendererPtr2->vertex_buffer_ptr;
  local_64.x = (int)ROUND((this_ptr->position).x * 256.0f);
  local_64.y = (int)ROUND((this_ptr->position).y * 256.0f);
  local_64.z = (int)ROUND((this_ptr->position).z * 256.0f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25(&vertex_ptr->projected_vertex,&local_64);
  iVar2 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0048dc50(g_CDemonRendererPtr2,vertex_ptr);
  if (iVar2 != 0) {
    dVar3 = round((double)this_ptr->age);
    local_1c = (int)ROUND(dVar3);
    if ((local_1c < 0) || (0x27 < local_1c)) {
      g_CurrentFilename = "..\\core\\fire.cpp";
      g_CurrentLineNumber = 0x11c;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CSmokeParticle::render - Frame out of range");
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr2,g_FireEffectSmokeParticleTextures + local_1c);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,&this_ptr->position);
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
              (g_CDemonRendererPtr2,&g_BillboardCameraRight,(CVector3i *)0x0);
    local_18 = this_ptr->drag_factor;
    local_54 = 0;
    local_64.z = (int)-local_18;
    local_2c.x = (int)ROUND((float)local_64.z * 256.0f);
    local_2c.y = (int)ROUND((float)local_64.z * 256.0f);
    local_2c.z = (int)ROUND(256.0f * 0.0);
    local_58 = (float)local_64.z;
    local_20 = (float)local_64.z;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_2c);
    local_64.z = (int)local_18;
    local_58 = local_20;
    local_54 = 0;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,
               (CVector3i *)&stack0xffffff8c);
    local_54 = 0;
    local_64.z = (int)local_18;
    local_58 = local_18;
    local_38.x = (int)ROUND(local_18 * 256.0f);
    local_38.y = (int)ROUND(local_18 * 256.0f);
    local_38.z = (int)ROUND(256.0f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_38);
    local_64.z = (int)local_20;
    local_58 = local_18;
    local_54 = 0;
    local_50.x = (int)ROUND(local_20 * 256.0f);
    local_50.y = (int)ROUND(local_18 * 256.0f);
    local_50.z = (int)ROUND(256.0f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_50);
    g_RenderVertexBuffer[0].u = 7.34684e-40;
    g_RenderVertexBuffer[0].v = 2.2775203e-38;
    g_RenderVertexBuffer[1].u = 2.2775203e-38;
    g_RenderVertexBuffer[1].v = 2.2775203e-38;
    g_RenderVertexBuffer[2].u = 2.2775203e-38;
    g_RenderVertexBuffer[2].v = 7.34684e-40;
    g_RenderVertexBuffer[3].u = 7.34684e-40;
    g_RenderVertexBuffer[3].v = 7.34684e-40;
    local_44.x = (int)ROUND((this_ptr->position).x * 256.0f);
    local_44.y = (int)ROUND((this_ptr->position).y * 256.0f);
    local_44.z = (int)ROUND((this_ptr->position).z * 256.0f);
    core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
              (g_CDemonSetPtr,&local_44,&g_BillboardCameraUp,0,4);
    (*((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)();
    lVar1 = (longlong)(0xffff - (int)g_PerspectiveReciprocal) * (longlong)this_ptr->alpha_value;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
              (g_CDemonRendererPtr2,(uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
              (g_CDemonRendererPtr2,&g_BillboardPrimitive.base);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  }
  return;
}

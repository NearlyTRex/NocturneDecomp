// Name: core_fire.cpp_CSmokeParticle_render_FUN_004bf4c0
// Address: 004bf4c0
// Address Range: [[004bf4c0, 004bf7e2] [004bf7e6, 004bf7ed]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CSmokeParticle_render_FUN_004bf4c0(CSmokeParticle * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CSmokeParticle_render_FUN_004bf4c0(CSmokeParticle *this_ptr)

{
  SRenderVertex *vertex_ptr;
  longlong lVar1;
  int iVar2;
  uint extraout_EDX;
  BADSPACEBASE *in_ESP;
  float10 fVar3;
  CVector3i local_70;
  CVector3i local_64;
  float local_58;
  float local_54;
  uint local_50;
  CVector3i local_4c;
  CVector3i local_40;
  CVector3i local_34;
  CVector3i local_28;
  float local_1c;
  int local_18;
  float local_14;
  
  vertex_ptr = g_CDemonRendererPtr->vertex_buffer_ptr;
  local_64.x = (int)ROUND((this_ptr->position).x * 256f);
  local_64.y = (int)ROUND((this_ptr->position).y * 256f);
  local_64.z = (int)ROUND((this_ptr->position).z * 256f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25(&vertex_ptr->projected_vertex,&local_64);
  iVar2 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0048dc50(g_CDemonRendererPtr,vertex_ptr);
  if (iVar2 != 0) {
    fVar3 = (float10)this_ptr->age;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,iVar2));
    local_18 = (int)ROUND(fVar3);
    if ((local_18 < 0) || (0x27 < local_18)) {
      g_CurrentFilename = "..\\core\\fire.cpp";
      g_CurrentLineNumber = 0x11c;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CSmokeParticle::render - Frame out of range");
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,g_FireEffectSmokeParticleTextures + local_18);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,&this_ptr->position);
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
              (g_CDemonRendererPtr,&g_BillboardCameraRight,(CVector3i *)0x0);
    local_14 = this_ptr->drag_factor;
    local_50 = 0;
    local_58 = -local_14;
    local_28.x = (int)ROUND(local_58 * 256f);
    local_28.y = (int)ROUND(local_58 * 256f);
    local_28.z = (int)ROUND(256f * 0.0);
    local_54 = local_58;
    local_1c = local_58;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_28);
    local_58 = local_14;
    local_54 = local_1c;
    local_50 = 0;
    local_70.x = (int)ROUND(local_14 * 256f);
    local_70.y = (int)ROUND(local_1c * 256f);
    local_70.z = (int)ROUND(256f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_70);
    local_50 = 0;
    local_58 = local_14;
    local_54 = local_14;
    local_34.x = (int)ROUND(local_14 * 256f);
    local_34.y = (int)ROUND(local_14 * 256f);
    local_34.z = (int)ROUND(256f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_34);
    local_58 = local_1c;
    local_54 = local_14;
    local_50 = 0;
    local_4c.x = (int)ROUND(local_1c * 256f);
    local_4c.y = (int)ROUND(local_14 * 256f);
    local_4c.z = (int)ROUND(256f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_4c);
    g_RenderVertexBuffer[0].u = 7.34684e-40;
    g_RenderVertexBuffer[0].v = 2.2775203e-38;
    g_RenderVertexBuffer[1].u = 2.2775203e-38;
    g_RenderVertexBuffer[1].v = 2.2775203e-38;
    g_RenderVertexBuffer[2].u = 2.2775203e-38;
    g_RenderVertexBuffer[2].v = 7.34684e-40;
    g_RenderVertexBuffer[3].u = 7.34684e-40;
    g_RenderVertexBuffer[3].v = 7.34684e-40;
    local_40.x = (int)ROUND((this_ptr->position).x * 256f);
    local_40.y = (int)ROUND((this_ptr->position).y * 256f);
    local_40.z = (int)ROUND((this_ptr->position).z * 256f);
    core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
              (g_CDemonSetPtr,&local_40,&g_BillboardCameraUp,0,4);
    (*(code *)((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)();
    lVar1 = (longlong)(0xffff - (int)g_PerspectiveReciprocal) * (longlong)this_ptr->alpha_value;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
              (g_CDemonRendererPtr,(uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
              (g_CDemonRendererPtr,&g_BillboardPrimitive.base);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  }
  return;
}

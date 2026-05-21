// Name: core_fire.cpp_CFireball_render_FUN_004c0e70
// Address: 004c0e70
// MANUAL RECONSTRUCTION
// Address Range: [[004c0e70, 004c1687]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireball_render_FUN_004c0e70(CFireball *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireball_render_FUN_004c0e70(CFireball *this_ptr)

{
  CBoundingBox3D *pCVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  CKeyFramedModel *pCVar6;
  int iVar7;
  CKeyFramedModelInstance *this_ptr_00;
  SMRGLTextureBasic *texture;
  CBoundingBox3D local_e0;
  CVector3f local_vel;
  CVector3i local_quad;
  CVector3f local_pos;
  float local_1c;
  float local_18;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
            (g_CDemonRendererPtr2,(CVector3i *)&this_ptr->rotation_angle1,(CVector3i *)0x0);
  if (this_ptr->lighting_active == 0) {
    this_ptr_00 = &g_FireEffectFireballModel;
  }
  else if (this_ptr->lighting_active == 1) {
    this_ptr_00 = &g_FireEffectFireballSmallModel;
  }
  else {
    this_ptr_00 = &g_FireEffectFireballGreenModel;
  }
  pCVar6 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr_00);
  pCVar1 = pCVar6->frame_bounds;
  local_e0 = *pCVar1;
  iVar7 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(&local_e0);
  if (iVar7 != 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_0056d380
              (g_CDemonSetPtr,(CVector3f *)this_ptr,(UOrientationVector *)&g_ZeroVector,
               &local_e0.min,&local_e0.max,(CMatrix3x3f *)0x0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(this_ptr_00,0.0,-1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  if ((iVar7 != 0) &&
     (iVar7 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar7 == 0)) {
    g_RenderVertexBuffer[0].u = 0x8 << 16;
    g_RenderVertexBuffer[0].v = 0xf8 << 16;
    g_RenderVertexBuffer[1].u = 0xf8 << 16;
    g_RenderVertexBuffer[1].v = 0xf8 << 16;
    g_RenderVertexBuffer[2].u = 0xf8 << 16;
    g_RenderVertexBuffer[2].v = 0x8 << 16;
    g_RenderVertexBuffer[3].u = 0x8 << 16;
    g_RenderVertexBuffer[3].v = 0x8 << 16;
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
              (g_CDemonRendererPtr2,&g_BillboardCameraRight,(CVector3i *)0x0);
    local_1c = 0.666f;
    fVar2 = -local_1c;
    local_quad.x = (int)ROUND(fVar2 * 256.0f);
    local_quad.y = (int)ROUND(fVar2 * 256.0f);
    local_quad.z = 0;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_quad);
    local_quad.x = (int)ROUND(local_1c * 256.0f);
    local_quad.y = (int)ROUND(fVar2 * 256.0f);
    local_quad.z = 0;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_quad);
    local_quad.x = (int)ROUND(local_1c * 256.0f);
    local_quad.y = (int)ROUND(local_1c * 256.0f);
    local_quad.z = 0;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_quad);
    local_quad.x = (int)ROUND(fVar2 * 256.0f);
    local_quad.y = (int)ROUND(local_1c * 256.0f);
    local_quad.z = 0;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_quad);
    if (this_ptr->lighting_active == 1) {
      texture = &g_FireEffectRedSparkTexture;
    }
    else if (this_ptr->lighting_active == 2) {
      texture = &g_FireEffectGreenSparkTexture;
    }
    else {
      texture = &g_FireEffectSparkTexture;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr2,texture);
    lVar3 = (longlong)this_ptr->timer * (longlong)(0xffff - g_PerspectiveReciprocal);
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
    if ((this_ptr->lighting_active != 1) && (this_ptr->lighting_active != 2)) {
      local_pos = (this_ptr->base).position;
      local_vel = (this_ptr->base).velocity;
      iVar7 = 0;
      local_e0.min.y = 0.1;
      local_e0.min.x = 1.0;
      local_18 = 4.0f;
      do {
        local_e0.min.y = local_e0.min.y * (float)0.69999999999999996;
        local_e0.min.x = (float)0.69999999999999996 * local_e0.min.x;
        local_vel.y = local_vel.y - local_e0.min.y * (this_ptr->base).gravity_acceleration;
        local_pos.x = local_pos.x - local_vel.x * local_e0.min.y;
        local_pos.y = local_pos.y - local_vel.y * local_e0.min.y;
        local_pos.z = local_pos.z - local_vel.z * local_e0.min.y;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr2,&local_pos);
        engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
                  (g_CDemonRendererPtr2,&g_BillboardCameraRight,(CVector3i *)0x0);
        fVar4 = -local_18 * local_e0.min.x;
        fVar5 = local_18 * local_e0.min.x;
        local_quad.x = (int)ROUND(fVar4 * 256.0f);
        local_quad.y = (int)ROUND(fVar4 * 256.0f);
        local_quad.z = 0;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_quad);
        local_quad.x = (int)ROUND(fVar5 * 256.0f);
        local_quad.y = (int)ROUND(fVar4 * 256.0f);
        local_quad.z = 0;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_quad);
        local_quad.x = (int)ROUND(fVar5 * 256.0f);
        local_quad.y = (int)ROUND(fVar5 * 256.0f);
        local_quad.z = 0;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_quad);
        local_quad.x = (int)ROUND(fVar4 * 256.0f);
        local_quad.y = (int)ROUND(fVar5 * 256.0f);
        local_quad.z = 0;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_quad);
        (*((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)
                  (g_CurrentSceneCamera,(CVector3f *)this_ptr,(SProjectedVertex *)0x0);
        lVar3 = (longlong)this_ptr->timer * (longlong)(0xffff - g_PerspectiveReciprocal);
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
        iVar7 = iVar7 + 1;
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
      } while (iVar7 < 3);
    }
  }
  return;
}

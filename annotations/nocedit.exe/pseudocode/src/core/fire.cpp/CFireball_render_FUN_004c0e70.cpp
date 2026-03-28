// Name: core_fire.cpp_CFireball_render_FUN_004c0e70
// Address: 004c0e70
// Address Range: [[004c0e70, 004c0f6d] [004c0f7c, 004c0fa4]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireball_render_FUN_004c0e70(CFireball *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireball_render_FUN_004c0e70(CFireball *this_ptr)

{
  CVector3f *pCVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  CKeyFramedModel *pCVar6;
  int iVar7;
  CKeyFramedModelInstance *this_ptr_00;
  SMRGLTextureBasic *texture;
  CBoundingBox3D local_e0;
  CVector3i local_c8;
  CVector3i local_bc;
  CVector3f local_b0;
  float local_a4;
  float local_a0;
  float local_9c;
  CVector3i local_98;
  CVector3i local_8c;
  CVector3i local_80;
  CVector3i local_74;
  float local_68;
  float local_64;
  float local_60;
  CVector3i local_5c;
  float local_50;
  float local_4c;
  CVector3i local_44 [2];
  float local_28;
  float local_20;
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
  local_e0.min.x = pCVar1->x;
  local_e0.min.y = pCVar1->y;
  local_e0.min.z = pCVar1->z;
  local_e0.max.x = pCVar1[1].x;
  local_e0.max.y = pCVar1[1].y;
  local_e0.max.z = pCVar1[1].z;
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
    g_RenderVertexBuffer[0].u = 0x80000;
    g_RenderVertexBuffer[0].v = 0xf80000;
    g_RenderVertexBuffer[1].u = 0xf80000;
    g_RenderVertexBuffer[1].v = 0xf80000;
    g_RenderVertexBuffer[2].u = 0xf80000;
    g_RenderVertexBuffer[2].v = 0x80000;
    g_RenderVertexBuffer[3].u = 0x80000;
    g_RenderVertexBuffer[3].v = 0x80000;
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
              (g_CDemonRendererPtr2,&g_BillboardCameraRight,(CVector3i *)0x0);
    fVar2 = -local_1c;
    local_44[0].x = 0;
    local_74.y = (int)ROUND(fVar2 * 256.0f);
    local_74.z = (int)ROUND(fVar2 * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,(CVector3i *)&local_74.y);
    local_44[0].x = 0;
    local_98.y = (int)ROUND(local_1c * 256.0f);
    local_98.z = (int)ROUND(fVar2 * 256.0f);
    local_8c.x = (int)ROUND(256.0f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)&local_98.y
              );
    local_44[0].x = 0;
    local_bc.y = (int)ROUND(local_1c * 256.0f);
    local_bc.z = (int)ROUND(local_1c * 256.0f);
    local_b0.x = (float)(int)ROUND(256.0f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)&local_bc.y
              );
    local_44[0].x = 0;
    local_8c.y = (int)ROUND(fVar2 * 256.0f);
    local_8c.z = (int)ROUND(local_1c * 256.0f);
    local_80.x = (int)ROUND(256.0f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)&local_8c.y
              );
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
    lVar3 = (longlong)this_ptr->timer * (longlong)(0xffff - (int)g_PerspectiveReciprocal);
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
    engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
              (g_CDemonRendererPtr2,&g_BillboardPrimitive.base);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
    if ((this_ptr->lighting_active != 1) && (this_ptr->lighting_active != 2)) {
      local_b0.z = (this_ptr->base).position.x;
      fVar2 = (this_ptr->base).velocity.x;
      local_5c.x = (int)(this_ptr->base).velocity.y;
      iVar7 = 0;
      local_e0.min.y = 0.1;
      local_5c.y = (int)(this_ptr->base).velocity.z;
      local_e0.min.x = 1.0;
      do {
        local_e0.min.y = local_e0.min.y * (float)0.69999999999999996;
        local_e0.min.x = (float)0.69999999999999996 * local_e0.min.x;
        local_5c.x = (int)((float)local_5c.x -
                          local_e0.min.y * (this_ptr->base).gravity_acceleration);
        local_98.y = (int)((float)local_5c.y * local_e0.min.y);
        local_98.x = (int)((float)local_5c.x * local_e0.min.y);
        local_b0.z = local_b0.z - fVar2 * local_e0.min.y;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr2,(CVector3f *)&local_b0.z);
        engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
                  (g_CDemonRendererPtr2,&g_BillboardCameraRight,(CVector3i *)0x0);
        fVar4 = -local_18 * local_e0.min.x;
        local_44[0].y = 0;
        local_44[0].z = (int)ROUND(fVar4 * 256.0f);
        local_44[1].x = (int)ROUND(fVar4 * 256.0f);
        local_44[1].y = (int)ROUND(256.0f * 0.0);
        local_44[0].x = (int)fVar4;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,
                   (CVector3i *)&local_44[0].z);
        fVar5 = local_18 * local_e0.min.x;
        local_44[0].y = 0;
        local_5c.z = (int)ROUND(fVar5 * 256.0f);
        local_44[0].x = (int)fVar4;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,
                   (CVector3i *)&local_5c.z);
        local_44[0].y = 0;
        local_80.z = (int)ROUND(fVar5 * 256.0f);
        local_74.x = (int)ROUND(fVar5 * 256.0f);
        local_74.y = (int)ROUND(256.0f * 0.0);
        local_44[0].x = (int)fVar5;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,
                   (CVector3i *)&local_80.z);
        local_44[0].y = 0;
        local_c8.z = (int)ROUND(fVar4 * 256.0f);
        local_bc.x = (int)ROUND(fVar5 * 256.0f);
        local_bc.y = (int)ROUND(256.0f * 0.0);
        local_44[0].x = (int)fVar5;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,
                   (CVector3i *)&local_c8.z);
        (*((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)
                  (g_CurrentSceneCamera,(CVector3f *)this_ptr,0.0);
        lVar3 = (longlong)this_ptr->timer * (longlong)(0xffff - (int)g_PerspectiveReciprocal);
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
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr2,&g_BillboardPrimitive.base);
        engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
        iVar7 = iVar7 + 1;
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
      } while (iVar7 < 3);
    }
  }
  return;
}

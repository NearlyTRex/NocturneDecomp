// Name: core_fire.cpp_CFireball_render_FUN_004c0e70
// Address: 004c0e70
// Address Range: [[004c0e70, 004c0f6d] [004c0f7c, 004c0fa4]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireball_render_FUN_004c0e70(CFireball * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireball_render_FUN_004c0e70(CFireball *this_ptr)

{
  CVector3f *pCVar1;
  longlong lVar2;
  CKeyFramedModel *pCVar3;
  int iVar4;
  CKeyFramedModelInstance *this_ptr_00;
  BADSPACEBASE *in_ESP;
  SMRGLTextureBasic *texture;
  float local_e4;
  float local_e0;
  CBoundingBox3D local_dc;
  CVector3i local_c4;
  CVector3i local_b8;
  CVector3f local_ac;
  float local_a0;
  float local_9c;
  float local_98;
  CVector3i local_94;
  CVector3i local_88;
  CVector3i local_7c;
  CVector3i local_70;
  float local_64;
  float local_60;
  float local_5c;
  CVector3i local_58;
  float local_4c;
  float local_48;
  uint local_44;
  CVector3i local_40 [2];
  float fStack_24;
  float local_1c;
  float local_18;
  float fStack_14;
  
  local_1c = 0.5;
  if (this_ptr->lighting_active == 0) {
    local_1c = 4.0;
  }
  if (this_ptr->lighting_active == 2) {
    local_1c = 0.666;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
            (g_CDemonRendererPtr,(CVector3i *)&this_ptr->rotation_angle1,(CVector3i *)0x0);
  if (this_ptr->lighting_active == 0) {
    this_ptr_00 = &g_FireEffectFireballModel;
  }
  else if (this_ptr->lighting_active == 1) {
    this_ptr_00 = &g_FireEffectFireballSmallModel;
  }
  else {
    this_ptr_00 = &g_FireEffectFireballGreenModel;
  }
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr_00);
  pCVar1 = pCVar3->frame_bounds;
  local_dc.min.x = pCVar1->x;
  local_dc.min.y = pCVar1->y;
  local_dc.min.z = pCVar1->z;
  local_dc.max.x = pCVar1[1].x;
  local_dc.max.y = pCVar1[1].y;
  local_dc.max.z = pCVar1[1].z;
  iVar4 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(&local_dc);
  if (iVar4 != 0) {
    core_set_cpp_CDemonSet_FUN_0056d380(g_CDemonSetPtr);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(this_ptr_00,0.0,-1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  if ((iVar4 != 0) &&
     (iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
     iVar4 == 0)) {
    g_RenderVertexBuffer[0].u = 7.34684e-40;
    g_RenderVertexBuffer[0].v = 2.2775203e-38;
    g_RenderVertexBuffer[1].u = 2.2775203e-38;
    g_RenderVertexBuffer[1].v = 2.2775203e-38;
    g_RenderVertexBuffer[2].u = 2.2775203e-38;
    g_RenderVertexBuffer[2].v = 7.34684e-40;
    g_RenderVertexBuffer[3].u = 7.34684e-40;
    g_RenderVertexBuffer[3].v = 7.34684e-40;
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
              (g_CDemonRendererPtr,&g_BillboardCameraRight,(CVector3i *)0x0);
    local_4c = -local_1c;
    local_44 = 0;
    local_70.x = (int)ROUND(local_4c * 256f);
    local_70.y = (int)ROUND(local_4c * 256f);
    local_70.z = (int)ROUND(256f * 0.0);
    local_48 = local_4c;
    fStack_24 = local_4c;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_70);
    local_44 = 0;
    local_4c = local_1c;
    local_48 = fStack_24;
    local_94.x = (int)ROUND(local_1c * 256f);
    local_94.y = (int)ROUND(fStack_24 * 256f);
    local_94.z = (int)ROUND(256f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_94);
    local_4c = local_1c;
    local_48 = local_1c;
    local_44 = 0;
    local_b8.x = (int)ROUND(local_1c * 256f);
    local_b8.y = (int)ROUND(local_1c * 256f);
    local_b8.z = (int)ROUND(256f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_b8);
    local_4c = fStack_24;
    local_48 = local_1c;
    local_44 = 0;
    local_88.x = (int)ROUND(fStack_24 * 256f);
    local_88.y = (int)ROUND(local_1c * 256f);
    local_88.z = (int)ROUND(256f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_88);
    if (this_ptr->lighting_active == 1) {
      texture = &g_FireEffectRedSparkTexture;
    }
    else if (this_ptr->lighting_active == 2) {
      texture = &g_FireEffectGreenSparkTexture;
    }
    else {
      texture = &g_FireEffectSparkTexture;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,texture);
    lVar2 = (longlong)this_ptr->timer * (longlong)(0xffff - (int)g_PerspectiveReciprocal);
    g_RenderVertexBuffer[0].w_recip =
         (float)((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    g_RenderVertexBuffer[0].light = 9.18341e-41;
    g_RenderVertexBuffer[0].color = 0xffff;
    g_RenderVertexBuffer[0].fog = 9.18341e-41;
    g_RenderVertexBuffer[1].light = 9.18341e-41;
    g_RenderVertexBuffer[1].color = 0xffff;
    g_RenderVertexBuffer[1].fog = 9.18341e-41;
    g_RenderVertexBuffer[2].light = 9.18341e-41;
    g_RenderVertexBuffer[2].color = 0xffff;
    g_RenderVertexBuffer[2].fog = 9.18341e-41;
    g_RenderVertexBuffer[3].light = 9.18341e-41;
    g_RenderVertexBuffer[3].color = 0xffff;
    g_RenderVertexBuffer[3].fog = 9.18341e-41;
    g_RenderVertexBuffer[1].w_recip = g_RenderVertexBuffer[0].w_recip;
    g_RenderVertexBuffer[2].w_recip = g_RenderVertexBuffer[0].w_recip;
    g_RenderVertexBuffer[3].w_recip = g_RenderVertexBuffer[0].w_recip;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
    engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
              (g_CDemonRendererPtr,&g_BillboardPrimitive.base);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    if ((this_ptr->lighting_active != 1) && (this_ptr->lighting_active != 2)) {
      local_ac.x = (this_ptr->base).position.x;
      local_ac.y = (this_ptr->base).position.y;
      local_ac.z = (this_ptr->base).position.z;
      local_64 = (this_ptr->base).velocity.x;
      local_60 = (this_ptr->base).velocity.y;
      iVar4 = 0;
      local_e0 = 0.1;
      local_5c = (this_ptr->base).velocity.z;
      local_e4 = 1.0;
      do {
        local_e0 = local_e0 * (float)0.69999999999999996;
        local_e4 = (float)0.69999999999999996 * local_e4;
        local_a0 = local_64 * local_e0;
        local_60 = local_60 - local_e0 * (this_ptr->base).gravity_acceleration;
        local_98 = local_5c * local_e0;
        local_9c = local_60 * local_e0;
        local_ac.x = local_ac.x - local_a0;
        local_ac.z = local_ac.z - local_98;
        local_ac.y = local_ac.y - local_9c;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,&local_ac);
        engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
                  (g_CDemonRendererPtr,&g_BillboardCameraRight,(CVector3i *)0x0);
        local_4c = -local_1c * local_e4;
        local_44 = 0;
        local_40[0].x = (int)ROUND(local_4c * 256f);
        local_40[0].y = (int)ROUND(local_4c * 256f);
        local_40[0].z = (int)ROUND(256f * 0.0);
        local_48 = local_4c;
        local_18 = local_4c;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,local_40);
        local_4c = local_1c * local_e4;
        local_44 = 0;
        local_48 = local_18;
        local_58.x = (int)ROUND(local_4c * 256f);
        local_58.y = (int)ROUND(local_18 * 256f);
        local_58.z = (int)ROUND(256f * 0.0);
        fStack_14 = local_4c;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_58);
        local_44 = 0;
        local_4c = fStack_14;
        local_48 = fStack_14;
        local_7c.x = (int)ROUND(fStack_14 * 256f);
        local_7c.y = (int)ROUND(fStack_14 * 256f);
        local_7c.z = (int)ROUND(256f * 0.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_7c);
        local_4c = local_18;
        local_48 = fStack_14;
        local_44 = 0;
        local_c4.x = (int)ROUND(local_18 * 256f);
        local_c4.y = (int)ROUND(fStack_14 * 256f);
        local_c4.z = (int)ROUND(256f * 0.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_c4);
        (*((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)();
        lVar2 = (longlong)this_ptr->timer * (longlong)(0xffff - (int)g_PerspectiveReciprocal);
        g_RenderVertexBuffer[0].w_recip =
             (float)((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        g_RenderVertexBuffer[0].light = 9.18341e-41;
        g_RenderVertexBuffer[0].color = 0xffff;
        g_RenderVertexBuffer[0].fog = 9.18341e-41;
        g_RenderVertexBuffer[1].light = 9.18341e-41;
        g_RenderVertexBuffer[1].color = 0xffff;
        g_RenderVertexBuffer[1].fog = 9.18341e-41;
        g_RenderVertexBuffer[2].light = 9.18341e-41;
        g_RenderVertexBuffer[2].color = 0xffff;
        g_RenderVertexBuffer[2].fog = 9.18341e-41;
        g_RenderVertexBuffer[3].light = 9.18341e-41;
        g_RenderVertexBuffer[3].color = 0xffff;
        g_RenderVertexBuffer[3].fog = 9.18341e-41;
        g_RenderVertexBuffer[1].w_recip = g_RenderVertexBuffer[0].w_recip;
        g_RenderVertexBuffer[2].w_recip = g_RenderVertexBuffer[0].w_recip;
        g_RenderVertexBuffer[3].w_recip = g_RenderVertexBuffer[0].w_recip;
        engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr,&g_BillboardPrimitive.base);
        engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
        iVar4 = iVar4 + 1;
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
      } while (iVar4 < 3);
    }
  }
  return;
}

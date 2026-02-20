// Name: core_gore.cpp_CBloodParticle_render_FUN_004ebac0
// Address: 004ebac0
// Address Range: [[004ebac0, 004ebe5c] [004ec23c, 004ec280]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodParticle_render_FUN_004ebac0(CBloodParticle *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodParticle_render_FUN_004ebac0(CBloodParticle *this_ptr)

{
  SRenderVertex *output;
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fStack_f0;
  float fStack_ec;
  CVector3f CStack_e8;
  CVector3i CStack_dc;
  CVector3i local_d0;
  CVector3i CStack_c4;
  CVector3i local_b8;
  CVector3i CStack_ac;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  CVector3i local_94;
  CVector3i local_88;
  CVector3i local_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  CVector3i CStack_64;
  CVector3i local_58;
  float local_4c;
  float local_48;
  uint local_44;
  int local_28;
  int local_24;
  int local_20;
  float fStack_1c;
  float fStack_18;
  
  output = g_CDemonRendererPtr2->vertex_buffer_ptr;
  local_58.x = (int)ROUND((this_ptr->base).position.x * 256.0f);
  local_58.y = (int)ROUND((this_ptr->base).position.y * 256.0f);
  local_58.z = (int)ROUND((this_ptr->base).position.z * 256.0f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25(&output->projected_vertex,&local_58);
  if ((int)((output->projected_vertex).screen_x & -0x80000000) != 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
            (g_CDemonRendererPtr2,(CVector3i *)&g_ParticleCameraRotation,(CVector3i *)0x0);
  local_4c = -0.1;
  local_48 = -0.1;
  local_44 = 0;
  local_b8.x = (int)ROUND(256.0f * -0.1);
  local_b8.y = (int)ROUND(256.0f * -0.1);
  local_b8.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_b8);
  local_4c = 0.1;
  local_48 = -0.1;
  local_44 = 0;
  local_7c.x = (int)ROUND(256.0f * 0.1);
  local_7c.y = (int)ROUND(256.0f * -0.1);
  local_7c.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_7c);
  local_4c = 0.1;
  local_48 = 0.1;
  local_44 = 0;
  local_d0.x = (int)ROUND(256.0f * 0.1);
  local_d0.y = (int)ROUND(256.0f * 0.1);
  local_d0.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_d0);
  local_48 = 0.1;
  local_4c = -0.1;
  local_44 = 0;
  local_94.x = (int)ROUND(256.0f * -0.1);
  local_94.y = (int)ROUND(256.0f * 0.1);
  local_94.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_94);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&g_BloodParticleTexture);
  iVar3 = (this_ptr->texture_index & 3U) * 0x400000;
  g_RenderVertexBuffer[0].u = iVar3 + 0x80000;
  iVar4 = (this_ptr->texture_index >> 2 & 3U) * 0x400000;
  g_RenderVertexBuffer[1].u = iVar3 + 0x380000;
  g_RenderVertexBuffer[0].v = iVar4 + 0x80000;
  g_RenderVertexBuffer[2].v = iVar4 + 0x380000;
  local_88.x = (int)ROUND((this_ptr->base).position.x * 256.0f);
  local_88.y = (int)ROUND((this_ptr->base).position.y * 256.0f);
  local_88.z = (int)ROUND((this_ptr->base).position.z * 256.0f);
  g_RenderVertexBuffer[1].v = g_RenderVertexBuffer[0].v;
  g_RenderVertexBuffer[2].u = g_RenderVertexBuffer[1].u;
  g_RenderVertexBuffer[3].u = g_RenderVertexBuffer[0].u;
  g_RenderVertexBuffer[3].v = g_RenderVertexBuffer[2].v;
  core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
            (g_CDemonSetPtr,&local_88,(CVector3i *)&INT_02d8339c,0,4);
  uVar1 = this_ptr->blood_type;
  if (uVar1 != 0) {
    if (uVar1 < 2) {
      local_28 = 0;
      local_20 = 0x7f80;
      goto LAB_004ebdb7;
    }
    if (uVar1 == 2) {
      local_20 = 0;
      local_28 = 0;
      goto LAB_004ebdb7;
    }
  }
  local_28 = 0x2000;
  local_20 = 0;
LAB_004ebdb7:
  local_24 = 0;
  iVar3 = 0;
  do {
    lVar2 = (longlong)local_28 * (longlong)*(int *)((int)&g_RenderVertexBuffer[0].z + iVar3);
    *(uint *)((int)&g_RenderVertexBuffer[0].z + iVar3) =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    lVar2 = (longlong)local_20 * (longlong)*(int *)((int)&g_RenderVertexBuffer[0].r + iVar3);
    *(uint *)((int)&g_RenderVertexBuffer[0].r + iVar3) =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    iVar4 = iVar3 + 0x30;
    *(uint *)((int)&g_RenderVertexBuffer[0].g + iVar3) = 0;
    iVar3 = iVar4;
  } while (iVar4 != 0xc0);
  (*((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)(g_CurrentSceneCamera,this_ptr,0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr2,0xffff - (int)g_PerspectiveReciprocal);
  engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
            (g_CDemonRendererPtr2,&g_GoreQuadPrimitive.base);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  CStack_e8.x = (this_ptr->base).position.x;
  CStack_e8.y = (this_ptr->base).position.y;
  CStack_e8.z = (this_ptr->base).position.z;
  fStack_70 = (this_ptr->base).velocity.x;
  fStack_6c = (this_ptr->base).velocity.y;
  iVar3 = 0;
  fStack_f0 = 1.0;
  fStack_68 = (this_ptr->base).velocity.z;
  fStack_ec = 0.025;
  do {
    fStack_ec = fStack_ec * (float)0.69999999999999996;
    fStack_f0 = (float)0.69999999999999996 * fStack_f0;
    fStack_a0 = fStack_70 * fStack_ec;
    fStack_6c = fStack_6c - fStack_ec * (this_ptr->base).gravity_acceleration;
    fStack_98 = fStack_68 * fStack_ec;
    fStack_9c = fStack_6c * fStack_ec;
    CStack_e8.x = CStack_e8.x - fStack_a0;
    CStack_e8.z = CStack_e8.z - fStack_98;
    CStack_e8.y = CStack_e8.y - fStack_9c;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,&CStack_e8);
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
              (g_CDemonRendererPtr2,(CVector3i *)&g_ParticleCameraRotation,(CVector3i *)0x0);
    local_4c = fStack_f0 * (float)-0.10000000000000001;
    local_44 = 0;
    CStack_dc.x = (int)ROUND(local_4c * 256.0f);
    CStack_dc.y = (int)ROUND(local_4c * 256.0f);
    CStack_dc.z = (int)ROUND(256.0f * 0.0);
    local_48 = local_4c;
    fStack_18 = local_4c;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&CStack_dc);
    local_4c = fStack_f0 * (float)0.10000000000000001;
    local_44 = 0;
    local_48 = fStack_18;
    CStack_ac.x = (int)ROUND(local_4c * 256.0f);
    CStack_ac.y = (int)ROUND(fStack_18 * 256.0f);
    CStack_ac.z = (int)ROUND(256.0f * 0.0);
    fStack_1c = local_4c;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&CStack_ac);
    local_4c = fStack_1c;
    local_48 = fStack_1c;
    local_44 = 0;
    CStack_64.x = (int)ROUND(fStack_1c * 256.0f);
    CStack_64.y = (int)ROUND(fStack_1c * 256.0f);
    CStack_64.z = (int)ROUND(256.0f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&CStack_64);
    local_4c = fStack_18;
    local_44 = 0;
    local_48 = fStack_1c;
    CStack_c4.x = (int)ROUND(fStack_18 * 256.0f);
    CStack_c4.y = (int)ROUND(fStack_1c * 256.0f);
    CStack_c4.z = (int)ROUND(256.0f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&CStack_c4);
    local_88.x = (int)ROUND(CStack_e8.x * 256.0f);
    local_88.y = (int)ROUND(CStack_e8.y * 256.0f);
    local_88.z = (int)ROUND(CStack_e8.z * 256.0f);
    core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
              (g_CDemonSetPtr,&local_88,(CVector3i *)&INT_02d8339c,0,4);
    iVar4 = 0;
    do {
      lVar2 = (longlong)local_28 * (longlong)*(int *)((int)&g_RenderVertexBuffer[0].z + iVar4);
      *(uint *)((int)&g_RenderVertexBuffer[0].z + iVar4) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      lVar2 = (longlong)local_20 * (longlong)*(int *)((int)&g_RenderVertexBuffer[0].r + iVar4);
      *(uint *)((int)&g_RenderVertexBuffer[0].r + iVar4) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      iVar5 = iVar4 + 0x30;
      lVar2 = (longlong)local_24 * (longlong)*(int *)((int)&g_RenderVertexBuffer[0].g + iVar4);
      *(uint *)((int)&g_RenderVertexBuffer[0].g + iVar4) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      iVar4 = iVar5;
    } while (iVar5 != 0xc0);
    (*((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)
              (g_CurrentSceneCamera,this_ptr,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
              (g_CDemonRendererPtr2,0xffff - (int)g_PerspectiveReciprocal);
    engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
              (g_CDemonRendererPtr2,&g_GoreQuadPrimitive.base);
    iVar3 = iVar3 + 1;
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  } while (iVar3 < 3);
  return;
}

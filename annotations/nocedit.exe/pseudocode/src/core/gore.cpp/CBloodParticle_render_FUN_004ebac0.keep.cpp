// Name: core_gore.cpp_CBloodParticle_render_FUN_004ebac0
// Address: 004ebac0
// MANUAL RECONSTRUCTION
// Address Range: [[004ebac0, 004ec280]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodParticle_render_FUN_004ebac0(CBloodParticle *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodParticle_render_FUN_004ebac0(CBloodParticle *this_ptr)

{
  SRenderVertex *output_00;
  float fVar1;
  longlong lVar3;
  float fVar4;
  float fVar5;
  int iVar3;
  int iVar4;
  int iVar6;
  int iVar7;
  float fStack_ec;
  CVector3f CStack_e8;
  CVector3i CStack_dc;
  CVector3i local_d0;
  CVector3i local_b8;
  CVector3i local_94;
  CVector3i local_88;
  CVector3i local_7c;
  float fStack_68;
  CVector3i CStack_64;
  CVector3i local_58;
  int local_28;
  int local_20;
  longlong lVar2;
  uint uVar1;
  
  output_00 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  local_58.x = (int)ROUND((this_ptr->base).position.x * 256.0f);
  local_58.y = (int)ROUND((this_ptr->base).position.y * 256.0f);
  local_58.z = (int)ROUND((this_ptr->base).position.z * 256.0f);
  engine_special_cpp_transformPoint_FUN_005b5a25(&output_00->projected_vertex,&local_58);
  if ((int)((output_00->projected_vertex).screen_x & -0x80000000) != 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
            (g_CDemonRendererPtr2,&g_ParticleCameraRotation,(CVector3i *)0x0);
  local_b8.x = (int)ROUND(256.0f * -0.1);
  local_b8.y = (int)ROUND(256.0f * -0.1);
  local_b8.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_b8);
  local_7c.x = (int)ROUND(256.0f * 0.1);
  local_7c.y = (int)ROUND(256.0f * -0.1);
  local_7c.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_7c);
  local_d0.x = (int)ROUND(256.0f * 0.1);
  local_d0.y = (int)ROUND(256.0f * 0.1);
  local_d0.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_d0);
  local_94.x = (int)ROUND(256.0f * -0.1);
  local_94.y = (int)ROUND(256.0f * 0.1);
  local_94.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
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
            (g_CDemonSetPtr,&local_88,&CVector3i_02d8339c,0,4);
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
  iVar7 = 0;
  do {
    lVar2 = (longlong)local_28 * (longlong)g_RenderVertexBuffer[iVar7].r;
    g_RenderVertexBuffer[iVar7].r =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    lVar3 = (longlong)local_20 * (longlong)g_RenderVertexBuffer[iVar7].g;
    g_RenderVertexBuffer[iVar7].g =
         (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
    g_RenderVertexBuffer[iVar7].b = 0;
    iVar7 = iVar7 + 1;
  } while (iVar7 != 4);
  (*((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)
            (g_CurrentSceneCamera,(CVector3f *)this_ptr,(SProjectedVertex *)0x0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr2,0xffff - g_PerspectiveReciprocal);
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0048bcf0
            (g_CDemonRendererPtr2,&g_GoreQuadPrimitive.base);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  CStack_e8.y = (this_ptr->base).position.x;
  CStack_e8.z = (this_ptr->base).position.y;
  CStack_dc.x = (int)(this_ptr->base).position.z;
  fVar1 = (this_ptr->base).velocity.x;
  fStack_68 = (this_ptr->base).velocity.y;
  iVar7 = 0;
  fStack_ec = 1.0;
  CStack_64.x = (int)(this_ptr->base).velocity.z;
  CStack_e8.x = 0.025;
  do {
    CStack_e8.x = CStack_e8.x * (float)0.69999999999999996;
    fStack_ec = (float)0.69999999999999996 * fStack_ec;
    fStack_68 = fStack_68 - CStack_e8.x * (this_ptr->base).gravity_acceleration;
    local_94.x = (int)((float)CStack_64.x * CStack_e8.x);
    CStack_e8.y = CStack_e8.y - fVar1 * CStack_e8.x;
    CStack_dc.x = (int)((float)CStack_dc.x - (float)local_94.x);
    CStack_e8.z = CStack_e8.z - fStack_68 * CStack_e8.x;
    {
      CVector3f pt_world;
      CVector3i pt_input;
      pt_world.x = CStack_e8.y;
      pt_world.y = CStack_e8.z;
      pt_world.z = (float)CStack_dc.x;
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr2,&pt_world);
      engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
                (g_CDemonRendererPtr2,&g_ParticleCameraRotation,(CVector3i *)0x0);
      fVar4 = fStack_ec * (float)-0.10000000000000001;
      pt_input.x = (int)ROUND(fVar4 * 256.0f);
      pt_input.y = (int)ROUND(fVar4 * 256.0f);
      pt_input.z = (int)ROUND(256.0f * 0.0);
      engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&pt_input);
      fVar5 = fStack_ec * (float)0.10000000000000001;
      pt_input.x = (int)ROUND(fVar5 * 256.0f);
      pt_input.y = (int)ROUND(fVar4 * 256.0f);
      pt_input.z = 0;
      engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&pt_input);
      pt_input.x = (int)ROUND(fVar5 * 256.0f);
      pt_input.y = (int)ROUND(fVar5 * 256.0f);
      pt_input.z = (int)ROUND(256.0f * 0.0);
      engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&pt_input);
      pt_input.x = (int)ROUND(fVar4 * 256.0f);
      pt_input.y = (int)ROUND(fVar5 * 256.0f);
      pt_input.z = (int)ROUND(256.0f * 0.0);
      engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&pt_input);
      pt_input.x = (int)ROUND(CStack_e8.y * 256.0f);
      pt_input.y = (int)ROUND(CStack_e8.z * 256.0f);
      pt_input.z = (int)ROUND((float)CStack_dc.x * 256.0f);
      core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
                (g_CDemonSetPtr,&pt_input,&CVector3i_02d8339c,0,4);
    }
    iVar6 = 0;
    do {
      lVar3 = (longlong)local_28 * (longlong)g_RenderVertexBuffer[iVar6].r;
      g_RenderVertexBuffer[iVar6].r =
           (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
      lVar3 = (longlong)local_20 * (longlong)g_RenderVertexBuffer[iVar6].g;
      g_RenderVertexBuffer[iVar6].g =
           (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
      g_RenderVertexBuffer[iVar6].b = 0;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 4);
    (*((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)
              (g_CurrentSceneCamera,(CVector3f *)this_ptr,(SProjectedVertex *)0x0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
              (g_CDemonRendererPtr2,0xffff - g_PerspectiveReciprocal);
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0048bcf0
              (g_CDemonRendererPtr2,&g_GoreQuadPrimitive.base);
    iVar7 = iVar7 + 1;
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  } while (iVar7 < 3);
  return;
}

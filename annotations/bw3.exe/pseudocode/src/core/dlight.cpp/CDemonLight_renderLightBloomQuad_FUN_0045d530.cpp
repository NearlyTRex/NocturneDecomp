// Name: core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_0045d530
// Address: 0045d530
// Address Range: [[0045d530, 0045d55f] [0045d561, 0045daec]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_0045d530(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_0045d530(CDemonLight *this_ptr)

{
  UVector3 *world_position;
  longlong lVar1;
  float fVar2;
  CDemonRenderer *this_ptr_00;
  int iVar3;
  uint uVar4;
  byte bVar5;
  double dVar6;
  float afStackY_1094 [12];
  int aiStackY_1064 [15];
  float afStackY_1028 [969];
  CVector3f *translation;
  int iStack_f8;
  CVector3i local_d4;
  CVector3i local_c8;
  CVector3i local_bc;
  CVector3f local_ac;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90 [4];
  float local_80;
  CVector3i local_7c;
  CVector3f local_70;
  int local_64;
  int local_60 [5];
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  CVector3i local_38;
  float local_2c;
  float local_28;
  int iStack_24;
  float local_1c;
  int local_18;
  
  bVar5 = 0;
  if (this_ptr->volumetric_enabled == 0) {
    return;
  }
  world_position = &(this_ptr->base).base.position;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (g_CDemonRenderer_PTR_005f2afc,&world_position->f);
  engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_0046d250
            (g_CDemonRenderer_PTR_005f2afc,&local_70);
  translation = (CVector3f *)0x0;
  local_ac.x = local_70.x;
  *(uint *)((int)&local_ac + (uint)bVar5 * -8 + 4) =
       *(uint *)((int)&local_70 + (uint)bVar5 * -8 + 4);
  *(uint *)((int)&local_ac + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       *(uint *)((int)&local_70 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (g_CDemonRenderer_PTR_005f2afc,&local_ac,translation);
  engine_drender_cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046d1a0
            (g_CDemonRenderer_PTR_005f2afc,&local_7c);
  local_64 = local_7c.x;
  local_60[(uint)bVar5 * -2] = *(int *)((int)&local_7c + (uint)bVar5 * -8 + 4);
  local_60[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       *(int *)((int)&local_7c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  fVar2 = (float)0.00390625;
  local_18 = local_60[1];
  local_90[2] = (float)local_64 * fVar2;
  local_94 = (world_position->f).x - (float)local_64 * fVar2;
  local_90[3] = (float)local_60[0] * fVar2;
  local_80 = (float)local_60[1] * fVar2;
  local_90[0] = (this_ptr->base).base.position.f.y - (float)local_60[0] * fVar2;
  local_90[1] = (this_ptr->base).base.position.f.z - (float)local_60[1] * fVar2;
  local_40 = local_94;
  (&local_3c)[(uint)bVar5 * -2] = local_90[(uint)bVar5 * -2];
  *(float *)((int)&local_38 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       local_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  if (&local_a0 != &local_40) {
    local_a0 = local_40;
    local_9c = local_3c;
    local_98 = (float)local_38.x;
  }
  local_4c = (this_ptr->base).base.rotation_matrix.m[0].z;
  local_48 = (this_ptr->base).base.rotation_matrix.m[1].z;
  local_44 = (this_ptr->base).base.rotation_matrix.m[2].z;
  local_1c = SQRT(local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c);
  if (local_1c <= 0.0) {
    local_9c = 0.0;
    local_a0 = 0.0;
    local_98 = 0.0;
  }
  else {
    fVar2 = 1.0 / local_1c;
    local_a0 = local_a0 * fVar2;
    local_9c = local_9c * fVar2;
    local_98 = local_98 * fVar2;
  }
  iVar3 = g_INT_01c6e24c / 2;
  local_28 = -(local_98 * local_44 + local_a0 * local_4c + local_9c * local_48);
  dVar6 = round
                    ((double)(local_28 * local_28 * local_28 * local_28 * (float)65536))
  ;
  iStack_24 = (int)ROUND(dVar6);
  lVar1 = (longlong)(0xffff - iVar3) * (longlong)iStack_24;
  uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  if (0.0 < local_2c) {
    local_60[1] = 0x40000000;
    local_60[2] = 0x40000000;
    local_60[3] = 0xbf000000;
    local_d4.x = (int)ROUND(256.0f * 2.0);
    local_d4.y = (int)ROUND(256.0f * 2.0);
    local_d4.z = (int)ROUND(256.0f * -0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->projected_vertex,&local_d4);
    local_60[2] = 0x40000000;
    local_60[1] = 0xc0000000;
    local_60[3] = 0xbf000000;
    local_bc.x = (int)ROUND(256.0f * -2.0);
    local_bc.y = (int)ROUND(256.0f * 2.0);
    local_bc.z = (int)ROUND(256.0f * -0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_bc);
    local_60[1] = 0xc0000000;
    local_60[2] = 0xc0000000;
    local_60[3] = 0xbf000000;
    local_c8.x = (int)ROUND(256.0f * -2.0);
    local_c8.y = (int)ROUND(256.0f * -2.0);
    local_c8.z = (int)ROUND(256.0f * -0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_c8);
    local_60[1] = 0x40000000;
    local_60[3] = 0xbf000000;
    local_60[2] = 0xc0000000;
    local_38.x = (int)ROUND(256.0f * 2.0);
    local_38.y = (int)ROUND(256.0f * -2.0);
    local_38.z = (int)ROUND(256.0f * -0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[3].projected_vertex,&local_38);
    this_ptr_00 = g_CDemonRenderer_PTR_005f2afc;
    g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->u = 0xf80000;
    this_ptr_00->vertex_buffer_ptr->v = 0xf80000;
    this_ptr_00->vertex_buffer_ptr->a = uVar4;
    this_ptr_00->vertex_buffer_ptr[1].u = 0x80000;
    this_ptr_00->vertex_buffer_ptr[1].v = 0xf80000;
    this_ptr_00->vertex_buffer_ptr[1].a = uVar4;
    this_ptr_00->vertex_buffer_ptr[2].u = 0x80000;
    this_ptr_00->vertex_buffer_ptr[2].v = 0x80000;
    this_ptr_00->vertex_buffer_ptr[2].a = uVar4;
    this_ptr_00->vertex_buffer_ptr[3].u = 0xf80000;
    this_ptr_00->vertex_buffer_ptr[3].v = 0x80000;
    this_ptr_00->vertex_buffer_ptr[3].a = uVar4;
    this_ptr_00->vertex_buffer_ptr->r = 0xffff;
    this_ptr_00->vertex_buffer_ptr->g = 0xffff;
    this_ptr_00->vertex_buffer_ptr->b = 0xffff;
    this_ptr_00->vertex_buffer_ptr[1].r = 0xffff;
    this_ptr_00->vertex_buffer_ptr[1].g = 0xffff;
    this_ptr_00->vertex_buffer_ptr[1].b = 0xffff;
    this_ptr_00->vertex_buffer_ptr[2].r = 0xffff;
    this_ptr_00->vertex_buffer_ptr[2].g = 0xffff;
    this_ptr_00->vertex_buffer_ptr[2].b = 0xffff;
    this_ptr_00->vertex_buffer_ptr[3].r = 0xffff;
    this_ptr_00->vertex_buffer_ptr[3].g = 0xffff;
    this_ptr_00->vertex_buffer_ptr[3].b = 0xffff;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (this_ptr_00,&g_SLightGlowTable_005f2828.sprites[0].texture);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(g_CDemonRenderer_PTR_005f2afc,1);
    iStack_f8 = 4;
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510
              (g_CDemonRenderer_PTR_005f2afc,(SMRGLHeaderPrimitive *)&stack0xffffff04);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(g_CDemonRenderer_PTR_005f2afc,0);
  engine_drender_cpp_pop_FUN_0046d080();
  core_dlight_cpp_CDemonLight_renderVolumetricLightShaft_FUN_0045dea0(this_ptr);
  return;
}

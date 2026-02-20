// Name: core_dskybox.cpp_renderSkyDome_FUN_004901f0
// Address: 004901f0
// Address Range: [[004901f0, 004906a3]]
// Convention: __cdecl
// Signature: void __cdecl core_dskybox_cpp_renderSkyDome_FUN_004901f0(SMRGLTextureBasic *sky_texture,char *texture_name,float brightness_factor)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dskybox_cpp_renderSkyDome_FUN_004901f0(SMRGLTextureBasic *sky_texture,char *texture_name,float brightness_factor)

{
  char cVar1;
  int iVar2;
  float fVar3;
  CDemonRenderer *this_ptr;
  int iVar4;
  int iVar5;
  float *uv_offset;
  int iVar6;
  char *pcVar7;
  int iVar8;
  float10 fVar9;
  SMRGLHeaderPrimitive local_b4;
  int local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  uint local_8c;
  uint local_88;
  int local_84;
  int local_80;
  uint local_7c;
  int local_78;
  int local_74;
  uint local_70;
  CVector3i local_6c;
  CVector3f local_60;
  CVector3f local_54;
  int local_40;
  int local_3c;
  int local_38;
  float local_34;
  float local_30;
  float local_2c;
  uint local_28;
  float *local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  pcVar7 = sky_texture->texture_name + 4;
  do {
    cVar1 = *texture_name;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = texture_name[1];
    texture_name = texture_name + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  (sky_texture->base).type = (int)brightness_factor;
  core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40(&g_CDemonRaytraceInstance,&local_60);
  core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70(&g_CDemonRaytraceInstance,&local_54);
  fVar3 = (float)0.5;
  CVector3i_02ca0388.x = (int)((local_60.x + local_54.x) * fVar3);
  CVector3i_02ca0388.z = (int)((local_60.z + local_54.z) * fVar3);
  local_34 = (local_54.x - local_60.x) * fVar3 * (float)1.4139999999999999;
  g_SkyDomeVertexScale = 0.0;
  CVector3i_02ca0388.y = (int)local_60.y;
  if (0.0 < local_34) {
    g_SkyDomeVertexScale = local_34;
  }
  local_2c = (local_54.y - local_60.y) * (float)1.4139999999999999;
  if (g_SkyDomeVertexScale < local_2c) {
    g_SkyDomeVertexScale = local_2c;
  }
  local_30 = (local_54.z - local_60.z) * (float)0.5 * (float)1.4139999999999999;
  if (g_SkyDomeVertexScale < local_30) {
    g_SkyDomeVertexScale = local_30;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,(CVector3f *)&CVector3i_02ca0388);
  local_b4.base.count = 4;
  local_b4.surface_normal.D = 0;
  local_b4.surface_normal.C = 0;
  local_b4.surface_normal.B = 0;
  local_b4.surface_normal.A = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,(SMRGLTextureBasic *)&(sky_texture->base).count);
  fVar9 = (float10)fsin((float10)0.58904862253125001);
  local_6c.x = (int)ROUND(ROUND(fVar9 * (float10)g_SkyDomeVertexScale * (float10)256));
  local_6c.y = (int)ROUND(ROUND((float10)g_SkyDomeVertexScale * (float10)256));
  local_6c.z = local_6c.x;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_6c);
  local_6c.x = -local_6c.x;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_6c);
  local_6c.z = -local_6c.z;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_6c);
  local_6c.x = -local_6c.x;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_6c);
  this_ptr = g_CDemonRendererPtr2;
  iVar8 = (sky_texture->base).type;
  g_CDemonRendererPtr2->vertex_buffer_ptr->z = iVar8;
  this_ptr->vertex_buffer_ptr->r = iVar8;
  this_ptr->vertex_buffer_ptr->g = iVar8;
  this_ptr->vertex_buffer_ptr->fog = 0;
  iVar8 = (sky_texture->base).type;
  this_ptr->vertex_buffer_ptr[1].z = iVar8;
  this_ptr->vertex_buffer_ptr[1].r = iVar8;
  this_ptr->vertex_buffer_ptr[1].g = (sky_texture->base).type;
  this_ptr->vertex_buffer_ptr[1].fog = 0;
  iVar8 = (sky_texture->base).type;
  this_ptr->vertex_buffer_ptr[2].z = iVar8;
  this_ptr->vertex_buffer_ptr[2].r = iVar8;
  this_ptr->vertex_buffer_ptr[2].g = iVar8;
  this_ptr->vertex_buffer_ptr[2].fog = 0;
  iVar8 = (sky_texture->base).type;
  this_ptr->vertex_buffer_ptr[3].z = iVar8;
  this_ptr->vertex_buffer_ptr[3].r = iVar8;
  this_ptr->vertex_buffer_ptr[3].g = iVar8;
  this_ptr->vertex_buffer_ptr[3].fog = 0;
  local_9c = 0;
  local_90 = 1;
  local_98 = 0x80000;
  local_94 = 0x80000;
  local_8c = 0x80000;
  local_88 = 0x80000;
  local_78 = 3;
  local_84 = 2;
  iVar8 = 0;
  local_80 = 0x80000;
  local_7c = 0x80000;
  local_74 = 0x80000;
  local_70 = 0x80000;
  engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0(this_ptr,&local_b4,0x2c5);
  local_24 = (float *)0x0;
  do {
    iVar6 = 0;
    uv_offset = local_24;
    do {
      iVar5 = iVar6 + 1;
      core_dskybox_cpp_generateSkyDomeVertex_FUN_004900b0
                ((float *)sky_texture,iVar8,iVar6,uv_offset);
      iVar6 = iVar5;
      uv_offset = (float *)((int)uv_offset + 1);
    } while (iVar5 < 4);
    local_24 = local_24 + 1;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x11);
  local_20 = 0;
  local_28 = 0;
  do {
    local_1c = local_20;
    iVar6 = 0x1000000;
    local_14 = (int)((local_28 + (local_28 >> 0x1f) * -4) - (uint)((local_28 >> 0x1f) << 1 < 0)) >>
               2 & 0xffffff;
    iVar8 = 0;
    local_18 = local_14 + 0x400000;
    iVar5 = 0;
    do {
      local_9c = local_1c + iVar5;
      local_90 = local_9c + 1;
      local_84 = local_9c + 5;
      local_78 = local_9c + 4;
      iVar4 = iVar8 >> 0x1f;
      iVar2 = iVar8 + iVar4 * -4;
      local_98 = local_14;
      iVar5 = iVar5 + 1;
      local_8c = local_14;
      iVar8 = iVar8 + 0x1000000;
      local_88 = (int)((iVar6 + (iVar6 >> 0x1f) * -4) - (uint)((iVar6 >> 0x1f) << 1 < 0)) >> 2 ^
                 0xffffff;
      local_80 = local_18;
      local_74 = local_18;
      local_94 = (int)(iVar2 - (uint)(iVar4 << 1 < 0)) >> 2 ^ 0xffffff;
      iVar6 = iVar6 + 0x1000000;
      local_7c = local_88;
      local_70 = local_94;
      local_40 = local_90;
      local_3c = local_84;
      local_38 = local_78;
      engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
                (g_CDemonRendererPtr2,&local_b4,0x2c5);
    } while (iVar5 < 3);
    local_20 = local_20 + 4;
    local_28 = CONCAT13(local_28._3_1_ + '\x01',(undefined3)local_28);
  } while (local_20 != 0x40);
  return;
}

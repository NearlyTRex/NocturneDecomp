// Name: core_dskybox.cpp_renderSkyDome_FUN_004901f0
// Address: 004901f0
// Address Range: [[004901f0, 004906a3]]
// Convention: __cdecl
// Signature: void __cdecl core_dskybox_cpp_renderSkyDome_FUN_004901f0(SMRGLTextureBasic *sky_texture,char *texture_name,int brightness_factor)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dskybox_cpp_renderSkyDome_FUN_004901f0(SMRGLTextureBasic *sky_texture,char *texture_name,int brightness_factor)

{
  char cVar2;
  float fVar3;
  uint uVar4;
  int iVar3;
  int iVar4;
  int iVar6;
  int iVar9;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  SMRGLPrimitiveQuad local_b4;
  CVector3i local_6c;
  CVector3f local_60;
  CVector3f local_54;
  int local_40;
  int local_3c;
  int local_38;
  float local_34;
  float local_30;
  float local_2c;
  uint uStack_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  CDemonRenderer *this_ptr;
  float fVar2;
  char cVar1;
  
  pcVar6 = sky_texture->texture_name + 4;
  do {
    cVar1 = *texture_name;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar2 = texture_name[1];
    texture_name = texture_name + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  (sky_texture->base).type = brightness_factor;
  core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40(&g_CDemonRaytraceInstance,&local_60);
  core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70(&g_CDemonRaytraceInstance,&local_54);
  fVar2 = (float)0.5;
  CVector3i_02ca0388.x = (int)((local_60.x + local_54.x) * fVar2);
  CVector3i_02ca0388.z = (int)((local_60.z + local_54.z) * fVar2);
  fVar3 = (local_54.x - local_60.x) * fVar2 * (float)1.4139999999999999;
  g_SkyDomeVertexScale = 0.0;
  CVector3i_02ca0388.y = (int)local_60.y;
  if (0.0 < fVar3) {
    g_SkyDomeVertexScale = fVar3;
  }
  fVar3 = (local_54.y - local_60.y) * (float)1.4139999999999999;
  if (g_SkyDomeVertexScale < fVar3) {
    g_SkyDomeVertexScale = fVar3;
  }
  fVar3 = (local_54.z - local_60.z) * (float)0.5 * (float)1.4139999999999999;
  if (g_SkyDomeVertexScale < fVar3) {
    g_SkyDomeVertexScale = fVar3;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,(CVector3f *)&CVector3i_02ca0388);
  local_b4.base.base.count = 4;
  local_b4.base.surface_normal.D.i = 0;
  local_b4.base.surface_normal.C.i = 0;
  local_b4.base.surface_normal.B.i = 0;
  local_b4.base.surface_normal.A.i = 0;
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
  iVar6 = (sky_texture->base).type;
  g_CDemonRendererPtr2->vertex_buffer_ptr->r = iVar6;
  this_ptr->vertex_buffer_ptr->g = iVar6;
  this_ptr->vertex_buffer_ptr->b = iVar6;
  this_ptr->vertex_buffer_ptr->a = 0;
  iVar6 = (sky_texture->base).type;
  this_ptr->vertex_buffer_ptr[1].r = iVar6;
  this_ptr->vertex_buffer_ptr[1].g = iVar6;
  this_ptr->vertex_buffer_ptr[1].b = (sky_texture->base).type;
  this_ptr->vertex_buffer_ptr[1].a = 0;
  iVar6 = (sky_texture->base).type;
  this_ptr->vertex_buffer_ptr[2].r = iVar6;
  this_ptr->vertex_buffer_ptr[2].g = iVar6;
  this_ptr->vertex_buffer_ptr[2].b = iVar6;
  this_ptr->vertex_buffer_ptr[2].a = 0;
  iVar6 = (sky_texture->base).type;
  this_ptr->vertex_buffer_ptr[3].r = iVar6;
  this_ptr->vertex_buffer_ptr[3].g = iVar6;
  this_ptr->vertex_buffer_ptr[3].b = iVar6;
  this_ptr->vertex_buffer_ptr[3].a = 0;
  local_b4.vertices[0].vertex_index = 0;
  local_b4.vertices[1].vertex_index = 1;
  local_b4.vertices[0].texture_u = 0x80000;
  local_b4.vertices[0].texture_v = 0x80000;
  local_b4.vertices[1].texture_u = 0x80000;
  local_b4.vertices[1].texture_v = 0x80000;
  local_b4.vertices[3].vertex_index = 3;
  local_b4.vertices[2].vertex_index = 2;
  iVar7 = 0;
  local_b4.vertices[2].texture_u = 0x80000;
  local_b4.vertices[2].texture_v = 0x80000;
  local_b4.vertices[3].texture_u = 0x80000;
  local_b4.vertices[3].texture_v = 0x80000;
  engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
            (this_ptr,&local_b4.base,0x2c5);
  local_24 = 0;
  do {
    iVar6 = 0;
    iVar9 = local_24;
    do {
      iVar4 = iVar6 + 1;
      core_dskybox_cpp_generateSkyDomeVertex_FUN_004900b0(sky_texture,iVar7,iVar6,iVar9);
      iVar6 = iVar4;
      iVar9 = iVar9 + 1;
    } while (iVar4 < 4);
    local_24 = local_24 + 4;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x11);
  local_20 = 0;
  uStack_28 = 0;
  do {
    iVar5 = 0x1000000;
    uVar4 = (int)((uStack_28 + (uStack_28 >> 0x1f) * -4) - (uint)((uStack_28 >> 0x1f) << 1 < 0)) >>
            2 & 0xffffff;
    iVar6 = 0;
    iVar8 = 0;
    do {
      local_b4.vertices[0].vertex_index = local_20 + iVar8;
      local_b4.vertices[1].vertex_index = local_b4.vertices[0].vertex_index + 1;
      local_b4.vertices[2].vertex_index = local_b4.vertices[0].vertex_index + 5;
      local_b4.vertices[3].vertex_index = local_b4.vertices[0].vertex_index + 4;
      iVar3 = iVar6 >> 0x1f;
      iVar9 = iVar6 + iVar3 * -4;
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 0x1000000;
      local_b4.vertices[1].texture_v =
           (int)((iVar5 + (iVar5 >> 0x1f) * -4) - (uint)((iVar5 >> 0x1f) << 1 < 0)) >> 2 ^ 0xffffff;
      local_b4.vertices[0].texture_v = (int)(iVar9 - (uint)(iVar3 << 1 < 0)) >> 2 ^ 0xffffff;
      iVar5 = iVar5 + 0x1000000;
      local_b4.vertices[0].texture_u = uVar4;
      local_b4.vertices[1].texture_u = uVar4;
      local_b4.vertices[2].texture_u = uVar4 + 0x400000;
      local_b4.vertices[2].texture_v = local_b4.vertices[1].texture_v;
      local_b4.vertices[3].texture_u = uVar4 + 0x400000;
      local_b4.vertices[3].texture_v = local_b4.vertices[0].texture_v;
      engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
                (g_CDemonRendererPtr2,&local_b4.base,0x2c5);
    } while (iVar8 < 3);
    local_20 = local_20 + 4;
    uStack_28 = (uint)(byte)(uStack_28._3_1_ + 1) << 0x18;
  } while (local_20 != 0x40);
  return;
}

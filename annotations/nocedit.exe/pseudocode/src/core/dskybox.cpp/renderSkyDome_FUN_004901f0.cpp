// Name: core_dskybox.cpp_renderSkyDome_FUN_004901f0
// Address: 004901f0
// Address Range: [[004901f0, 004906a3]]
// Convention: __cdecl
// Signature: void __cdecl core_dskybox_cpp_renderSkyDome_FUN_004901f0(SMRGLTextureBasic *sky_texture,char *texture_name,float brightness_factor)

#include "nocturne.h"

void __cdecl core_dskybox_cpp_renderSkyDome_FUN_004901f0(SMRGLTextureBasic *sky_texture,char *texture_name,float brightness_factor)

{
  char cVar1;
  float fVar2;
  CDemonRenderer *pCVar3;
  int v_coord;
  int iVar4;
  float *uv_offset;
  char *pcVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  double dVar10;
  byte local_74 [8];
  int local_6c;
  int local_68;
  CVector3f local_60;
  CVector3f local_54;
  int iStack_48;
  int iStack_44;
  int local_40;
  float local_34;
  uint local_30;
  float *local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  
  pcVar5 = sky_texture->texture_name + 4;
  do {
    cVar1 = *texture_name;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = texture_name[1];
    texture_name = texture_name + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  (sky_texture->base).type = (int)brightness_factor;
  core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40(&g_CDemonRaytraceInstance,&local_60);
  core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70(&g_CDemonRaytraceInstance,&local_54);
  fVar2 = (float)0.5;
  CVector3i_02ca0388.x = (int)((local_60.x + local_54.x) * fVar2);
  CVector3i_02ca0388.z = (int)((local_60.z + local_54.z) * fVar2);
  local_34 = (local_54.x - local_60.x) * fVar2 * (float)1.4139999999999999;
  g_SkyDomeVertexScale = 0.0;
  CVector3i_02ca0388.y = (int)local_60.y;
  if (0.0 < local_34) {
    g_SkyDomeVertexScale = local_34;
  }
  local_2c = (float *)((local_54.y - local_60.y) * (float)1.4139999999999999);
  if (g_SkyDomeVertexScale < (float)local_2c) {
    g_SkyDomeVertexScale = (float)local_2c;
  }
  local_30 = (local_54.z - local_60.z) * (float)0.5 * (float)1.4139999999999999;
  if (g_SkyDomeVertexScale < local_30) {
    g_SkyDomeVertexScale = local_30;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,(CVector3f *)&CVector3i_02ca0388);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,(SMRGLTextureBasic *)&(sky_texture->base).count);
  fVar7 = (float10)fsin((float10)0.58904862253125001);
  fVar8 = (float10)g_SkyDomeVertexScale;
  fVar9 = (float10)256;
  dVar10 = round((double)(fVar7 * fVar8 * fVar9));
  pCVar3 = g_CDemonRendererPtr2;
  local_74._4_4_ = (uint)ROUND(dVar10);
  local_68 = local_74._4_4_;
  dVar10 = round((double)(fVar8 * fVar9));
  local_74._4_4_ = (uint)ROUND(dVar10);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&pCVar3->vertex_buffer_ptr->projected_vertex,(CVector3i *)(local_74 + 4));
  local_74._0_4_ = -local_74._0_4_;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)local_74);
  local_6c = -local_6c;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)local_74);
  local_74._0_4_ = -local_74._0_4_;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)local_74);
  pCVar3 = g_CDemonRendererPtr2;
  iVar6 = (sky_texture->base).type;
  g_CDemonRendererPtr2->vertex_buffer_ptr->light = iVar6;
  pCVar3->vertex_buffer_ptr->color = iVar6;
  pCVar3->vertex_buffer_ptr->fog = iVar6;
  pCVar3->vertex_buffer_ptr->w_recip = 0.0;
  iVar6 = (sky_texture->base).type;
  pCVar3->vertex_buffer_ptr[1].light = iVar6;
  pCVar3->vertex_buffer_ptr[1].color = iVar6;
  pCVar3->vertex_buffer_ptr[1].fog = (sky_texture->base).type;
  pCVar3->vertex_buffer_ptr[1].w_recip = 0.0;
  iVar6 = (sky_texture->base).type;
  pCVar3->vertex_buffer_ptr[2].light = iVar6;
  pCVar3->vertex_buffer_ptr[2].color = iVar6;
  pCVar3->vertex_buffer_ptr[2].fog = iVar6;
  pCVar3->vertex_buffer_ptr[2].w_recip = 0.0;
  iVar6 = (sky_texture->base).type;
  pCVar3->vertex_buffer_ptr[3].light = iVar6;
  pCVar3->vertex_buffer_ptr[3].color = iVar6;
  pCVar3->vertex_buffer_ptr[3].fog = iVar6;
  pCVar3->vertex_buffer_ptr[3].w_recip = 0.0;
  iVar6 = 0;
  engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
            (pCVar3,(SMRGLHeaderPrimitive *)&stack0xffffff44,0x2c5);
  local_2c = (float *)0x0;
  do {
    v_coord = 0;
    uv_offset = local_2c;
    do {
      iVar4 = v_coord + 1;
      core_dskybox_cpp_generateSkyDomeVertex_FUN_004900b0
                ((float *)sky_texture,iVar6,v_coord,uv_offset);
      v_coord = iVar4;
      uv_offset = (float *)((int)uv_offset + 1);
    } while (iVar4 < 4);
    local_2c = local_2c + 1;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x11);
  local_28 = 0;
  local_30 = 0.0;
  do {
    local_24 = local_28;
    local_1c = (int)(((int)local_30 + ((int)local_30 >> 0x1f) * -4) -
                    (uint)(((int)local_30 >> 0x1f) << 1 < 0)) >> 2 & 0xffffff;
    local_20 = local_1c + 0x400000;
    iVar6 = 0;
    do {
      local_40 = local_24 + iVar6;
      iStack_48 = local_40 + 1;
      iStack_44 = local_40 + 5;
      local_40 = local_40 + 4;
      iVar6 = iVar6 + 1;
      engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
                (g_CDemonRendererPtr2,(SMRGLHeaderPrimitive *)&stack0xffffff44,0x2c5);
    } while (iVar6 < 3);
    local_28 = local_28 + 4;
    local_30 = (float)CONCAT13(local_30._3_1_ + '\x01',(undefined3)local_30);
  } while (local_28 != 0x40);
  return;
}

// Name: core_dskybox.cpp_renderSkyDome_FUN_004901f0
// Address: 004901f0
// Address Range: [[004901f0, 004906a3]]
// Convention: __cdecl
// Signature: void core_dskybox.cpp_renderSkyDome_FUN_004901f0(SMRGLTextureBasic * sky_texture, char * texture_name, float brightness_factor)

#include "nocturne.h"

void __cdecl
core_dskybox_cpp_renderSkyDome_FUN_004901f0
          (SMRGLTextureBasic *sky_texture,char *texture_name,float brightness_factor)

{
  char cVar1;
  float fVar2;
  int iVar3;
  CDemonRenderer *pCVar4;
  uint uVar5;
  int iVar6;
  int unaff_EBX;
  int iVar7;
  BADSPACEBASE *in_ESP;
  float *uv_offset;
  int iVar8;
  int unaff_EDI;
  char *pcVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  double dVar14;
  SMRGLHeaderPrimitive local_98;
  int local_80;
  uint local_7c;
  uint local_78;
  int local_74;
  uint local_70;
  float local_6c;
  int local_68;
  float local_64;
  byte local_60 [8];
  byte local_58 [12];
  float local_4c;
  float fStack_48;
  float fStack_44;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  float local_1c;
  
  pcVar9 = sky_texture->texture_name + 4;
  do {
    cVar1 = *texture_name;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = texture_name[1];
    texture_name = texture_name + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  (sky_texture->base).type = (int)brightness_factor;
  core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40
            (&g_CDemonRaytraceInstance,(CVector3f *)local_60);
  core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70
            (&g_CDemonRaytraceInstance,(CVector3f *)(local_58 + 8));
  fVar2 = (float)0.5;
  CVector3i_02ca0388.x = (int)(((float)local_58._0_4_ + local_4c) * fVar2);
  CVector3i_02ca0388.z = (int)(((float)local_58._8_4_ + fStack_44) * fVar2);
  local_2c = (local_4c - (float)local_58._0_4_) * fVar2 * (float)1.4139999999999999;
  5f = 0.0;
  CVector3i_02ca0388.y = local_58._4_4_;
  if (0.0 < local_2c) {
    5f = local_2c;
  }
  local_24 = (fStack_48 - (float)local_58._4_4_) * (float)1.4139999999999999;
  if (5f < local_24) {
    5f = local_24;
  }
  local_28 = (fStack_44 - (float)local_58._8_4_) * (float)0.5 * (float)1.4139999999999999;
  if (5f < local_28) {
    5f = local_28;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)&CVector3i_02ca0388);
  local_98.base.count = 0;
  local_98.base.type = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,(SMRGLTextureBasic *)&(sky_texture->base).count);
  fVar11 = (float10)fsin((float10)0.58904862253125001);
  fVar12 = (float10)5f;
  fVar13 = (float10)256;
  dVar14 = crt_math_c_round_FUN_005fe6b0((double)(fVar11 * fVar12 * fVar13));
  pCVar4 = g_CDemonRendererPtr;
  local_60._0_4_ = (uint)ROUND(dVar14);
  local_58._0_4_ = local_60._0_4_;
  dVar14 = crt_math_c_round_FUN_005fe6b0((double)(fVar12 * fVar13));
  local_60._0_4_ = (uint)ROUND(dVar14);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&pCVar4->vertex_buffer_ptr->projected_vertex,(CVector3i *)local_60);
  local_60._0_4_ = -local_60._0_4_;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)local_60);
  local_58._4_4_ = -local_58._4_4_;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)(local_60 + 4)
            );
  local_58._0_4_ = -local_58._0_4_;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)local_58);
  pCVar4 = g_CDemonRendererPtr;
  fVar2 = (float)(sky_texture->base).type;
  g_CDemonRendererPtr->vertex_buffer_ptr->light = fVar2;
  pCVar4->vertex_buffer_ptr->color = (int)fVar2;
  pCVar4->vertex_buffer_ptr->fog = fVar2;
  pCVar4->vertex_buffer_ptr->w_recip = 0.0;
  fVar2 = (float)(sky_texture->base).type;
  pCVar4->vertex_buffer_ptr[1].light = fVar2;
  pCVar4->vertex_buffer_ptr[1].color = (int)fVar2;
  pCVar4->vertex_buffer_ptr[1].fog = (float)(sky_texture->base).type;
  pCVar4->vertex_buffer_ptr[1].w_recip = 0.0;
  fVar2 = (float)(sky_texture->base).type;
  pCVar4->vertex_buffer_ptr[2].light = fVar2;
  pCVar4->vertex_buffer_ptr[2].color = (int)fVar2;
  pCVar4->vertex_buffer_ptr[2].fog = fVar2;
  pCVar4->vertex_buffer_ptr[2].w_recip = 0.0;
  fVar2 = (float)(sky_texture->base).type;
  pCVar4->vertex_buffer_ptr[3].light = fVar2;
  pCVar4->vertex_buffer_ptr[3].color = (int)fVar2;
  pCVar4->vertex_buffer_ptr[3].fog = fVar2;
  pCVar4->vertex_buffer_ptr[3].w_recip = 0.0;
  local_98.surface_normal.D = 0;
  local_78 = 1;
  local_80 = 0x80000;
  local_7c = 0x80000;
  local_74 = 0x80000;
  local_70 = 0x80000;
  local_60._0_4_ = 4.2039e-45;
  local_6c = 2.8026e-45;
  iVar10 = 0;
  local_68 = 0x80000;
  local_64 = 7.34684e-40;
  local_60._4_4_ = 7.34684e-40;
  local_58._0_4_ = 7.34684e-40;
  engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
            (pCVar4,(SMRGLHeaderPrimitive *)&stack0xffffff64,0x2c5);
  do {
    iVar8 = 0;
    uv_offset = (float *)0x0;
    do {
      iVar7 = iVar8 + 1;
      core_dskybox_cpp_generateSkyDomeVertex_FUN_004900b0
                ((float *)sky_texture,iVar10,iVar8,uv_offset);
      iVar8 = iVar7;
      uv_offset = (float *)((int)uv_offset + 1);
    } while (iVar7 < 4);
    unaff_EBX = unaff_EBX + 4;
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0x11);
  do {
    iVar8 = 0x1000000;
    uVar5 = (int)((unaff_EDI + (unaff_EDI >> 0x1f) * -4) - (uint)((unaff_EDI >> 0x1f) << 1 < 0)) >>
            2 & 0xffffff;
    iVar10 = 0;
    iVar7 = 0;
    do {
      local_80 = unaff_EBX + iVar7;
      local_74 = local_80 + 1;
      local_68 = local_80 + 5;
      local_60._4_4_ = local_80 + 4;
      iVar6 = iVar10 >> 0x1f;
      iVar3 = iVar10 + iVar6 * -4;
      iVar7 = iVar7 + 1;
      iVar10 = iVar10 + 0x1000000;
      local_6c = (float)((int)((iVar8 + (iVar8 >> 0x1f) * -4) - (uint)((iVar8 >> 0x1f) << 1 < 0)) >>
                         2 ^ 0xffffff);
      local_78 = (int)(iVar3 - (uint)(iVar6 << 1 < 0)) >> 2 ^ 0xffffff;
      iVar8 = iVar8 + 0x1000000;
      local_7c = uVar5;
      local_70 = uVar5;
      local_64 = (float)(uVar5 + 0x400000);
      local_60._0_4_ = local_6c;
      local_58._0_4_ = uVar5 + 0x400000;
      local_58._4_4_ = local_78;
      local_24 = (float)local_74;
      local_20 = local_68;
      local_1c = (float)local_60._4_4_;
      engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
                (g_CDemonRendererPtr,&local_98,0x2c5);
    } while (iVar7 < 3);
  } while (unaff_EBX != 0x3c);
  return;
}

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
  CDemonRenderer *this_ptr;
  uint extraout_EAX;
  uint *extraout_ECX;
  uint extraout_EDX;
  int iVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  float *uv_offset;
  int iVar6;
  char *pcVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  float fStack00000010;
  float fStack00000014;
  float fStack00000018;
  SMRGLHeaderPrimitive local_88;
  int local_70;
  float local_6c;
  uint local_68;
  int local_64;
  CVector3f local_60;
  float local_54;
  byte local_50 [8];
  CVector3i aCStack_48 [2];
  float local_2c;
  float local_28;
  float local_24;
  int local_14;
  
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
  core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70
            (&g_CDemonRaytraceInstance,(CVector3f *)local_50);
  fVar2 = (float)0.5;
  CVector3i_02ca0388.x = (int)((local_60.z + (float)local_50._4_4_) * fVar2);
  CVector3i_02ca0388.z = (int)(((float)local_50._0_4_ + (float)aCStack_48[0].y) * fVar2);
  local_2c = ((float)local_50._4_4_ - local_60.z) * fVar2 * (float)1.4139999999999999;
  5f = 0.0;
  CVector3i_02ca0388.y = (int)local_54;
  if (0.0 < local_2c) {
    5f = local_2c;
  }
  local_24 = ((float)aCStack_48[0].x - local_54) * (float)1.4139999999999999;
  if (5f < local_24) {
    5f = local_24;
  }
  local_28 = ((float)aCStack_48[0].y - (float)local_50._0_4_) * (float)0.5 *
             (float)1.4139999999999999;
  if (5f < local_28) {
    5f = local_28;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)&CVector3i_02ca0388);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,(SMRGLTextureBasic *)&(sky_texture->base).count);
  fVar9 = (float10)fsin((float10)0.58904862253125001);
  fVar9 = fVar9 * (float10)5f * (float10)256;
  fVar10 = (float10)5f * (float10)256;
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX));
  local_60.z = (float)(int)ROUND(fVar9);
  local_50._0_4_ = local_60.z;
  dVar11 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar11 >> 0x20),&local_60.z));
  local_50._0_4_ = (uint)ROUND(fVar10);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            ((SProjectedVertex *)*extraout_ECX,SUB84 /* extract 2-byte value */(dVar11,0));
  local_50._0_4_ = -local_50._0_4_;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)local_50);
  aCStack_48[0].y = -aCStack_48[0].y;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)(local_50 + 4)
            );
  aCStack_48[0].x = -aCStack_48[0].x;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,aCStack_48);
  this_ptr = g_CDemonRendererPtr;
  fVar2 = (float)(sky_texture->base).type;
  g_CDemonRendererPtr->vertex_buffer_ptr->light = fVar2;
  this_ptr->vertex_buffer_ptr->color = (int)fVar2;
  this_ptr->vertex_buffer_ptr->fog = fVar2;
  this_ptr->vertex_buffer_ptr->w_recip = 0.0;
  fVar2 = (float)(sky_texture->base).type;
  this_ptr->vertex_buffer_ptr[1].light = fVar2;
  this_ptr->vertex_buffer_ptr[1].color = (int)fVar2;
  this_ptr->vertex_buffer_ptr[1].fog = (float)(sky_texture->base).type;
  this_ptr->vertex_buffer_ptr[1].w_recip = 0.0;
  fVar2 = (float)(sky_texture->base).type;
  this_ptr->vertex_buffer_ptr[2].light = fVar2;
  this_ptr->vertex_buffer_ptr[2].color = (int)fVar2;
  this_ptr->vertex_buffer_ptr[2].fog = fVar2;
  this_ptr->vertex_buffer_ptr[2].w_recip = 0.0;
  fVar2 = (float)(sky_texture->base).type;
  this_ptr->vertex_buffer_ptr[3].light = fVar2;
  this_ptr->vertex_buffer_ptr[3].color = (int)fVar2;
  this_ptr->vertex_buffer_ptr[3].fog = fVar2;
  this_ptr->vertex_buffer_ptr[3].w_recip = 0.0;
  local_88.surface_normal.D = 0;
  local_68 = 1;
  local_70 = 0x80000;
  local_6c = 7.34684e-40;
  local_64 = 0x80000;
  local_60.x = 7.34684e-40;
  local_50._0_4_ = 4.2039e-45;
  local_60.y = 2.8026e-45;
  iVar8 = 0;
  local_60.z = 7.34684e-40;
  local_54 = 7.34684e-40;
  local_50._4_4_ = 7.34684e-40;
  aCStack_48[0].x = 0x80000;
  engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
            (this_ptr,(SMRGLHeaderPrimitive *)&stack0xffffff74,0x2c5);
  texture_name = (char *)0x0;
  do {
    iVar6 = 0;
    uv_offset = (float *)texture_name;
    do {
      iVar5 = iVar6 + 1;
      core_dskybox_cpp_generateSkyDomeVertex_FUN_004900b0
                ((float *)sky_texture,iVar8,iVar6,uv_offset);
      iVar6 = iVar5;
      uv_offset = (float *)((int)uv_offset + 1);
    } while (iVar5 < 4);
    brightness_factor = (float)((int)brightness_factor + 4);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x11);
  do {
    iVar6 = 0x1000000;
    fStack00000018 =
         (float)((int)((int)sky_texture +
                      (((int)sky_texture >> 0x1f) * -4 - (uint)(((int)sky_texture >> 0x1f) << 1 < 0)
                      )) >> 2 & 0xffffff);
    iVar8 = 0;
    fStack00000014 = (float)((int)fStack00000018 + 0x400000);
    iVar5 = 0;
    fStack00000010 = brightness_factor;
    do {
      local_70 = (int)fStack00000010 + iVar5;
      local_64 = local_70 + 1;
      local_60.z = (float)(local_70 + 5);
      local_50._4_4_ = local_70 + 4;
      iVar4 = iVar8 >> 0x1f;
      iVar3 = iVar8 + iVar4 * -4;
      local_6c = fStack00000018;
      iVar5 = iVar5 + 1;
      local_60.x = fStack00000018;
      iVar8 = iVar8 + 0x1000000;
      local_60.y = (float)((int)((iVar6 + (iVar6 >> 0x1f) * -4) - (uint)((iVar6 >> 0x1f) << 1 < 0))
                           >> 2 ^ 0xffffff);
      local_54 = fStack00000014;
      aCStack_48[0].x = (int)fStack00000014;
      local_68 = (int)(iVar3 - (uint)(iVar4 << 1 < 0)) >> 2 ^ 0xffffff;
      iVar6 = iVar6 + 0x1000000;
      local_50._0_4_ = local_60.y;
      aCStack_48[0].y = local_68;
      local_14 = local_64;
      engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
                (g_CDemonRendererPtr,&local_88,0x2c5);
    } while (iVar5 < 3);
  } while (fStack00000010 != 8.40779e-44);
  return;
}

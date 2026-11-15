// Name: core_dskybox.cpp_renderSkyDome_FUN_0046f480
// Address: 0046f480
// Address Range: [[0046f480, 0046f95f]]
// Convention: __cdecl
// Signature: void __cdecl core_dskybox_cpp_renderSkyDome_FUN_0046f480(SMRGLSkyTexture *sky_texture,char *texture_name,int brightness_factor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dskybox_cpp_renderSkyDome_FUN_0046f480(SMRGLSkyTexture *sky_texture,char *texture_name,int brightness_factor)

{
  char cVar1;
  CDemonRenderer *pCVar2;
  int v_coord;
  int iVar3;
  float fVar4;
  char *pcVar5;
  int iVar6;
  byte bVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  float afStackY_106c [994];
  CVector3f local_84;
  CVector3f local_78;
  float local_6c;
  byte local_68 [8];
  int local_60;
  int local_5c;
  float local_54;
  float local_50 [2];
  int iStack_48;
  int iStack_44;
  int local_40;
  float local_34;
  uint local_30;
  float local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  
  bVar7 = 0;
  pcVar5 = sky_texture->texture_name;
  do {
    cVar1 = *texture_name;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = texture_name[1];
    texture_name = texture_name + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  (sky_texture->base).type = brightness_factor;
  core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_00477d90(&g_CDemonRaytraceInstance,&local_84);
  local_54 = local_84.x;
  local_50[(uint)bVar7 * -2] = *(float *)((int)&local_84 + (uint)bVar7 * -8 + 4);
  local_50[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       *(float *)((int)&local_84 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_00477db0(&g_CDemonRaytraceInstance,&local_78);
  local_6c = local_78.x;
  *(uint *)(local_68 + (uint)bVar7 * -8) =
       *(uint *)((int)&local_78 + (uint)bVar7 * -8 + 4);
  *(uint *)(local_68 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_78 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  fVar4 = (float)_DAT_005bc7e1;
  _DAT_01c0b798 = (local_54 + local_6c) * fVar4;
  _DAT_01c0b7a0 = (local_50[1] + (float)local_68._4_4_) * fVar4;
  local_2c = (local_6c - local_54) * fVar4 * (float)_DAT_005bc7e9;
  _DAT_005f4a5c = 0.0;
  _DAT_01c0b79c = local_50[0];
  if (0.0 < local_2c) {
    _DAT_005f4a5c = local_2c;
  }
  local_30 = ((float)local_68._0_4_ - local_50[0]) * (float)_DAT_005bc7e9;
  if (_DAT_005f4a5c < local_30) {
    _DAT_005f4a5c = local_30;
  }
  local_34 = ((float)local_68._4_4_ - local_50[1]) * (float)_DAT_005bc7e1 * (float)_DAT_005bc7e9;
  if (_DAT_005f4a5c < local_34) {
    _DAT_005f4a5c = local_34;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,(CVector3f *)&DAT_01c0b798);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (DAT_005f2afc,(SMRGLTextureBasic *)&(sky_texture->base).count);
  fVar8 = (float10)fsin((float10)_DAT_005bc7f1);
  fVar9 = (float10)_DAT_005f4a5c;
  fVar10 = (float10)_DAT_005bc7f9;
  dVar11 = round((double)(fVar8 * fVar9 * fVar10));
  pCVar2 = DAT_005f2afc;
  local_68._4_4_ = (uint)ROUND(dVar11);
  local_5c = local_68._4_4_;
  dVar11 = round((double)(fVar9 * fVar10));
  local_68._4_4_ = (uint)ROUND(dVar11);
  engine_special_cpp_transformAndProjectPoint_FUN_005632a3
            (&pCVar2->vertex_buffer_ptr->projected_vertex,(CVector3i *)(local_68 + 4));
  local_68._0_4_ = -local_68._0_4_;
  engine_special_cpp_transformAndProjectPoint_FUN_005632a3
            (&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)local_68);
  local_60 = -local_60;
  engine_special_cpp_transformAndProjectPoint_FUN_005632a3
            (&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)local_68);
  local_68._0_4_ = -local_68._0_4_;
  engine_special_cpp_transformAndProjectPoint_FUN_005632a3
            (&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)local_68);
  pCVar2 = DAT_005f2afc;
  iVar6 = (sky_texture->base).type;
  DAT_005f2afc->vertex_buffer_ptr->r = iVar6;
  pCVar2->vertex_buffer_ptr->g = iVar6;
  pCVar2->vertex_buffer_ptr->b = (sky_texture->base).type;
  pCVar2->vertex_buffer_ptr->a = 0;
  iVar6 = (sky_texture->base).type;
  pCVar2->vertex_buffer_ptr[1].r = iVar6;
  pCVar2->vertex_buffer_ptr[1].g = iVar6;
  pCVar2->vertex_buffer_ptr[1].b = (sky_texture->base).type;
  pCVar2->vertex_buffer_ptr[1].a = 0;
  iVar6 = (sky_texture->base).type;
  pCVar2->vertex_buffer_ptr[2].r = iVar6;
  pCVar2->vertex_buffer_ptr[2].g = iVar6;
  pCVar2->vertex_buffer_ptr[2].b = iVar6;
  pCVar2->vertex_buffer_ptr[2].a = 0;
  iVar6 = (sky_texture->base).type;
  pCVar2->vertex_buffer_ptr[3].r = iVar6;
  pCVar2->vertex_buffer_ptr[3].g = iVar6;
  pCVar2->vertex_buffer_ptr[3].b = iVar6;
  pCVar2->vertex_buffer_ptr[3].a = 0;
  iVar6 = 0;
  engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0
            (pCVar2,(SMRGLPrimitivePoly *)&stack0xffffff2c,0x2c5);
  local_2c = 0.0;
  do {
    v_coord = 0;
    fVar4 = local_2c;
    do {
      iVar3 = v_coord + 1;
      core_dskybox_cpp_generateSkyDomeVertex_FUN_0046f340(sky_texture,iVar6,v_coord,(int)fVar4);
      v_coord = iVar3;
      fVar4 = (float)((int)fVar4 + 1);
    } while (iVar3 < 4);
    local_2c = (float)((int)local_2c + 4);
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
      engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0
                (DAT_005f2afc,(SMRGLPrimitivePoly *)&stack0xffffff2c,0x2c5);
    } while (iVar6 < 3);
    local_28 = local_28 + 4;
    local_30 = __BITCAST_FLOAT(CONCAT13(local_30._3_1_ + '\x01',(undefined3)local_30));
  } while (local_28 != 0x40);
  return;
}

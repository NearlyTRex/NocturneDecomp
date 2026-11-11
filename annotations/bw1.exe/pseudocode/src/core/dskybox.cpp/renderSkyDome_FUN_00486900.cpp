// Name: core_dskybox.cpp_renderSkyDome_FUN_00486900
// Address: 00486900
// Address Range: [[00486900, 00486ddf]]
// Convention: __cdecl
// Signature: void __cdecl core_dskybox_cpp_renderSkyDome_FUN_00486900(SMRGLSkyTexture *sky_texture,char *texture_name,int brightness_factor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dskybox_cpp_renderSkyDome_FUN_00486900(SMRGLSkyTexture *sky_texture,char *texture_name,int brightness_factor)

{
  char cVar1;
  float fVar2;
  CDemonRenderer *this_ptr;
  CVector3i *input;
  uint *extraout_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  float10 fVar10;
  float10 fVar11;
  float afStackY_106c [996];
  SMRGLPrimitivePoly local_cc;
  float local_54;
  float local_50 [4];
  int local_40;
  int local_3c;
  int local_38;
  float local_34;
  float local_30;
  float local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  bVar9 = 0;
  pcVar6 = sky_texture->texture_name;
  do {
    cVar1 = *texture_name;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = texture_name[1];
    texture_name = texture_name + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  (sky_texture->base).type = brightness_factor;
  core_dtrace_cpp_FUN_0048f210(&g_CDemonRaytraceInstance);
  local_54 = (float)local_cc.vertices[4].vertex_index;
  local_50[(uint)bVar9 * -2] = *(float *)((int)&local_cc + (uint)bVar9 * -8 + 0x4c);
  local_50[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       *(float *)((int)&local_cc + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 0x50);
  core_dtrace_cpp_FUN_0048f230(&g_CDemonRaytraceInstance);
  local_cc.vertices[6].vertex_index = local_cc.vertices[5].vertex_index;
  *(uint *)((int)&local_cc + (uint)bVar9 * -8 + 100) =
       *(uint *)((int)&local_cc + (uint)bVar9 * -8 + 0x58);
  *(uint *)((int)&local_cc + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 0x68) =
       *(uint *)((int)&local_cc + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 0x5c);
  fVar2 = (float)_DAT_005db724;
  _DAT_01bef1fc = (local_54 + (float)local_cc.vertices[6].vertex_index) * fVar2;
  _DAT_01bef204 = (local_50[1] + (float)local_cc.vertices[6].texture_v) * fVar2;
  local_2c = ((float)local_cc.vertices[6].vertex_index - local_54) * fVar2 * (float)_DAT_005db72c;
  _DAT_006144d4 = 0.0;
  _DAT_01bef200 = local_50[0];
  if (0.0 < local_2c) {
    _DAT_006144d4 = local_2c;
  }
  local_30 = ((float)local_cc.vertices[6].texture_u - local_50[0]) * (float)_DAT_005db72c;
  if (_DAT_006144d4 < local_30) {
    _DAT_006144d4 = local_30;
  }
  local_34 = ((float)local_cc.vertices[6].texture_v - local_50[1]) * (float)_DAT_005db724 *
             (float)_DAT_005db72c;
  if (_DAT_006144d4 < local_34) {
    _DAT_006144d4 = local_34;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,(CVector3f *)&DAT_01bef1fc);
  local_cc.base.base.count = 4;
  local_cc.base.surface_normal.D.i = 0;
  local_cc.base.surface_normal.C.i = 0;
  local_cc.base.surface_normal.B.i = 0;
  local_cc.base.surface_normal.A.i = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,(SMRGLTextureBasic *)&(sky_texture->base).count);
  fVar10 = (float10)fsin((float10)_DAT_005db734);
  fVar10 = fVar10 * (float10)_DAT_006144d4 * (float10)_DAT_005db73c;
  fVar11 = (float10)_DAT_006144d4 * (float10)_DAT_005db73c;
  round();
  local_cc.vertices[7].vertex_index = (int)ROUND(fVar10);
  local_cc.vertices[7].texture_v = local_cc.vertices[7].vertex_index;
  input = (CVector3i *)round();
  local_cc.vertices[7].texture_u = (int)ROUND(fVar11);
  engine_special_cpp_FUN_00580173((SProjectedVertex *)*extraout_ECX,input);
  local_cc.vertices[7].vertex_index = -local_cc.vertices[7].vertex_index;
  engine_special_cpp_FUN_00580173
            (&DAT_00612560->vertex_buffer_ptr[1].projected_vertex,
             (CVector3i *)(local_cc.vertices + 7));
  local_cc.vertices[7].texture_v = -local_cc.vertices[7].texture_v;
  engine_special_cpp_FUN_00580173
            (&DAT_00612560->vertex_buffer_ptr[2].projected_vertex,
             (CVector3i *)(local_cc.vertices + 7));
  local_cc.vertices[7].vertex_index = -local_cc.vertices[7].vertex_index;
  engine_special_cpp_FUN_00580173
            (&DAT_00612560->vertex_buffer_ptr[3].projected_vertex,
             (CVector3i *)(local_cc.vertices + 7));
  this_ptr = DAT_00612560;
  iVar7 = (sky_texture->base).type;
  DAT_00612560->vertex_buffer_ptr->r = iVar7;
  this_ptr->vertex_buffer_ptr->g = iVar7;
  this_ptr->vertex_buffer_ptr->b = (sky_texture->base).type;
  this_ptr->vertex_buffer_ptr->a = 0;
  iVar7 = (sky_texture->base).type;
  this_ptr->vertex_buffer_ptr[1].r = iVar7;
  this_ptr->vertex_buffer_ptr[1].g = iVar7;
  this_ptr->vertex_buffer_ptr[1].b = (sky_texture->base).type;
  this_ptr->vertex_buffer_ptr[1].a = 0;
  iVar7 = (sky_texture->base).type;
  this_ptr->vertex_buffer_ptr[2].r = iVar7;
  this_ptr->vertex_buffer_ptr[2].g = iVar7;
  this_ptr->vertex_buffer_ptr[2].b = iVar7;
  this_ptr->vertex_buffer_ptr[2].a = 0;
  iVar7 = (sky_texture->base).type;
  this_ptr->vertex_buffer_ptr[3].r = iVar7;
  this_ptr->vertex_buffer_ptr[3].g = iVar7;
  this_ptr->vertex_buffer_ptr[3].b = iVar7;
  this_ptr->vertex_buffer_ptr[3].a = 0;
  local_cc.vertices[0].vertex_index = 0;
  local_cc.vertices[1].vertex_index = 1;
  local_cc.vertices[0].texture_u = 0x80000;
  local_cc.vertices[0].texture_v = 0x80000;
  local_cc.vertices[1].texture_u = 0x80000;
  local_cc.vertices[1].texture_v = 0x80000;
  local_cc.vertices[3].vertex_index = 3;
  local_cc.vertices[2].vertex_index = 2;
  iVar7 = 0;
  local_cc.vertices[2].texture_u = 0x80000;
  local_cc.vertices[2].texture_v = 0x80000;
  local_cc.vertices[3].texture_u = 0x80000;
  local_cc.vertices[3].texture_v = 0x80000;
  engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210(this_ptr,&local_cc,0x2c5);
  local_24 = 0;
  do {
    iVar5 = 0;
    iVar8 = local_24;
    do {
      iVar4 = iVar5 + 1;
      core_dskybox_cpp_generateSkyDomeVertex_FUN_004867c0(sky_texture,iVar7,iVar5,iVar8);
      iVar5 = iVar4;
      iVar8 = iVar8 + 1;
    } while (iVar4 < 4);
    local_24 = local_24 + 4;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x11);
  local_20 = 0;
  local_28 = 0;
  do {
    local_1c = local_20;
    iVar5 = 0x1000000;
    local_14 = (int)((local_28 + (local_28 >> 0x1f) * -4) - (uint)((local_28 >> 0x1f) << 1 < 0)) >>
               2 & 0xffffff;
    iVar7 = 0;
    local_18 = local_14 + 0x400000;
    iVar8 = 0;
    do {
      local_cc.vertices[0].vertex_index = local_1c + iVar8;
      local_cc.vertices[1].vertex_index = local_cc.vertices[0].vertex_index + 1;
      local_cc.vertices[2].vertex_index = local_cc.vertices[0].vertex_index + 5;
      local_cc.vertices[3].vertex_index = local_cc.vertices[0].vertex_index + 4;
      iVar3 = iVar7 >> 0x1f;
      iVar4 = iVar7 + iVar3 * -4;
      local_cc.vertices[0].texture_u = local_14;
      iVar8 = iVar8 + 1;
      local_cc.vertices[1].texture_u = local_14;
      iVar7 = iVar7 + 0x1000000;
      local_cc.vertices[1].texture_v =
           (int)((iVar5 + (iVar5 >> 0x1f) * -4) - (uint)((iVar5 >> 0x1f) << 1 < 0)) >> 2 ^ 0xffffff;
      local_cc.vertices[2].texture_u = local_18;
      local_cc.vertices[3].texture_u = local_18;
      local_cc.vertices[0].texture_v = (int)(iVar4 - (uint)(iVar3 << 1 < 0)) >> 2 ^ 0xffffff;
      iVar5 = iVar5 + 0x1000000;
      local_cc.vertices[2].texture_v = local_cc.vertices[1].texture_v;
      local_cc.vertices[3].texture_v = local_cc.vertices[0].texture_v;
      local_40 = local_cc.vertices[1].vertex_index;
      local_3c = local_cc.vertices[2].vertex_index;
      local_38 = local_cc.vertices[3].vertex_index;
      engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210
                (DAT_00612560,&local_cc,0x2c5);
    } while (iVar8 < 3);
    local_20 = local_20 + 4;
    local_28 = CONCAT13(local_28._3_1_ + '\x01',(undefined3)local_28);
  } while (local_20 != 0x40);
  return;
}

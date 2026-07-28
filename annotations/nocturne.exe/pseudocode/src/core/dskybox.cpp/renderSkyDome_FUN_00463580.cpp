// Name: core_dskybox.cpp_renderSkyDome_FUN_00463580
// Address: 00463580
// Address Range: [[00463580, 00463a33]]
// Convention: __cdecl
// Signature: void __cdecl core_dskybox_cpp_renderSkyDome_FUN_00463580(SMRGLSkyTexture *sky_texture,char *texture_name,int brightness_factor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dskybox_cpp_renderSkyDome_FUN_00463580(SMRGLSkyTexture *sky_texture,char *texture_name,int brightness_factor)

{
  char cVar1;
  CDemonRenderer *pCVar2;
  int v_coord;
  int iVar3;
  float fVar4;
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
  float local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  
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
  core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_0046b9c0((CDemonRaytrace *)&DAT_01fba938,&local_60);
  core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_0046b9f0((CDemonRaytrace *)&DAT_01fba938,&local_54);
  fVar4 = (float)0.5;
  _DAT_01b7b728 = (local_60.x + local_54.x) * fVar4;
  _DAT_01b7b730 = (local_60.z + local_54.z) * fVar4;
  local_34 = (local_54.x - local_60.x) * fVar4 * (float)1.4139999999999999;
  _DAT_005b0678 = 0.0;
  _DAT_01b7b72c = local_60.y;
  if (0.0 < local_34) {
    _DAT_005b0678 = local_34;
  }
  local_2c = (local_54.y - local_60.y) * (float)1.4139999999999999;
  if (_DAT_005b0678 < local_2c) {
    _DAT_005b0678 = local_2c;
  }
  local_30 = (local_54.z - local_60.z) * (float)0.5 * (float)1.4139999999999999;
  if (_DAT_005b0678 < local_30) {
    _DAT_005b0678 = local_30;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (DAT_005ae704,(CVector3f *)&DAT_01b7b728);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (DAT_005ae704,(SMRGLTextureBasic *)&(sky_texture->base).count);
  fVar7 = (float10)fsin((float10)0.58904862253125001);
  fVar8 = (float10)_DAT_005b0678;
  fVar9 = (float10)256;
  dVar10 = round((double)(fVar7 * fVar8 * fVar9));
  pCVar2 = DAT_005ae704;
  local_74._4_4_ = (uint)ROUND(dVar10);
  local_68 = local_74._4_4_;
  dVar10 = round((double)(fVar8 * fVar9));
  local_74._4_4_ = (uint)ROUND(dVar10);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&pCVar2->vertex_buffer_ptr->projected_vertex,(CVector3i *)(local_74 + 4));
  local_74._0_4_ = -local_74._0_4_;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)local_74);
  local_6c = -local_6c;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)local_74);
  local_74._0_4_ = -local_74._0_4_;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)local_74);
  pCVar2 = DAT_005ae704;
  iVar6 = (sky_texture->base).type;
  DAT_005ae704->vertex_buffer_ptr->r = iVar6;
  pCVar2->vertex_buffer_ptr->g = iVar6;
  pCVar2->vertex_buffer_ptr->b = iVar6;
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
  engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460
            (pCVar2,(SMRGLPrimitivePoly *)&stack0xffffff44,0x2c5);
  local_2c = 0.0;
  do {
    v_coord = 0;
    fVar4 = local_2c;
    do {
      iVar3 = v_coord + 1;
      core_dskybox_cpp_generateSkyDomeVertex_FUN_00463440(sky_texture,iVar6,v_coord,(int)fVar4);
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
      engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460
                (DAT_005ae704,(SMRGLPrimitivePoly *)&stack0xffffff44,0x2c5);
    } while (iVar6 < 3);
    local_28 = local_28 + 4;
    local_30 = __BITCAST_FLOAT(CONCAT13(local_30._3_1_ + '\x01',(undefined3)local_30));
  } while (local_28 != 0x40);
  return;
}

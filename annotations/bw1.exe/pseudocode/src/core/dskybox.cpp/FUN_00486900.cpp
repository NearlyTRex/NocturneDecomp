// Name: core_dskybox.cpp_FUN_00486900
// Address: 00486900
// Address Range: [[00486900, 00486ddf]]
// Convention: __cdecl
// Signature: void __cdecl core_dskybox_cpp_FUN_00486900(SMRGLSkyTexture *sky_texture,char *texture_name,int brightness_factor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dskybox_cpp_FUN_00486900(SMRGLSkyTexture *sky_texture,char *texture_name,int brightness_factor)

{
  SMRGLSkyTexture SVar1;
  uint uVar2;
  float fVar3;
  CDemonRenderer *this_ptr;
  CVector3i *input;
  uint *extraout_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  SMRGLSkyTexture *pSVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  float10 fVar11;
  float10 fVar12;
  float afStackY_106c [996];
  SMRGLPrimitivePoly local_cc [4];
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  int local_b4;
  uint local_b0;
  uint local_ac;
  int local_a8;
  uint local_a4;
  uint local_a0;
  int local_9c;
  int local_98;
  uint local_94;
  int local_90;
  int local_8c;
  uint local_88;
  float local_84;
  float afStack_80 [5];
  float local_6c;
  float local_68;
  float local_64;
  int local_60;
  int local_5c;
  int local_58;
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
  
  bVar10 = 0;
  pSVar7 = sky_texture + 0xc;
  do {
    SVar1 = (SMRGLSkyTexture)*texture_name;
    *pSVar7 = SVar1;
    if (SVar1 == (SMRGLSkyTexture)0x0) break;
    SVar1 = *(SMRGLSkyTexture *)(texture_name + 1);
    texture_name = texture_name + 2;
    pSVar7[1] = SVar1;
    pSVar7 = pSVar7 + 2;
  } while (SVar1 != (SMRGLSkyTexture)0x0);
  *(int *)sky_texture = brightness_factor;
  core_dtrace_cpp_FUN_0048f210(&g_CDemonRaytraceInstance);
  local_54 = local_84;
  local_50[(uint)bVar10 * -2] = afStack_80[(uint)bVar10 * -2];
  local_50[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
       afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  core_dtrace_cpp_FUN_0048f230(&g_CDemonRaytraceInstance);
  local_6c = afStack_80[2];
  afStack_80[(uint)bVar10 * -2 + 6] = afStack_80[(uint)bVar10 * -2 + 3];
  afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
       afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
  fVar3 = (float)_DAT_005db724;
  _DAT_01bef1fc = (local_54 + local_6c) * fVar3;
  _DAT_01bef204 = (local_50[1] + local_64) * fVar3;
  local_2c = (local_6c - local_54) * fVar3 * (float)_DAT_005db72c;
  _DAT_006144d4 = 0.0;
  _DAT_01bef200 = local_50[0];
  if (0.0 < local_2c) {
    _DAT_006144d4 = local_2c;
  }
  local_30 = (local_68 - local_50[0]) * (float)_DAT_005db72c;
  if (_DAT_006144d4 < local_30) {
    _DAT_006144d4 = local_30;
  }
  local_34 = (local_64 - local_50[1]) * (float)_DAT_005db724 * (float)_DAT_005db72c;
  if (_DAT_006144d4 < local_34) {
    _DAT_006144d4 = local_34;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,(CVector3f *)&DAT_01bef1fc);
  local_c8 = 4;
  local_b8 = 0;
  local_bc = 0;
  local_c0 = 0;
  local_c4 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,(SMRGLTextureBasic *)(sky_texture + 4));
  fVar11 = (float10)fsin((float10)_DAT_005db734);
  fVar11 = fVar11 * (float10)_DAT_006144d4 * (float10)_DAT_005db73c;
  fVar12 = (float10)_DAT_006144d4 * (float10)_DAT_005db73c;
  round();
  local_60 = (int)ROUND(fVar11);
  local_58 = local_60;
  input = (CVector3i *)round();
  local_5c = (int)ROUND(fVar12);
  engine_special_cpp_FUN_00580173((SProjectedVertex *)*extraout_ECX,input);
  local_60 = -local_60;
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x30),(CVector3i *)&local_60);
  local_58 = -local_58;
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x60),(CVector3i *)&local_60);
  local_60 = -local_60;
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x90),(CVector3i *)&local_60);
  this_ptr = DAT_00612560;
  uVar2 = *(uint *)sky_texture;
  *(uint *)(*(int *)DAT_00612560 + 0x20) = uVar2;
  *(uint *)(*(int *)this_ptr + 0x24) = uVar2;
  *(uint *)(*(int *)this_ptr + 0x28) = *(uint *)sky_texture;
  *(uint *)(*(int *)this_ptr + 0x2c) = 0;
  uVar2 = *(uint *)sky_texture;
  *(uint *)(*(int *)this_ptr + 0x50) = uVar2;
  *(uint *)(*(int *)this_ptr + 0x54) = uVar2;
  *(uint *)(*(int *)this_ptr + 0x58) = *(uint *)sky_texture;
  *(uint *)(*(int *)this_ptr + 0x5c) = 0;
  uVar2 = *(uint *)sky_texture;
  *(uint *)(*(int *)this_ptr + 0x80) = uVar2;
  *(uint *)(*(int *)this_ptr + 0x84) = uVar2;
  *(uint *)(*(int *)this_ptr + 0x88) = uVar2;
  *(uint *)(*(int *)this_ptr + 0x8c) = 0;
  uVar2 = *(uint *)sky_texture;
  *(uint *)(*(int *)this_ptr + 0xb0) = uVar2;
  *(uint *)(*(int *)this_ptr + 0xb4) = uVar2;
  *(uint *)(*(int *)this_ptr + 0xb8) = uVar2;
  *(uint *)(*(int *)this_ptr + 0xbc) = 0;
  local_b4 = 0;
  local_a8 = 1;
  local_b0 = 0x80000;
  local_ac = 0x80000;
  local_a4 = 0x80000;
  local_a0 = 0x80000;
  local_90 = 3;
  local_9c = 2;
  iVar8 = 0;
  local_98 = 0x80000;
  local_94 = 0x80000;
  local_8c = 0x80000;
  local_88 = 0x80000;
  engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210(this_ptr,local_cc,0x2c5);
  local_24 = 0;
  do {
    iVar6 = 0;
    iVar9 = local_24;
    do {
      iVar5 = iVar6 + 1;
      core_dskybox_cpp_generateSkyDomeVertex_FUN_004867c0(sky_texture,iVar8,iVar6,iVar9);
      iVar6 = iVar5;
      iVar9 = iVar9 + 1;
    } while (iVar5 < 4);
    local_24 = local_24 + 4;
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
    iVar9 = 0;
    do {
      local_b4 = local_1c + iVar9;
      local_a8 = local_b4 + 1;
      local_9c = local_b4 + 5;
      local_90 = local_b4 + 4;
      iVar4 = iVar8 >> 0x1f;
      iVar5 = iVar8 + iVar4 * -4;
      local_b0 = local_14;
      iVar9 = iVar9 + 1;
      local_a4 = local_14;
      iVar8 = iVar8 + 0x1000000;
      local_a0 = (int)((iVar6 + (iVar6 >> 0x1f) * -4) - (uint)((iVar6 >> 0x1f) << 1 < 0)) >> 2 ^
                 0xffffff;
      local_98 = local_18;
      local_8c = local_18;
      local_ac = (int)(iVar5 - (uint)(iVar4 << 1 < 0)) >> 2 ^ 0xffffff;
      iVar6 = iVar6 + 0x1000000;
      local_94 = local_a0;
      local_88 = local_ac;
      local_40 = local_a8;
      local_3c = local_9c;
      local_38 = local_90;
      engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210(DAT_00612560,local_cc,0x2c5)
      ;
    } while (iVar9 < 3);
    local_20 = local_20 + 4;
    local_28 = CONCAT13(local_28._3_1_ + '\x01',(undefined3)local_28);
  } while (local_20 != 0x40);
  return;
}

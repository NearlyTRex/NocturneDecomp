// Name: core_weather.cpp_FUN_005ae890
// Address: 005ae890
// Address Range: [[005ae890, 005aefbb]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_FUN_005ae890(CWeather *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_weather_cpp_FUN_005ae890(CWeather *this_ptr)

{
  SProjectedVertex *output;
  uint uVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CVector3f *world_position;
  uint uVar6;
  byte bVar7;
  uint auStackY_10bc [1002];
  SMRGLHeaderPrimitive local_fc [4];
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  CVector3f local_d4;
  CVector3f local_c8;
  float local_bc;
  float local_b8;
  float local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  CVector3f local_74;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  float local_44;
  float local_40;
  float local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  int local_14;
  int local_10;
  
  bVar7 = 0;
  if (*(int *)this_ptr == 0) {
    return;
  }
  engine_matrix_c_FUN_00483b70(DAT_00612560);
  local_d4._0_4_ = local_74._0_4_;
  *(uint *)((int)&local_d4 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_74 + (uint)bVar7 * -8 + 4);
  *(uint *)((int)&local_d4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       *(uint *)((int)&local_74 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  if (*(int *)this_ptr == 1) {
    local_d4._0_4_ = 0;
  }
  if (*(int *)this_ptr == 1) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (DAT_00612560,(SMRGLTextureBasic *)&DAT_00626050);
    pCVar2 = DAT_00612560;
    *(uint *)(*(int *)DAT_00612560 + 0x18) = 0x80000;
    *(uint *)(*(int *)pCVar2 + 0x1c) = 0x80000;
    *(uint *)(*(int *)pCVar2 + 0x48) = 0x780000;
    *(uint *)(*(int *)pCVar2 + 0x4c) = 0x80000;
    *(uint *)(*(int *)pCVar2 + 0x78) = 0x780000;
    *(uint *)(*(int *)pCVar2 + 0x7c) = 0xf80000;
    *(uint *)(*(int *)pCVar2 + 0xa8) = 0x80000;
    *(uint *)(*(int *)pCVar2 + 0xac) = 0xf80000;
  }
  else {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (DAT_00612560,(SMRGLTextureBasic *)&DAT_00626080);
  }
  core_set_cpp_CDemonSet_setLightingParameters_FUN_00551c30
            (g_CDemonSetPtr,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,
             (CVector3f *)0x0,(CMatrix3x3f *)0x0);
  local_1c = 0.1;
  local_18 = 0.1;
  if (*(int *)this_ptr == 1) {
    local_18 = -0.4;
    local_1c = 0.05;
  }
  local_f8 = 4;
  local_e8 = 0;
  local_ec = 0;
  local_f0 = 0;
  local_f4 = 0;
  local_e4 = 0;
  local_e0 = 1;
  local_dc = 2;
  local_d8 = 3;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,1);
  world_position = (CVector3f *)&DAT_02c997f8;
  uVar6 = 0;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0x8000);
  do {
    output = *(SProjectedVertex **)DAT_00612560;
    local_a4 = (int)ROUND(*(float *)world_position * _DAT_00607f90);
    local_a0 = (int)ROUND(*(float *)&world_position->field_0x4 * _DAT_00607f90);
    local_9c = (int)ROUND(*(float *)&world_position->field_0x8 * _DAT_00607f90);
    engine_special_cpp_FUN_0058043c(output,(CVector3i *)&local_a4);
    iVar3 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_00484fd0
                      (DAT_00612560,(SRenderVertex *)output);
    if (iVar3 != 0) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
                (DAT_00612560,world_position);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                (DAT_00612560,&local_d4,(CVector3f *)0x0);
      local_50 = (int)ROUND(*(float *)world_position * _DAT_00607f90);
      local_4c = (int)ROUND(*(float *)&world_position->field_0x4 * _DAT_00607f90);
      local_48 = (int)ROUND(*(float *)&world_position->field_0x8 * _DAT_00607f90);
      core_set_cpp_CDemonSet_computeLighting_FUN_00552a70
                (g_CDemonSetPtr,(CVector3i *)&local_50,(CVector3i *)0x0,0,4);
      pCVar2 = DAT_00612560;
      if (*(int *)this_ptr == 2) {
        iVar4 = (uVar6 & 3) * 0x400000;
        local_20 = iVar4 + 0x80000;
        iVar5 = ((int)(uVar6 & 0xc) >> 2) * 0x400000;
        *(int *)(*(int *)DAT_00612560 + 0x18) = local_20;
        iVar3 = iVar5 + 0x80000;
        *(int *)(*(int *)pCVar2 + 0x1c) = iVar3;
        iVar4 = iVar4 + 0x380000;
        *(int *)(*(int *)pCVar2 + 0x48) = iVar4;
        *(int *)(*(int *)pCVar2 + 0x4c) = iVar3;
        *(int *)(*(int *)pCVar2 + 0x78) = iVar4;
        iVar5 = iVar5 + 0x380000;
        *(int *)(*(int *)pCVar2 + 0x7c) = iVar5;
        *(int *)(*(int *)pCVar2 + 0xa8) = local_20;
        *(int *)(*(int *)pCVar2 + 0xac) = iVar5;
      }
      local_b8 = -local_18;
      local_bc = local_1c;
      local_b4 = 0.0;
      local_2c = (int)ROUND(local_1c * _DAT_00607f90);
      local_28 = (int)ROUND(local_b8 * _DAT_00607f90);
      local_24 = (int)ROUND(_DAT_00607f90 * 0.0);
      engine_special_cpp_FUN_00580173(*(SProjectedVertex **)DAT_00612560,(CVector3i *)&local_2c);
      local_bc = -local_bc;
      local_b0 = (int)ROUND(local_bc * _DAT_00607f90);
      local_ac = (int)ROUND(local_b8 * _DAT_00607f90);
      local_a8 = (int)ROUND(local_b4 * _DAT_00607f90);
      engine_special_cpp_FUN_00580173
                ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x30),(CVector3i *)&local_b0);
      local_b8 = -local_b8;
      local_8c = (int)ROUND(local_bc * _DAT_00607f90);
      local_88 = (int)ROUND(local_b8 * _DAT_00607f90);
      local_84 = (int)ROUND(local_b4 * _DAT_00607f90);
      engine_special_cpp_FUN_00580173
                ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x60),(CVector3i *)&local_8c);
      local_bc = -local_bc;
      local_68 = (int)ROUND(local_bc * _DAT_00607f90);
      local_64 = (int)ROUND(local_b8 * _DAT_00607f90);
      local_60 = (int)ROUND(local_b4 * _DAT_00607f90);
      engine_special_cpp_FUN_00580173
                ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x90),(CVector3i *)&local_68);
      engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(DAT_00612560,local_fc);
      engine_matrix_c_pop_FUN_004839a0();
    }
    uVar6 = uVar6 + 1;
    world_position = world_position + 1;
  } while ((int)uVar6 < 200);
  if (*(int *)this_ptr == 1) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (DAT_00612560,(SMRGLTextureBasic *)&DAT_00626068);
    pCVar2 = DAT_00612560;
    *(uint *)(*(int *)DAT_00612560 + 0x18) = 0x80000;
    *(uint *)(*(int *)pCVar2 + 0x1c) = 0x80000;
    *(uint *)(*(int *)pCVar2 + 0x48) = 0x780000;
    *(uint *)(*(int *)pCVar2 + 0x4c) = 0x80000;
    *(uint *)(*(int *)pCVar2 + 0x78) = 0x780000;
    *(uint *)(*(int *)pCVar2 + 0x7c) = 0xf80000;
    iVar3 = 0;
    *(uint *)(*(int *)pCVar2 + 0xa8) = 0x80000;
    local_10 = 0;
    local_14 = 0;
    *(uint *)(*(int *)pCVar2 + 0xac) = 0xf80000;
    do {
      if (*(char *)(iVar3 + 0x2c9a478) != '\0') {
        uVar1 = *(uint *)(local_10 + 0x2c9a158);
        iVar4 = (uint)bVar7 * -8 + local_14;
        local_c8._0_4_ = *(uint *)(&DAT_02c997f8 + local_14);
        *(uint *)((int)&local_c8 + (uint)bVar7 * -8 + 4) =
             *(uint *)(&DAT_02c997fc + iVar4);
        *(uint *)((int)&local_c8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             *(uint *)((int)(&DAT_02c997fc + iVar4) + ((uint)bVar7 * -2 + 1) * 4);
        local_c8._4_4_ = uVar1;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
                  (DAT_00612560,&local_c8);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                  (DAT_00612560,&local_d4,(CVector3f *)0x0);
        local_40 = 0.0;
        local_3c = 0.0;
        local_44 = 0.2;
        local_80 = (int)ROUND(_DAT_00607f90 * 0.2);
        local_7c = (int)ROUND(_DAT_00607f90 * 0.0);
        local_78 = (int)ROUND(_DAT_00607f90 * 0.0);
        engine_special_cpp_FUN_00580173(*(SProjectedVertex **)DAT_00612560,(CVector3i *)&local_80);
        local_44 = -local_44;
        local_5c = (int)ROUND(local_44 * _DAT_00607f90);
        local_58 = (int)ROUND(local_40 * _DAT_00607f90);
        local_54 = (int)ROUND(local_3c * _DAT_00607f90);
        engine_special_cpp_FUN_00580173
                  ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x30),(CVector3i *)&local_5c);
        local_40 = 0.4;
        local_38 = (int)ROUND(local_44 * _DAT_00607f90);
        local_34 = (int)ROUND(_DAT_00607f90 * 0.4);
        local_30 = (int)ROUND(local_3c * _DAT_00607f90);
        engine_special_cpp_FUN_00580173
                  ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x60),(CVector3i *)&local_38);
        local_44 = -local_44;
        local_98 = (int)ROUND(local_44 * _DAT_00607f90);
        local_94 = (int)ROUND(local_40 * _DAT_00607f90);
        local_90 = (int)ROUND(local_3c * _DAT_00607f90);
        engine_special_cpp_FUN_00580173
                  ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x90),(CVector3i *)&local_98);
        engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(DAT_00612560,local_fc);
        engine_matrix_c_pop_FUN_004839a0();
      }
      iVar3 = iVar3 + 1;
      local_14 = local_14 + 0xc;
      local_10 = local_10 + 4;
    } while (iVar3 < 200);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
  return;
}

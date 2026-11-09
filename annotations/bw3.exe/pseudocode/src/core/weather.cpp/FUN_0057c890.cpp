// Name: core_weather.cpp_FUN_0057c890
// Address: 0057c890
// Address Range: [[0057c890, 0057d04c]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_FUN_0057c890(CWeather *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_weather_cpp_FUN_0057c890(CWeather *this_ptr)

{
  SProjectedVertex *output;
  uint uVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  int iVar4;
  CVector3f *world_position;
  uint uVar5;
  byte bVar6;
  uint auStackY_1078 [984];
  SMRGLHeaderPrimitive local_f4 [4];
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  CVector3f local_90;
  CVector3f local_84;
  CVector3f local_78;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  float local_14;
  float local_10;
  int local_c;
  int local_8;
  
  bVar6 = 0;
  if (*(int *)this_ptr != 0) {
    engine_matrix_c_FUN_0046d250(DAT_005f2afc);
    local_84._0_4_ = local_78._0_4_;
    *(uint *)((int)&local_84 + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_78 + (uint)bVar6 * -8 + 4);
    *(uint *)((int)&local_84 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         *(uint *)((int)&local_78 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    if ((*(int *)this_ptr == 1) || (*(int *)this_ptr == 5)) {
      local_84._0_4_ = 0;
    }
    if ((*(int *)this_ptr == 1) || (*(int *)this_ptr == 5)) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_006071f4);
      pCVar2 = DAT_005f2afc;
      *(uint *)(*(int *)DAT_005f2afc + 0x18) = 0x80000;
      *(uint *)(*(int *)pCVar2 + 0x1c) = 0x80000;
      *(uint *)(*(int *)pCVar2 + 0x48) = 0x780000;
      *(uint *)(*(int *)pCVar2 + 0x4c) = 0x80000;
      *(uint *)(*(int *)pCVar2 + 0x78) = 0x780000;
      *(uint *)(*(int *)pCVar2 + 0x7c) = 0xf80000;
      *(uint *)(*(int *)pCVar2 + 0xa8) = 0x80000;
      *(uint *)(*(int *)pCVar2 + 0xac) = 0xf80000;
    }
    else {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_00607224);
    }
    core_set_cpp_CDemonSet_setLightingParameters_FUN_005375c0
              (g_CDemonSetPtr,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,
               (CVector3f *)0x0,(CMatrix3x3f *)0x0);
    local_10 = 0.1;
    local_14 = 0.1;
    if ((*(int *)this_ptr == 1) || (*(int *)this_ptr == 5)) {
      local_14 = -0.4;
      local_10 = 0.05;
    }
    local_f0 = 4;
    local_e0 = 0;
    local_e4 = 0;
    local_e8 = 0;
    local_ec = 0;
    local_dc = 0;
    local_d8 = 1;
    local_d4 = 2;
    local_d0 = 3;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,0x8000);
    uVar5 = 0;
    if (0 < *(int *)(this_ptr + 0x38)) {
      world_position = (CVector3f *)&DAT_02d0c208;
      do {
        output = *(SProjectedVertex **)DAT_005f2afc;
        local_c0 = (int)ROUND(*(float *)world_position * _DAT_005e6360);
        local_bc = (int)ROUND(*(float *)&world_position->field_0x4 * _DAT_005e6360);
        local_b8 = (int)ROUND(*(float *)&world_position->field_0x8 * _DAT_005e6360);
        engine_special_cpp_FUN_0056356c(output,(CVector3i *)&local_c0);
        iVar3 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0046e6b0
                          (DAT_005f2afc,(SRenderVertex *)output);
        if (iVar3 != 0) {
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                    (DAT_005f2afc,world_position);
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                    (DAT_005f2afc,&local_84,(CVector3f *)0x0);
          local_48 = (int)ROUND(*(float *)world_position * _DAT_005e6360);
          local_44 = (int)ROUND(*(float *)&world_position->field_0x4 * _DAT_005e6360);
          local_40 = (int)ROUND(*(float *)&world_position->field_0x8 * _DAT_005e6360);
          core_set_cpp_CDemonSet_computeLighting_FUN_00538400
                    (g_CDemonSetPtr,(CVector3i *)&local_48,(CVector3i *)0x0,0,4);
          pCVar2 = DAT_005f2afc;
          if (*(int *)this_ptr == 2) {
            local_18 = ((int)(uVar5 & 0xc) >> 2) * 0x400000;
            iVar4 = (uVar5 & 3) * 0x400000;
            iVar3 = iVar4 + 0x80000;
            *(int *)(*(int *)DAT_005f2afc + 0x18) = iVar3;
            *(int *)(*(int *)pCVar2 + 0x1c) = local_18 + 0x80000;
            iVar4 = iVar4 + 0x380000;
            *(int *)(*(int *)pCVar2 + 0x48) = iVar4;
            *(int *)(*(int *)pCVar2 + 0x4c) = local_18 + 0x80000;
            *(int *)(*(int *)pCVar2 + 0x78) = iVar4;
            *(int *)(*(int *)pCVar2 + 0x7c) = local_18 + 0x380000;
            *(int *)(*(int *)pCVar2 + 0xa8) = iVar3;
            *(int *)(*(int *)pCVar2 + 0xac) = local_18 + 0x380000;
          }
          local_20 = -local_14;
          local_24 = local_10;
          local_1c = 0.0;
          local_54 = (int)ROUND(local_10 * _DAT_005e6360);
          local_50 = (int)ROUND(local_20 * _DAT_005e6360);
          local_4c = (int)ROUND(_DAT_005e6360 * 0.0);
          engine_special_cpp_FUN_005632a3(*(SProjectedVertex **)DAT_005f2afc,(CVector3i *)&local_54)
          ;
          local_24 = -local_24;
          local_a8 = (int)ROUND(local_24 * _DAT_005e6360);
          local_a4 = (int)ROUND(local_20 * _DAT_005e6360);
          local_a0 = (int)ROUND(local_1c * _DAT_005e6360);
          engine_special_cpp_FUN_005632a3
                    ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x30),(CVector3i *)&local_a8);
          local_20 = -local_20;
          local_60 = (int)ROUND(local_24 * _DAT_005e6360);
          local_5c = (int)ROUND(local_20 * _DAT_005e6360);
          local_58 = (int)ROUND(local_1c * _DAT_005e6360);
          engine_special_cpp_FUN_005632a3
                    ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x60),(CVector3i *)&local_60);
          local_24 = -local_24;
          local_9c = (int)ROUND(local_24 * _DAT_005e6360);
          local_98 = (int)ROUND(local_20 * _DAT_005e6360);
          local_94 = (int)ROUND(local_1c * _DAT_005e6360);
          engine_special_cpp_FUN_005632a3
                    ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x90),(CVector3i *)&local_9c);
          engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730(DAT_005f2afc,local_f4);
          engine_matrix_c_pop_FUN_0046d080();
        }
        uVar5 = uVar5 + 1;
        world_position = world_position + 1;
      } while ((int)uVar5 < *(int *)(this_ptr + 0x38));
    }
    if ((*(int *)this_ptr == 1) || (*(int *)this_ptr == 5)) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_0060720c);
      pCVar2 = DAT_005f2afc;
      *(uint *)(*(int *)DAT_005f2afc + 0x18) = 0x80000;
      *(uint *)(*(int *)pCVar2 + 0x1c) = 0x80000;
      *(uint *)(*(int *)pCVar2 + 0x48) = 0x780000;
      *(uint *)(*(int *)pCVar2 + 0x4c) = 0x80000;
      *(uint *)(*(int *)pCVar2 + 0x78) = 0x780000;
      *(uint *)(*(int *)pCVar2 + 0x7c) = 0xf80000;
      *(uint *)(*(int *)pCVar2 + 0xa8) = 0x80000;
      *(uint *)(*(int *)pCVar2 + 0xac) = 0xf80000;
      iVar3 = 0;
      if (0 < *(int *)(this_ptr + 0x38)) {
        local_8 = 0;
        local_c = 0;
        do {
          if (*(char *)(iVar3 + 0x2d1fa88) != '\0') {
            uVar1 = *(uint *)(local_8 + 0x2d1db48);
            iVar4 = (uint)bVar6 * -8 + local_c;
            local_90._0_4_ = *(uint *)(&DAT_02d0c208 + local_c);
            *(uint *)((int)&local_90 + (uint)bVar6 * -8 + 4) =
                 *(uint *)(&DAT_02d0c20c + iVar4);
            *(uint *)((int)&local_90 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
                 *(uint *)((int)(&DAT_02d0c20c + iVar4) + ((uint)bVar6 * -2 + 1) * 4);
            local_90._4_4_ = uVar1;
            engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                      (DAT_005f2afc,&local_90);
            engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                      (DAT_005f2afc,&local_84,(CVector3f *)0x0);
            local_30 = 0.2;
            local_2c = 0.0;
            local_28 = 0.0;
            local_b4 = (int)ROUND(_DAT_005e6360 * 0.2);
            local_b0 = (int)ROUND(_DAT_005e6360 * 0.0);
            local_ac = (int)ROUND(_DAT_005e6360 * 0.0);
            engine_special_cpp_FUN_005632a3
                      (*(SProjectedVertex **)DAT_005f2afc,(CVector3i *)&local_b4);
            local_30 = -local_30;
            local_cc = (int)ROUND(local_30 * _DAT_005e6360);
            local_c8 = (int)ROUND(local_2c * _DAT_005e6360);
            local_c4 = (int)ROUND(local_28 * _DAT_005e6360);
            engine_special_cpp_FUN_005632a3
                      ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x30),(CVector3i *)&local_cc);
            local_2c = 0.4;
            local_6c = (int)ROUND(local_30 * _DAT_005e6360);
            local_68 = (int)ROUND(_DAT_005e6360 * 0.4);
            local_64 = (int)ROUND(local_28 * _DAT_005e6360);
            engine_special_cpp_FUN_005632a3
                      ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x60),(CVector3i *)&local_6c);
            local_30 = -local_30;
            local_3c = (int)ROUND(local_30 * _DAT_005e6360);
            local_38 = (int)ROUND(local_2c * _DAT_005e6360);
            local_34 = (int)ROUND(local_28 * _DAT_005e6360);
            engine_special_cpp_FUN_005632a3
                      ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x90),(CVector3i *)&local_3c);
            engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
                      (DAT_005f2afc,local_f4);
            engine_matrix_c_pop_FUN_0046d080();
          }
          local_8 = local_8 + 4;
          iVar3 = iVar3 + 1;
          local_c = local_c + 0xc;
        } while (iVar3 < *(int *)(this_ptr + 0x38));
      }
    }
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
    return;
  }
  return;
}

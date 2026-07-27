// Name: core_fire.cpp_CFireball_render_FUN_00484390
// Address: 00484390
// Address Range: [[00484390, 00484b5b]]
// Convention: unknown
// Signature: void core_fire_cpp_CFireball_render_FUN_00484390(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_CFireball_render_FUN_00484390(float *param_1)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  byte *puVar5;
  float fVar6;
  float local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  float local_74;
  float local_70;
  uint local_6c;
  int local_68;
  int local_64;
  int local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  int local_44;
  int local_40;
  int local_3c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  local_20 = 0.5;
  if (param_1[0x11] == 0.0) {
    local_20 = 4.0;
  }
  if (param_1[0x11] == 2.8026e-45) {
    local_20 = 0.666;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(DAT_005ae704,param_1);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50(DAT_005ae704,param_1 + 0x13,0)
  ;
  if (param_1[0x11] == 0.0) {
    uVar4 = 0x1c08ec4;
  }
  else if (param_1[0x11] == 1.4013e-45) {
    uVar4 = 0x1c09040;
  }
  else {
    uVar4 = 0x1c091bc;
  }
  iVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(uVar4);
  puVar1 = *(uint **)(iVar3 + 0x350);
  local_e0 = *puVar1;
  local_dc = puVar1[1];
  local_d8 = puVar1[2];
  local_d4 = puVar1[3];
  local_d0 = puVar1[4];
  local_cc = puVar1[5];
  iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(&local_e0,0);
  if (iVar3 != 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_0050adc0
              (0x01E57284,param_1,&DAT_02dd1184,&local_e0,&local_d4,0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(uVar4,0,0xffffffff);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
  if ((iVar3 != 0) &&
     (iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704), iVar3 == 0)
     ) {
    DAT_005c502c = 0x80000;
    _DAT_005c5030 = 0xf80000;
    _DAT_005c505c = 0xf80000;
    _DAT_005c5060 = 0xf80000;
    _DAT_005c508c = 0xf80000;
    _DAT_005c5090 = 0x80000;
    _DAT_005c50bc = 0x80000;
    _DAT_005c50c0 = 0x80000;
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
              (DAT_005ae704,&DAT_01c08d08,0);
    local_74 = -local_20;
    local_6c = 0;
    local_68 = (int)ROUND(local_74 * 256.0f);
    local_64 = (int)ROUND(local_74 * 256.0f);
    local_60 = (int)ROUND(256.0f * 0.0);
    local_70 = local_74;
    local_28 = local_74;
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704,&local_68);
    local_6c = 0;
    local_74 = local_20;
    local_70 = local_28;
    local_c8 = (int)ROUND(local_20 * 256.0f);
    local_c4 = (int)ROUND(local_28 * 256.0f);
    local_c0 = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x30,&local_c8);
    local_74 = local_20;
    local_70 = local_20;
    local_6c = 0;
    local_b0 = (int)ROUND(local_20 * 256.0f);
    local_ac = (int)ROUND(local_20 * 256.0f);
    local_a8 = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x60,&local_b0);
    local_74 = local_28;
    local_70 = local_20;
    local_6c = 0;
    local_80 = (int)ROUND(local_28 * 256.0f);
    local_7c = (int)ROUND(local_20 * 256.0f);
    local_78 = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x90,&local_80);
    if (param_1[0x11] == 1.4013e-45) {
      puVar5 = &DAT_005b8514;
    }
    else if (param_1[0x11] == 2.8026e-45) {
      puVar5 = &DAT_005b84fc;
    }
    else {
      puVar5 = &DAT_005b84cc;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,puVar5);
    lVar2 = (longlong)(int)param_1[0xe] * (longlong)(0xffff - _DAT_01c038f4);
    DAT_005c5040 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    DAT_005c5034 = 0xffff;
    DAT_005c5038 = 0xffff;
    DAT_005c503c = 0xffff;
    DAT_005c5064 = 0xffff;
    DAT_005c5068 = 0xffff;
    DAT_005c506c = 0xffff;
    DAT_005c5094 = 0xffff;
    DAT_005c5098 = 0xffff;
    DAT_005c509c = 0xffff;
    DAT_005c50c4 = 0xffff;
    DAT_005c50c8 = 0xffff;
    DAT_005c50cc = 0xffff;
    DAT_005c5070 = DAT_005c5040;
    _DAT_005c50a0 = DAT_005c5040;
    _DAT_005c50d0 = DAT_005c5040;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080(DAT_005ae704,0x1c08d20);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
    if ((param_1[0x11] != 1.4013e-45) && (param_1[0x11] != 2.8026e-45)) {
      local_50 = *param_1;
      local_4c = param_1[1];
      local_48 = param_1[2];
      local_a4 = param_1[3];
      local_a0 = param_1[4];
      iVar3 = 0;
      local_e4 = 0.1;
      local_9c = param_1[5];
      fVar6 = 1.0;
      do {
        local_e4 = local_e4 * (float)0.69999999999999996;
        fVar6 = (float)0.69999999999999996 * fVar6;
        local_5c = local_a4 * local_e4;
        local_a0 = local_a0 - local_e4 * param_1[7];
        local_54 = local_9c * local_e4;
        local_58 = local_a0 * local_e4;
        local_50 = local_50 - local_5c;
        local_48 = local_48 - local_54;
        local_4c = local_4c - local_58;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                  (DAT_005ae704,&local_50,fVar6);
        engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
                  (DAT_005ae704,&DAT_01c08d08,0);
        local_74 = -local_20 * fVar6;
        local_6c = 0;
        local_98 = (int)ROUND(local_74 * 256.0f);
        local_94 = (int)ROUND(local_74 * 256.0f);
        local_90 = (int)ROUND(256.0f * 0.0);
        local_70 = local_74;
        local_1c = local_74;
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704,&local_98);
        local_74 = local_20 * fVar6;
        local_6c = 0;
        local_70 = local_1c;
        local_bc = (int)ROUND(local_74 * 256.0f);
        local_b8 = (int)ROUND(local_1c * 256.0f);
        local_b4 = (int)ROUND(256.0f * 0.0);
        local_18 = local_74;
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x30,&local_bc);
        local_6c = 0;
        local_74 = local_18;
        local_70 = local_18;
        local_44 = (int)ROUND(local_18 * 256.0f);
        local_40 = (int)ROUND(local_18 * 256.0f);
        local_3c = (int)ROUND(256.0f * 0.0);
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x60,&local_44);
        local_74 = local_1c;
        local_70 = local_18;
        local_6c = 0;
        local_8c = (int)ROUND(local_1c * 256.0f);
        local_88 = (int)ROUND(local_18 * 256.0f);
        local_84 = (int)ROUND(256.0f * 0.0);
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x90,&local_8c);
        core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670(_DAT_007f7370,param_1,0);
        lVar2 = (longlong)(int)param_1[0xe] * (longlong)(0xffff - _DAT_01c038f4);
        DAT_005c5040 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        DAT_005c5034 = 0xffff;
        DAT_005c5038 = 0xffff;
        DAT_005c503c = 0xffff;
        DAT_005c5064 = 0xffff;
        DAT_005c5068 = 0xffff;
        DAT_005c506c = 0xffff;
        DAT_005c5094 = 0xffff;
        DAT_005c5098 = 0xffff;
        DAT_005c509c = 0xffff;
        DAT_005c50c4 = 0xffff;
        DAT_005c50c8 = 0xffff;
        DAT_005c50cc = 0xffff;
        DAT_005c5070 = DAT_005c5040;
        _DAT_005c50a0 = DAT_005c5040;
        _DAT_005c50d0 = DAT_005c5040;
        engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
        engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
                  (DAT_005ae704,0x1c08d20);
        engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
        iVar3 = iVar3 + 1;
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
      } while (iVar3 < 3);
    }
  }
  return;
}

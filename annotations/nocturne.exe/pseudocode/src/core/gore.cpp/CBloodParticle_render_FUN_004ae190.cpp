// Name: core_gore.cpp_CBloodParticle_render_FUN_004ae190
// Address: 004ae190
// Address Range: [[004ae190, 004ae8ff]]
// Convention: unknown
// Signature: void core_gore_cpp_CBloodParticle_render_FUN_004ae190(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gore_cpp_CBloodParticle_render_FUN_004ae190(float *param_1)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  float local_f0;
  float local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  float local_ac;
  float local_a8;
  uint local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  float local_4c;
  float local_48;
  float local_44;
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  
  iVar5 = *DAT_005ae704;
  local_70 = (int)ROUND(*param_1 * _DAT_0059e4d4);
  local_6c = (int)ROUND(param_1[1] * _DAT_0059e4d4);
  local_68 = (int)ROUND(param_1[2] * _DAT_0059e4d4);
  wincore_windll_cpp_transformPoint_FUN_00530a25(iVar5,&local_70);
  if ((*(byte *)(iVar5 + 0x13) & 0x80) != 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(DAT_005ae704,param_1);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50(DAT_005ae704,&DAT_01c78ca8,0);
  local_ac = -0.1;
  local_a8 = -0.1;
  local_a4 = 0;
  local_e8 = (int)ROUND(_DAT_0059e4d4 * -0.1);
  local_e4 = (int)ROUND(_DAT_0059e4d4 * -0.1);
  local_e0 = (int)ROUND(_DAT_0059e4d4 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704,&local_e8);
  local_ac = 0.1;
  local_a8 = -0.1;
  local_a4 = 0;
  local_64 = (int)ROUND(_DAT_0059e4d4 * 0.1);
  local_60 = (int)ROUND(_DAT_0059e4d4 * -0.1);
  local_5c = (int)ROUND(_DAT_0059e4d4 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x30,&local_64);
  local_ac = 0.1;
  local_a8 = 0.1;
  local_a4 = 0;
  local_b8 = (int)ROUND(_DAT_0059e4d4 * 0.1);
  local_b4 = (int)ROUND(_DAT_0059e4d4 * 0.1);
  local_b0 = (int)ROUND(_DAT_0059e4d4 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x60,&local_b8);
  local_a8 = 0.1;
  local_ac = -0.1;
  local_a4 = 0;
  local_88 = (int)ROUND(_DAT_0059e4d4 * -0.1);
  local_84 = (int)ROUND(_DAT_0059e4d4 * 0.1);
  local_80 = (int)ROUND(_DAT_0059e4d4 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x90,&local_88);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,&DAT_005b96d4);
  _DAT_005c505c = ((uint)param_1[0xf] & 3) * 0x400000;
  _DAT_005c5090 = ((int)param_1[0xf] >> 2 & 3U) * 0x400000;
  DAT_005c502c = _DAT_005c505c + 0x80000;
  _DAT_005c5030 = _DAT_005c5090 + 0x80000;
  _DAT_005c505c = _DAT_005c505c + 0x380000;
  _DAT_005c5090 = _DAT_005c5090 + 0x380000;
  local_7c = (int)ROUND(*param_1 * _DAT_0059e4d4);
  local_78 = (int)ROUND(param_1[1] * _DAT_0059e4d4);
  local_74 = (int)ROUND(param_1[2] * _DAT_0059e4d4);
  _DAT_005c5060 = _DAT_005c5030;
  _DAT_005c508c = _DAT_005c505c;
  _DAT_005c50bc = DAT_005c502c;
  _DAT_005c50c0 = _DAT_005c5090;
  core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50(0x01E57284,&local_7c,&DAT_01c78cb4,0,4);
  fVar1 = param_1[0xe];
  if (fVar1 != 0.0) {
    if ((uint)fVar1 < 2) {
      local_24 = 0;
      local_28 = 0x7f80;
      goto LAB_004ae466;
    }
    if (fVar1 == 2.8026e-45) {
      local_28 = 0;
      local_24 = 0;
      goto LAB_004ae466;
    }
  }
  local_24 = 0x2000;
  local_28 = 0;
LAB_004ae466:
  local_20 = 0;
  iVar5 = 0;
  do {
    lVar2 = (longlong)local_24 * (longlong)*(int *)((int)&DAT_005c5034 + iVar5);
    *(uint *)((int)&DAT_005c5034 + iVar5) =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    lVar2 = (longlong)local_28 * (longlong)*(int *)((int)&DAT_005c5038 + iVar5);
    *(uint *)((int)&DAT_005c5038 + iVar5) =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    iVar3 = iVar5 + 0x30;
    *(uint *)((int)&DAT_005c503c + iVar5) = 0;
    iVar5 = iVar3;
  } while (iVar3 != 0xc0);
  core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670(_DAT_007f7370,param_1,0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xffff - _DAT_01c038f4)
  ;
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(DAT_005ae704,0x1c78c80);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
  local_dc = *param_1;
  local_d8 = param_1[1];
  local_d4 = param_1[2];
  local_4c = param_1[3];
  local_48 = param_1[4];
  local_f0 = 1.0;
  local_ec = 0.025;
  local_44 = param_1[5];
  iVar5 = 0;
  do {
    local_ec = local_ec * (float)0.69999999999999996;
    local_f0 = (float)0.69999999999999996 * local_f0;
    local_a0 = local_4c * local_ec;
    local_48 = local_48 - local_ec * param_1[7];
    local_98 = local_44 * local_ec;
    local_9c = local_48 * local_ec;
    local_dc = local_dc - local_a0;
    local_d4 = local_d4 - local_98;
    local_d8 = local_d8 - local_9c;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
              (DAT_005ae704,&local_dc);
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
              (DAT_005ae704,&DAT_01c78ca8,0);
    dVar6 = (double)local_f0;
    local_ac = local_f0 * (float)-0.10000000000000001;
    local_a4 = 0;
    local_d0 = (int)ROUND(local_ac * _DAT_0059e4d4);
    local_cc = (int)ROUND(local_ac * _DAT_0059e4d4);
    local_c8 = (int)ROUND(_DAT_0059e4d4 * 0.0);
    local_a8 = local_ac;
    local_18 = local_ac;
    wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704,&local_d0,dVar6);
    local_ac = (float)((float10)dVar6 * (float10)0.10000000000000001);
    local_a4 = 0;
    local_a8 = local_18;
    local_94 = (int)ROUND(local_ac * _DAT_0059e4d4);
    local_90 = (int)ROUND(local_18 * _DAT_0059e4d4);
    local_8c = (int)ROUND(_DAT_0059e4d4 * 0.0);
    local_1c = local_ac;
    wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x30,&local_94);
    local_ac = local_1c;
    local_a8 = local_1c;
    local_a4 = 0;
    local_58 = (int)ROUND(local_1c * _DAT_0059e4d4);
    local_54 = (int)ROUND(local_1c * _DAT_0059e4d4);
    local_50 = (int)ROUND(_DAT_0059e4d4 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x60,&local_58);
    local_ac = local_18;
    local_a4 = 0;
    local_a8 = local_1c;
    local_c4 = (int)ROUND(local_18 * _DAT_0059e4d4);
    local_c0 = (int)ROUND(local_1c * _DAT_0059e4d4);
    local_bc = (int)ROUND(_DAT_0059e4d4 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x90,&local_c4);
    local_7c = (int)ROUND(local_dc * _DAT_0059e4d4);
    local_78 = (int)ROUND(local_d8 * _DAT_0059e4d4);
    local_74 = (int)ROUND(local_d4 * _DAT_0059e4d4);
    core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50(0x01E57284,&local_7c,&DAT_01c78cb4,0,4);
    iVar3 = 0;
    do {
      lVar2 = (longlong)local_24 * (longlong)*(int *)((int)&DAT_005c5034 + iVar3);
      *(uint *)((int)&DAT_005c5034 + iVar3) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      lVar2 = (longlong)local_28 * (longlong)*(int *)((int)&DAT_005c5038 + iVar3);
      *(uint *)((int)&DAT_005c5038 + iVar3) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      iVar4 = iVar3 + 0x30;
      lVar2 = (longlong)local_20 * (longlong)*(int *)((int)&DAT_005c503c + iVar3);
      *(uint *)((int)&DAT_005c503c + iVar3) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      iVar3 = iVar4;
    } while (iVar4 != 0xc0);
    core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670(_DAT_007f7370,param_1,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
              (DAT_005ae704,0xffff - _DAT_01c038f4);
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(DAT_005ae704,0x1c78c80);
    iVar5 = iVar5 + 1;
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
  } while (iVar5 < 3);
  return;
}

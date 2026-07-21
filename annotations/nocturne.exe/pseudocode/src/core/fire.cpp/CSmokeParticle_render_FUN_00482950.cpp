// Name: core_fire.cpp_CSmokeParticle_render_FUN_00482950
// Address: 00482950
// Address Range: [[00482950, 00482c7d]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CSmokeParticle_render_FUN_00482950(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CSmokeParticle_render_FUN_00482950(int param_1)

{
  float *pfVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  float10 fVar5;
  int *piStack_74;
  int local_70;
  int local_6c;
  int local_64;
  int local_60;
  float local_5c;
  float local_58;
  uint local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  int local_1c;
  float local_18;
  
  piVar2 = (int *)*DAT_005ae704;
  local_64 = (int)ROUND(*(float *)(param_1 + 4) * _DAT_0059d1f8);
  local_60 = (int)ROUND(*(float *)(param_1 + 8) * _DAT_0059d1f8);
  local_5c = (float)(int)ROUND(*(float *)(param_1 + 0xc) * _DAT_0059d1f8);
  piStack_74 = &local_64;
  wincore_windll_cpp_transformPoint_FUN_00530a25(piVar2);
  piStack_74 = piVar2;
  iVar4 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_00461f80(DAT_005ae704);
  if (iVar4 != 0) {
    piStack_74 = (int *)0x4829ba;
    fVar5 = (float10)round((float10)*(float *)(param_1 + 0x18));
    local_1c = (int)ROUND(fVar5);
    if ((local_1c < 0) || (0x27 < local_1c)) {
      _DAT_01cc4800 = "A..\\core\\fire.cpp" + 1;
      _DAT_01cc4804 = 0x11d;
      FUN_004c8440("CSmokeParticle::render - Frame out of range");
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (DAT_005ae704,&DAT_005b80f4 + local_1c * 0x18);
    pfVar1 = (float *)(param_1 + 4);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(DAT_005ae704,pfVar1);
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
              (DAT_005ae704,&DAT_01c08d08,0);
    local_18 = *(float *)(param_1 + 0x14);
    local_54 = 0;
    local_5c = -local_18;
    local_2c = (int)ROUND(local_5c * _DAT_0059d1f8);
    local_28 = (int)ROUND(local_5c * _DAT_0059d1f8);
    local_24 = (int)ROUND(_DAT_0059d1f8 * 0.0);
    local_58 = local_5c;
    local_20 = local_5c;
    wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704,&local_2c);
    local_5c = local_18;
    local_58 = local_20;
    local_54 = 0;
    piStack_74 = (int *)(int)ROUND(local_18 * _DAT_0059d1f8);
    local_70 = (int)ROUND(local_20 * _DAT_0059d1f8);
    local_6c = (int)ROUND(_DAT_0059d1f8 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x30,&piStack_74);
    local_54 = 0;
    local_5c = local_18;
    local_58 = local_18;
    local_38 = (int)ROUND(local_18 * _DAT_0059d1f8);
    local_34 = (int)ROUND(local_18 * _DAT_0059d1f8);
    local_30 = (int)ROUND(_DAT_0059d1f8 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x60,&local_38);
    local_5c = local_20;
    local_58 = local_18;
    local_54 = 0;
    local_50 = (int)ROUND(local_20 * _DAT_0059d1f8);
    local_4c = (int)ROUND(local_18 * _DAT_0059d1f8);
    local_48 = (int)ROUND(_DAT_0059d1f8 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x90,&local_50);
    DAT_005c502c = 0x80000;
    _DAT_005c5030 = 0xf80000;
    _DAT_005c505c = 0xf80000;
    _DAT_005c5060 = 0xf80000;
    _DAT_005c508c = 0xf80000;
    _DAT_005c5090 = 0x80000;
    _DAT_005c50bc = 0x80000;
    _DAT_005c50c0 = 0x80000;
    local_44 = (int)ROUND(*pfVar1 * _DAT_0059d1f8);
    local_40 = (int)ROUND(*(float *)(param_1 + 8) * _DAT_0059d1f8);
    local_3c = (int)ROUND(*(float *)(param_1 + 0xc) * _DAT_0059d1f8);
    core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50(0x01E57284,&local_44,&DAT_01c08d14,0,4);
    core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670(_DAT_007f7370,pfVar1,0);
    lVar3 = (longlong)(0xffff - _DAT_01c038f4) * (longlong)*(int *)(param_1 + 0x28);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
              (DAT_005ae704,(uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(DAT_005ae704,0x1c08d20);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
  }
  return;
}

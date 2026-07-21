// Name: core_fire.cpp_CTrail_render_FUN_00489360
// Address: 00489360
// Address Range: [[00489360, 00489632]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CTrail_render_FUN_00489360(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CTrail_render_FUN_00489360(int param_1)

{
  byte local_78 [4];
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
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
  byte local_20 [12];
  int local_14;
  int local_10;
  int local_c;
  
  if (*(float *)(param_1 + 0x10) <= 0.0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (DAT_005ae704,*(uint *)(param_1 + 0x20));
  local_74 = 4;
  local_64 = 0;
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_60 = 0;
  local_54 = 3;
  local_5c = 1;
  local_58 = 2;
  engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00461020
            (DAT_005ae704,*(uint *)(param_1 + 0x14));
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(DAT_005ae704,param_1);
  engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0(DAT_005ae704,local_20);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(DAT_005ae704,local_20,0);
  local_3c = 0.0;
  local_44 = *(float *)(param_1 + 0xc) * *(float *)(param_1 + 0x14);
  local_2c = (int)ROUND(local_44 * _DAT_0059d1f8);
  local_28 = (int)ROUND(local_44 * _DAT_0059d1f8);
  local_24 = (int)ROUND(_DAT_0059d1f8 * 0.0);
  local_40 = local_44;
  wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704,&local_2c);
  local_44 = -local_44;
  local_14 = (int)ROUND(local_44 * _DAT_0059d1f8);
  local_10 = (int)ROUND(local_40 * _DAT_0059d1f8);
  local_c = (int)ROUND(local_3c * _DAT_0059d1f8);
  wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x30,&local_14);
  local_40 = -local_40;
  local_38 = (int)ROUND(local_44 * _DAT_0059d1f8);
  local_34 = (int)ROUND(local_40 * _DAT_0059d1f8);
  local_30 = (int)ROUND(local_3c * _DAT_0059d1f8);
  wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x60,&local_38);
  local_44 = -local_44;
  local_50 = (int)ROUND(local_44 * _DAT_0059d1f8);
  local_4c = (int)ROUND(local_40 * _DAT_0059d1f8);
  local_48 = (int)ROUND(local_3c * _DAT_0059d1f8);
  wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x90,&local_50);
  DAT_005c502c = 0x80000;
  _DAT_005c5030 = 0xf80000;
  _DAT_005c505c = 0xf80000;
  _DAT_005c5060 = 0xf80000;
  _DAT_005c508c = 0xf80000;
  _DAT_005c5090 = 0x80000;
  _DAT_005c50bc = 0x80000;
  _DAT_005c50c0 = 0x80000;
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
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(DAT_005ae704,local_78);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
  return;
}

// Name: FUN_00468d00
// Address: 00468d00
// Address Range: [[00468d00, 00469235]]
// Convention: unknown
// Signature: void FUN_00468d00(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00468d00(int param_1,float *param_2)

{
  byte uVar1;
  byte local_dc [4];
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_b8;
  uint local_ac;
  uint local_a0;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  float local_70;
  float local_6c;
  float local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  float local_4c;
  float local_48;
  float local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_1c = *(float *)(param_1 + 0x28) / 131072.094299316._4_4_;
  local_18 = *(float *)(param_1 + 0x2c) * _DAT_0057e1f6;
  local_14 = _DAT_0057e1f6 * *(float *)(param_1 + 0x30);
  if (&local_4c != &local_1c) {
    local_4c = local_1c;
    local_48 = local_18;
    local_44 = local_14;
  }
  engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_004609d0(0x01B4D738,0x1bc9950);
  local_88 = (int)ROUND(*param_2 * _DAT_0059c8a0);
  local_84 = (int)ROUND(param_2[1] * _DAT_0059c8a0);
  local_80 = (int)ROUND(param_2[2] * _DAT_0059c8a0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704,&local_88);
  local_70 = *param_2 + local_4c;
  local_6c = param_2[1];
  local_68 = param_2[2];
  local_64 = (int)ROUND(local_70 * _DAT_0059c8a0);
  local_60 = (int)ROUND(local_6c * _DAT_0059c8a0);
  local_5c = (int)ROUND(local_68 * _DAT_0059c8a0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x30,&local_64);
  local_70 = *param_2 + local_4c;
  local_6c = param_2[1];
  local_68 = param_2[2] + local_44;
  local_58 = (int)ROUND(local_70 * _DAT_0059c8a0);
  local_54 = (int)ROUND(local_6c * _DAT_0059c8a0);
  local_50 = (int)ROUND(local_68 * _DAT_0059c8a0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x60,&local_58);
  local_70 = *param_2;
  local_6c = param_2[1];
  local_68 = param_2[2] + local_44;
  local_7c = (int)ROUND(local_70 * _DAT_0059c8a0);
  local_78 = (int)ROUND(local_6c * _DAT_0059c8a0);
  local_74 = (int)ROUND(local_68 * _DAT_0059c8a0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x90,&local_7c);
  local_70 = *param_2;
  local_6c = param_2[1] + local_48;
  local_68 = param_2[2];
  local_40 = (int)ROUND(local_70 * _DAT_0059c8a0);
  local_3c = (int)ROUND(local_6c * _DAT_0059c8a0);
  local_38 = (int)ROUND(local_68 * _DAT_0059c8a0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0xc0,&local_40);
  local_70 = *param_2 + local_4c;
  local_6c = param_2[1] + local_48;
  local_68 = param_2[2];
  local_28 = (int)ROUND(local_70 * _DAT_0059c8a0);
  local_24 = (int)ROUND(local_6c * _DAT_0059c8a0);
  local_20 = (int)ROUND(local_68 * _DAT_0059c8a0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0xf0,&local_28);
  local_70 = *param_2 + local_4c;
  local_6c = param_2[1] + local_48;
  local_68 = param_2[2] + local_44;
  local_34 = (int)ROUND(local_70 * _DAT_0059c8a0);
  local_30 = (int)ROUND(local_6c * _DAT_0059c8a0);
  local_2c = (int)ROUND(local_68 * _DAT_0059c8a0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x120,&local_34);
  local_70 = *param_2;
  local_6c = param_2[1] + local_48;
  local_68 = param_2[2] + local_44;
  local_94 = (int)ROUND(local_70 * _DAT_0059c8a0);
  local_90 = (int)ROUND(local_6c * _DAT_0059c8a0);
  local_8c = (int)ROUND(local_68 * _DAT_0059c8a0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x150,&local_94);
  uVar1 = rand();
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00460f10(DAT_005ae704,uVar1);
  local_d8 = 4;
  local_d4 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,1);
  local_a0 = 0;
  local_ac = 1;
  local_c4 = 4;
  local_b8 = 5;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0(DAT_005ae704,local_dc);
  local_a0 = 2;
  local_ac = 3;
  local_b8 = 7;
  local_c4 = 6;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0(DAT_005ae704,local_dc);
  local_b8 = 7;
  local_a0 = 0;
  local_ac = 4;
  local_c4 = 3;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0(DAT_005ae704,local_dc);
  local_a0 = 1;
  local_ac = 2;
  local_b8 = 6;
  local_c4 = 5;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0(DAT_005ae704,local_dc);
  local_b8 = 6;
  local_a0 = 4;
  local_ac = 5;
  local_c4 = 7;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0(DAT_005ae704,local_dc);
  local_ac = 2;
  local_b8 = 1;
  local_a0 = 3;
  local_c4 = 0;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0(DAT_005ae704,local_dc);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
  return;
}

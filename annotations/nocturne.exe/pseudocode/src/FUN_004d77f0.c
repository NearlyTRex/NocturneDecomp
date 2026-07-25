// Name: FUN_004d77f0
// Address: 004d77f0
// Address Range: [[004d77f0, 004d7979]]
// Convention: unknown
// Signature: undefined4 FUN_004d77f0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004d77f0(float *param_1)

{
  uint uVar1;
  byte local_64 [4];
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_24 = (int)ROUND(*param_1 * _DAT_005a0880);
  local_20 = (int)ROUND(param_1[1] * _DAT_005a0880);
  local_1c = (int)ROUND(param_1[2] * _DAT_005a0880);
  wincore_windll_cpp_transformPoint_FUN_00530a25(*DAT_005ae704,&local_24);
  local_30 = (int)ROUND(param_1[3] * _DAT_005a0880);
  local_2c = (int)ROUND(param_1[4] * _DAT_005a0880);
  local_28 = (int)ROUND(param_1[5] * _DAT_005a0880);
  wincore_windll_cpp_transformPoint_FUN_00530a25(*DAT_005ae704 + 0x30,&local_30);
  local_3c = (int)ROUND(param_1[6] * _DAT_005a0880);
  local_38 = (int)ROUND(param_1[7] * _DAT_005a0880);
  local_34 = (int)ROUND(param_1[8] * _DAT_005a0880);
  wincore_windll_cpp_transformPoint_FUN_00530a25(*DAT_005ae704 + 0x60,&local_3c);
  local_18 = (int)ROUND(param_1[9] * _DAT_005a0880);
  local_14 = (int)ROUND(param_1[10] * _DAT_005a0880);
  local_10 = (int)ROUND(param_1[0xb] * _DAT_005a0880);
  wincore_windll_cpp_transformPoint_FUN_00530a25(*DAT_005ae704 + 0x90,&local_18);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,1);
  local_60 = 4;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_5c = 0;
  local_4c = 0;
  local_48 = 1;
  local_44 = 2;
  local_40 = 3;
  uVar1 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190
                    (DAT_005ae704,local_64);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,1);
  return uVar1;
}

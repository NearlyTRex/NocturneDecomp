// Name: core_fire.cpp_CCrater_render_FUN_00487af0
// Address: 00487af0
// Address Range: [[00487af0, 00487d44]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CCrater_render_FUN_00487af0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CCrater_render_FUN_00487af0(int *param_1)

{
  byte local_6c [4];
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
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
  int local_c;
  
  if (*param_1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (DAT_005ae704,param_1 + 3);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,&DAT_005b8afc);
  local_20 = (int)ROUND((float)param_1[0x10] * 256.0f);
  local_1c = (int)ROUND((float)param_1[0x11] * 256.0f);
  local_18 = (int)ROUND((float)param_1[0x12] * 256.0f);
  engine_special_cpp_transformPoint_FUN_00530a25(&DAT_005c5014,&local_20);
  local_2c = (int)ROUND((float)param_1[0x13] * 256.0f);
  local_28 = (int)ROUND((float)param_1[0x14] * 256.0f);
  local_24 = (int)ROUND((float)param_1[0x15] * 256.0f);
  engine_special_cpp_transformPoint_FUN_00530a25(&DAT_005c5044,&local_2c);
  local_38 = (int)ROUND((float)param_1[0x16] * 256.0f);
  local_34 = (int)ROUND((float)param_1[0x17] * 256.0f);
  local_30 = (int)ROUND((float)param_1[0x18] * 256.0f);
  engine_special_cpp_transformPoint_FUN_00530a25(&DAT_005c5074,&local_38);
  local_14 = (int)ROUND((float)param_1[0x19] * 256.0f);
  local_10 = (int)ROUND((float)param_1[0x1a] * 256.0f);
  local_c = (int)ROUND((float)param_1[0x1b] * 256.0f);
  engine_special_cpp_transformPoint_FUN_00530a25(&DAT_005c50a4,&local_14);
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
  DAT_005c502c = 0x80000;
  _DAT_005c5030 = 0xf80000;
  _DAT_005c505c = 0xf80000;
  _DAT_005c5060 = 0xf80000;
  _DAT_005c508c = 0xf80000;
  _DAT_005c5090 = 0x80000;
  _DAT_005c50bc = 0x80000;
  _DAT_005c50c0 = 0x80000;
  local_60 = 0xffff;
  local_64 = 0;
  local_5c = 0;
  local_68 = 3;
  local_58 = 0;
  local_54 = 0;
  local_50 = 1;
  local_4c = 2;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xffff);
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(DAT_005ae704,local_6c);
  local_54 = 0;
  local_50 = 2;
  local_4c = 3;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xffff);
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(DAT_005ae704,local_6c);
  return;
}

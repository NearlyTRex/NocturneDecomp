// Name: core_fire.cpp_CCrater_render_FUN_004b23a0
// Address: 004b23a0
// Address Range: [[004b23a0, 004b25f4]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CCrater_render_FUN_004b23a0(CCrater *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CCrater_render_FUN_004b23a0(CCrater *this_ptr)

{
  SMRGLHeaderPrimitive local_60 [4];
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
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
  
  if (*(int *)this_ptr == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,(CVector3f *)&this_ptr->field_0xc);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,(SMRGLTextureBasic *)&DAT_0061ca94);
  local_38 = (int)ROUND(*(float *)&this_ptr->field_0x40 * _DAT_005fff94);
  local_34 = (int)ROUND(*(float *)&this_ptr->field_0x44 * _DAT_005fff94);
  local_30 = (int)ROUND(*(float *)&this_ptr->field_0x48 * _DAT_005fff94);
  engine_special_cpp_FUN_0058043c((SProjectedVertex *)&DAT_00629014,(CVector3i *)&local_38);
  local_20 = (int)ROUND(*(float *)&this_ptr->field_0x4c * _DAT_005fff94);
  local_1c = (int)ROUND(*(float *)&this_ptr->field_0x50 * _DAT_005fff94);
  local_18 = (int)ROUND(*(float *)&this_ptr->field_0x54 * _DAT_005fff94);
  engine_special_cpp_FUN_0058043c((SProjectedVertex *)&DAT_00629044,(CVector3i *)&local_20);
  local_2c = (int)ROUND(*(float *)&this_ptr->field_0x58 * _DAT_005fff94);
  local_28 = (int)ROUND(*(float *)&this_ptr->field_0x5c * _DAT_005fff94);
  local_24 = (int)ROUND(*(float *)&this_ptr->field_0x60 * _DAT_005fff94);
  engine_special_cpp_FUN_0058043c((SProjectedVertex *)&DAT_00629074,(CVector3i *)&local_2c);
  local_14 = (int)ROUND(*(float *)&this_ptr->field_0x64 * _DAT_005fff94);
  local_10 = (int)ROUND(*(float *)&this_ptr->field_0x68 * _DAT_005fff94);
  local_c = (int)ROUND(*(float *)&this_ptr->field_0x6c * _DAT_005fff94);
  engine_special_cpp_FUN_0058043c((SProjectedVertex *)&DAT_006290a4,(CVector3i *)&local_14);
  DAT_00629034 = 0xffff;
  DAT_00629038 = 0xffff;
  DAT_0062903c = 0xffff;
  DAT_00629064 = 0xffff;
  DAT_00629068 = 0xffff;
  DAT_0062906c = 0xffff;
  DAT_00629094 = 0xffff;
  DAT_00629098 = 0xffff;
  DAT_0062909c = 0xffff;
  DAT_006290c4 = 0xffff;
  DAT_006290c8 = 0xffff;
  DAT_006290cc = 0xffff;
  DAT_0062902c = 0x80000;
  _DAT_00629030 = 0xf80000;
  _DAT_0062905c = 0xf80000;
  _DAT_00629060 = 0xf80000;
  _DAT_0062908c = 0xf80000;
  DAT_00629090 = 0x80000;
  _DAT_006290bc = 0x80000;
  _DAT_006290c0 = 0x80000;
  local_54 = 0xffff;
  local_58 = 0;
  local_50 = 0;
  local_5c = 3;
  local_4c = 0;
  local_48 = 0;
  local_44 = 1;
  local_40 = 2;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0xffff);
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(DAT_00612560,local_60);
  local_48 = 0;
  local_44 = 2;
  local_40 = 3;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0xffff);
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(DAT_00612560,local_60);
  return;
}

// Name: core_fire.cpp_CCrater_render_FUN_0049d980
// Address: 0049d980
// Address Range: [[0049d980, 0049dbd4]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CCrater_render_FUN_0049d980(CCrater *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CCrater_render_FUN_0049d980(CCrater *this_ptr)

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
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,(CVector3f *)&this_ptr->field_0xc);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_005fd5f4);
  local_38 = (int)ROUND(*(float *)&this_ptr->field_0x40 * _DAT_005df8e4);
  local_34 = (int)ROUND(*(float *)&this_ptr->field_0x44 * _DAT_005df8e4);
  local_30 = (int)ROUND(*(float *)&this_ptr->field_0x48 * _DAT_005df8e4);
  engine_special_cpp_FUN_0056356c((SProjectedVertex *)&DAT_0060b014,(CVector3i *)&local_38);
  local_20 = (int)ROUND(*(float *)&this_ptr->field_0x4c * _DAT_005df8e4);
  local_1c = (int)ROUND(*(float *)&this_ptr->field_0x50 * _DAT_005df8e4);
  local_18 = (int)ROUND(*(float *)&this_ptr->field_0x54 * _DAT_005df8e4);
  engine_special_cpp_FUN_0056356c((SProjectedVertex *)&DAT_0060b044,(CVector3i *)&local_20);
  local_2c = (int)ROUND(*(float *)&this_ptr->field_0x58 * _DAT_005df8e4);
  local_28 = (int)ROUND(*(float *)&this_ptr->field_0x5c * _DAT_005df8e4);
  local_24 = (int)ROUND(*(float *)&this_ptr->field_0x60 * _DAT_005df8e4);
  engine_special_cpp_FUN_0056356c((SProjectedVertex *)&DAT_0060b074,(CVector3i *)&local_2c);
  local_14 = (int)ROUND(*(float *)&this_ptr->field_0x64 * _DAT_005df8e4);
  local_10 = (int)ROUND(*(float *)&this_ptr->field_0x68 * _DAT_005df8e4);
  local_c = (int)ROUND(*(float *)&this_ptr->field_0x6c * _DAT_005df8e4);
  engine_special_cpp_FUN_0056356c((SProjectedVertex *)&DAT_0060b0a4,(CVector3i *)&local_14);
  DAT_0060b034 = 0xffff;
  DAT_0060b038 = 0xffff;
  DAT_0060b03c = 0xffff;
  DAT_0060b064 = 0xffff;
  DAT_0060b068 = 0xffff;
  DAT_0060b06c = 0xffff;
  _DAT_0060b094 = 0xffff;
  _DAT_0060b098 = 0xffff;
  _DAT_0060b09c = 0xffff;
  _DAT_0060b0c4 = 0xffff;
  _DAT_0060b0c8 = 0xffff;
  _DAT_0060b0cc = 0xffff;
  DAT_0060b02c = 0x80000;
  _DAT_0060b030 = 0xf80000;
  _DAT_0060b05c = 0xf80000;
  _DAT_0060b060 = 0xf80000;
  _DAT_0060b08c = 0xf80000;
  DAT_0060b090 = 0x80000;
  _DAT_0060b0bc = 0x80000;
  _DAT_0060b0c0 = 0x80000;
  local_54 = 0xffff;
  local_58 = 0;
  local_50 = 0;
  local_5c = 3;
  local_4c = 0;
  local_48 = 0;
  local_44 = 1;
  local_40 = 2;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,0xffff);
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730(DAT_005f2afc,local_60);
  local_48 = 0;
  local_44 = 2;
  local_40 = 3;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,0xffff);
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730(DAT_005f2afc,local_60);
  return;
}

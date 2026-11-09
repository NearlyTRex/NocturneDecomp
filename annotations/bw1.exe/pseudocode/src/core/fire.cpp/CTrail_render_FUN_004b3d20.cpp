// Name: core_fire.cpp_CTrail_render_FUN_004b3d20
// Address: 004b3d20
// Address Range: [[004b3d20, 004b3fff]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CTrail_render_FUN_004b3d20(CTrail *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CTrail_render_FUN_004b3d20(CTrail *this_ptr)

{
  byte bVar1;
  uint auStackY_102c [997];
  CVector3f *translation;
  SMRGLHeaderPrimitive local_84 [4];
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  float local_50;
  float local_4c;
  float local_48;
  CVector3f local_44;
  CVector3f local_38;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  bVar1 = 0;
  if (*(float *)&this_ptr->field_0x10 <= 0.0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,*(SMRGLTextureBasic **)&this_ptr->field_0x20);
  local_80 = 4;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  local_7c = 0;
  local_6c = 0;
  local_60 = 3;
  local_68 = 1;
  local_64 = 2;
  engine_drender_cpp_FUN_00483df0(DAT_00612560,*(float *)&this_ptr->field_0x14);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,1);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,(CVector3f *)this_ptr);
  engine_matrix_c_FUN_00483b70(DAT_00612560);
  translation = (CVector3f *)0x0;
  local_38._0_4_ = local_44._0_4_;
  *(uint *)((int)&local_38 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&local_44 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&local_38 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&local_44 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,&local_38,translation);
  local_48 = 0.0;
  local_50 = *(float *)&this_ptr->field_0xc * *(float *)&this_ptr->field_0x14;
  local_2c = (int)ROUND(local_50 * _DAT_005fff94);
  local_28 = (int)ROUND(local_50 * _DAT_005fff94);
  local_24 = (int)ROUND(_DAT_005fff94 * 0.0);
  local_4c = local_50;
  engine_special_cpp_FUN_00580173(*(SProjectedVertex **)DAT_00612560,(CVector3i *)&local_2c);
  local_50 = -local_50;
  local_20 = (int)ROUND(local_50 * _DAT_005fff94);
  local_1c = (int)ROUND(local_4c * _DAT_005fff94);
  local_18 = (int)ROUND(local_48 * _DAT_005fff94);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x30),(CVector3i *)&local_20);
  local_4c = -local_4c;
  local_14 = (int)ROUND(local_50 * _DAT_005fff94);
  local_10 = (int)ROUND(local_4c * _DAT_005fff94);
  local_c = (int)ROUND(local_48 * _DAT_005fff94);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x60),(CVector3i *)&local_14);
  local_50 = -local_50;
  local_5c = (int)ROUND(local_50 * _DAT_005fff94);
  local_58 = (int)ROUND(local_4c * _DAT_005fff94);
  local_54 = (int)ROUND(local_48 * _DAT_005fff94);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x90),(CVector3i *)&local_5c);
  DAT_0062902c = 0x80000;
  _DAT_00629030 = 0xf80000;
  _DAT_0062905c = 0xf80000;
  _DAT_00629060 = 0xf80000;
  _DAT_0062908c = 0xf80000;
  DAT_00629090 = 0x80000;
  _DAT_006290bc = 0x80000;
  _DAT_006290c0 = 0x80000;
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
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(DAT_00612560,local_84);
  engine_matrix_c_pop_FUN_004839a0();
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
  return;
}

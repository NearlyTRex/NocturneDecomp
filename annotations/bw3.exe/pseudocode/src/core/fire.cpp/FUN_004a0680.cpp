// Name: core_fire.cpp_FUN_004a0680
// Address: 004a0680
// Address Range: [[004a0680, 004a095f]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_004a0680(CTrail *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_FUN_004a0680(CTrail *this_ptr)

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
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (DAT_005f2afc,*(SMRGLTextureBasic **)&this_ptr->field_0x20);
  local_80 = 4;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  local_7c = 0;
  local_6c = 0;
  local_60 = 3;
  local_68 = 1;
  local_64 = 2;
  engine_drender_cpp_FUN_0046d4d0(DAT_005f2afc,*(float *)&this_ptr->field_0x14);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,(CVector3f *)this_ptr);
  engine_matrix_c_FUN_0046d250(DAT_005f2afc);
  translation = (CVector3f *)0x0;
  local_38._0_4_ = local_44._0_4_;
  *(uint *)((int)&local_38 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&local_44 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&local_38 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&local_44 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (DAT_005f2afc,&local_38,translation);
  local_48 = 0.0;
  local_50 = *(float *)&this_ptr->field_0xc * *(float *)&this_ptr->field_0x14;
  local_2c = (int)ROUND(local_50 * _DAT_005df8e4);
  local_28 = (int)ROUND(local_50 * _DAT_005df8e4);
  local_24 = (int)ROUND(_DAT_005df8e4 * 0.0);
  local_4c = local_50;
  engine_special_cpp_FUN_005632a3(*(SProjectedVertex **)DAT_005f2afc,(CVector3i *)&local_2c);
  local_50 = -local_50;
  local_20 = (int)ROUND(local_50 * _DAT_005df8e4);
  local_1c = (int)ROUND(local_4c * _DAT_005df8e4);
  local_18 = (int)ROUND(local_48 * _DAT_005df8e4);
  engine_special_cpp_FUN_005632a3
            ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x30),(CVector3i *)&local_20);
  local_4c = -local_4c;
  local_14 = (int)ROUND(local_50 * _DAT_005df8e4);
  local_10 = (int)ROUND(local_4c * _DAT_005df8e4);
  local_c = (int)ROUND(local_48 * _DAT_005df8e4);
  engine_special_cpp_FUN_005632a3
            ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x60),(CVector3i *)&local_14);
  local_50 = -local_50;
  local_5c = (int)ROUND(local_50 * _DAT_005df8e4);
  local_58 = (int)ROUND(local_4c * _DAT_005df8e4);
  local_54 = (int)ROUND(local_48 * _DAT_005df8e4);
  engine_special_cpp_FUN_005632a3
            ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x90),(CVector3i *)&local_5c);
  DAT_0060b02c = 0x80000;
  _DAT_0060b030 = 0xf80000;
  _DAT_0060b05c = 0xf80000;
  _DAT_0060b060 = 0xf80000;
  _DAT_0060b08c = 0xf80000;
  DAT_0060b090 = 0x80000;
  _DAT_0060b0bc = 0x80000;
  _DAT_0060b0c0 = 0x80000;
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
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730(DAT_005f2afc,local_84);
  engine_matrix_c_pop_FUN_0046d080();
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
  return;
}

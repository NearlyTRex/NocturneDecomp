// Name: core_gore.cpp_CBloodSplat_render_FUN_004e49a0
// Address: 004e49a0
// Address Range: [[004e49a0, 004e4f6c]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_render_FUN_004e49a0(CBloodSplat *this_ptr,int expire_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CBloodSplat_render_FUN_004e49a0(CBloodSplat *this_ptr,int expire_flag)

{
  uint uVar1;
  CVector3i *input;
  float10 fVar2;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
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
  
  fVar2 = (float10)*(float *)&this_ptr->field_0x24 * (float10)_DAT_005e403d + (float10)_DAT_005e4045
  ;
  round();
  local_14 = (int)ROUND(fVar2);
  if (local_14 < 0) {
    local_14 = 0;
  }
  else if ((0xf < local_14) && (local_14 = 0xf, expire_flag != 0)) {
    *(uint *)this_ptr = 1;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,(CVector3f *)&this_ptr->field_0x4);
  if (*(int *)&this_ptr->field_0x10 == 1) {
    _DAT_01cd0e48 = 0;
    _DAT_01cd0e50 = 0xffff;
    _DAT_01cd0e4c = 0;
    _DAT_01cd0e54 = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (DAT_00612560,
               (SMRGLTextureBasic *)
               (&DAT_0061dd2c + local_14 * 0x18 + *(int *)&this_ptr->field_0x28 * 0x180));
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
              (DAT_00612560,(CVector3f *)&this_ptr->field_0x18,(CVector3f *)0x0);
    local_74 = 0xbf000000;
    local_70 = 0xbf000000;
    local_6c = 0;
    local_68 = (int)ROUND(_DAT_006016a8 * -0.5);
    local_64 = (int)ROUND(_DAT_006016a8 * -0.5);
    local_60 = (int)ROUND(_DAT_006016a8 * 0.0);
    engine_special_cpp_FUN_00580173(*(SProjectedVertex **)DAT_00612560,(CVector3i *)&local_68);
    local_74 = 0x3f000000;
    local_6c = 0;
    local_70 = 0xbf000000;
    local_50 = (int)ROUND(_DAT_006016a8 * 0.5);
    local_4c = (int)ROUND(_DAT_006016a8 * -0.5);
    local_48 = (int)ROUND(_DAT_006016a8 * 0.0);
    engine_special_cpp_FUN_00580173
              ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x30),(CVector3i *)&local_50);
    local_74 = 0x3f000000;
    local_6c = 0;
    local_70 = 0x3f000000;
    local_38 = (int)ROUND(_DAT_006016a8 * 0.5);
    local_34 = (int)ROUND(_DAT_006016a8 * 0.5);
    local_30 = (int)ROUND(_DAT_006016a8 * 0.0);
    engine_special_cpp_FUN_00580173
              ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x60),(CVector3i *)&local_38);
    local_74 = 0xbf000000;
    local_6c = 0;
    local_70 = 0x3f000000;
    local_80 = (int)ROUND(_DAT_006016a8 * -0.5);
    local_7c = (int)ROUND(_DAT_006016a8 * 0.5);
    local_78 = (int)ROUND(_DAT_006016a8 * 0.0);
    input = (CVector3i *)&local_80;
  }
  else {
    if (expire_flag != 0) {
      *(uint *)this_ptr = 1;
    }
    _DAT_01cd0e4c = 0xffff;
    _DAT_01cd0e48 = 0;
    _DAT_01cd0e50 = 0;
    _DAT_01cd0e54 = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (DAT_00612560,
               (SMRGLTextureBasic *)(&DAT_0061dccc + *(int *)&this_ptr->field_0x28 * 0x18));
    local_44 = 0xbf000000;
    local_40 = 0;
    local_3c = 0xbf000000;
    local_20 = (int)ROUND(_DAT_006016a8 * -0.5);
    local_1c = (int)ROUND(_DAT_006016a8 * 0.0);
    local_18 = (int)ROUND(_DAT_006016a8 * -0.5);
    engine_special_cpp_FUN_00580173(*(SProjectedVertex **)DAT_00612560,(CVector3i *)&local_20);
    local_44 = 0x3f000000;
    local_3c = 0xbf000000;
    local_40 = 0;
    local_8c = (int)ROUND(_DAT_006016a8 * 0.5);
    local_88 = (int)ROUND(_DAT_006016a8 * 0.0);
    local_84 = (int)ROUND(_DAT_006016a8 * -0.5);
    engine_special_cpp_FUN_00580173
              ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x30),(CVector3i *)&local_8c);
    local_44 = 0x3f000000;
    local_40 = 0;
    local_3c = 0x3f000000;
    local_5c = (int)ROUND(_DAT_006016a8 * 0.5);
    local_58 = (int)ROUND(_DAT_006016a8 * 0.0);
    local_54 = (int)ROUND(_DAT_006016a8 * 0.5);
    engine_special_cpp_FUN_00580173
              ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x60),(CVector3i *)&local_5c);
    local_44 = 0xbf000000;
    local_3c = 0x3f000000;
    local_40 = 0;
    local_2c = (int)ROUND(_DAT_006016a8 * -0.5);
    local_28 = (int)ROUND(_DAT_006016a8 * 0.0);
    local_24 = (int)ROUND(_DAT_006016a8 * 0.5);
    input = (CVector3i *)&local_2c;
  }
  engine_special_cpp_FUN_00580173((SProjectedVertex *)(*(int *)DAT_00612560 + 0x90),input);
  uVar1 = *(uint *)&this_ptr->field_0x14;
  if (uVar1 == 0) {
LAB_004e4be7:
    DAT_00629034 = 0x2000;
    DAT_00629038 = 0;
  }
  else if (uVar1 < 2) {
    DAT_00629038 = 0x7f80;
    DAT_00629034 = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004e4be7;
    DAT_00629038 = 0;
    DAT_00629034 = 0;
  }
  DAT_0062903c = 0;
  uVar1 = *(uint *)&this_ptr->field_0x14;
  if (uVar1 == 0) {
LAB_004e4c14:
    DAT_00629064 = 0x2000;
    DAT_00629068 = 0;
  }
  else if (uVar1 < 2) {
    DAT_00629068 = 0x7f80;
    DAT_00629064 = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004e4c14;
    DAT_00629068 = 0;
    DAT_00629064 = 0;
  }
  DAT_0062906c = 0;
  uVar1 = *(uint *)&this_ptr->field_0x14;
  if (uVar1 == 0) {
LAB_004e4c41:
    DAT_00629094 = 0x2000;
    DAT_00629098 = 0;
  }
  else if (uVar1 < 2) {
    DAT_00629098 = 0x7f80;
    DAT_00629094 = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004e4c41;
    DAT_00629098 = 0;
    DAT_00629094 = 0;
  }
  DAT_0062909c = 0;
  uVar1 = *(uint *)&this_ptr->field_0x14;
  if (uVar1 != 0) {
    if (uVar1 < 2) {
      DAT_006290c8 = 0x7f80;
      DAT_006290c4 = 0;
      goto LAB_004e4c80;
    }
    if (uVar1 == 2) {
      DAT_006290c8 = 0;
      DAT_006290c4 = 0;
      goto LAB_004e4c80;
    }
  }
  DAT_006290c4 = 0x2000;
  DAT_006290c8 = 0;
LAB_004e4c80:
  DAT_006290cc = 0;
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050
            (DAT_00612560,(SMRGLHeaderPrimitive *)0x1cd0e40);
  if (*(int *)&this_ptr->field_0x10 == 1) {
    engine_matrix_c_pop_FUN_004839a0();
    return;
  }
  return;
}

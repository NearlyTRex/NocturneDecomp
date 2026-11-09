// Name: core_gore.cpp_CBloodPool_render_FUN_004e5180
// Address: 004e5180
// Address Range: [[004e5180, 004e553e]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodPool_render_FUN_004e5180(CBloodPool *this_ptr,int expire_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CBloodPool_render_FUN_004e5180(CBloodPool *this_ptr,int expire_flag)

{
  uint uVar1;
  float10 fVar2;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  fVar2 = (float10)*(float *)&this_ptr->field_0x18 * (float10)_DAT_005e40bd;
  round();
  local_14 = (int)ROUND(fVar2);
  if (local_14 < 0) {
    local_14 = 0;
  }
  else if ((0x1c < local_14) && (local_14 = 0x1c, expire_flag != 0)) {
    *(uint *)this_ptr = 1;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,(CVector3f *)&this_ptr->field_0x4);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,
             (SMRGLTextureBasic *)
             (&DAT_0061e32c + local_14 * 0x18 + *(int *)&this_ptr->field_0x14 * 0x2b8));
  local_38 = 0xbfaa9fbe;
  local_30 = 0xbfaa9fbe;
  local_34 = 0;
  local_20 = (int)ROUND(_DAT_006016a8 * -1.333);
  local_1c = (int)ROUND(_DAT_006016a8 * 0.0);
  local_18 = (int)ROUND(_DAT_006016a8 * -1.333);
  engine_special_cpp_FUN_00580173(*(SProjectedVertex **)DAT_00612560,(CVector3i *)&local_20);
  local_38 = 0x3faa9fbe;
  local_34 = 0;
  local_30 = 0xbfaa9fbe;
  local_44 = (int)ROUND(_DAT_006016a8 * 1.333);
  local_40 = (int)ROUND(_DAT_006016a8 * 0.0);
  local_3c = (int)ROUND(_DAT_006016a8 * -1.333);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x30),(CVector3i *)&local_44);
  local_38 = 0x3faa9fbe;
  local_30 = 0x3faa9fbe;
  local_34 = 0;
  local_2c = (int)ROUND(_DAT_006016a8 * 1.333);
  local_28 = (int)ROUND(_DAT_006016a8 * 0.0);
  local_24 = (int)ROUND(_DAT_006016a8 * 1.333);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x60),(CVector3i *)&local_2c);
  local_38 = 0xbfaa9fbe;
  local_34 = 0;
  local_30 = 0x3faa9fbe;
  local_50 = (int)ROUND(_DAT_006016a8 * -1.333);
  local_4c = (int)ROUND(_DAT_006016a8 * 0.0);
  local_48 = (int)ROUND(_DAT_006016a8 * 1.333);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x90),(CVector3i *)&local_50);
  uVar1 = *(uint *)&this_ptr->field_0x10;
  if (uVar1 == 0) {
LAB_004e5379:
    DAT_00629034 = 0x2000;
    DAT_00629038 = 0;
  }
  else if (uVar1 < 2) {
    DAT_00629034 = 0;
    DAT_00629038 = 0x7f80;
  }
  else {
    if (uVar1 != 2) goto LAB_004e5379;
    DAT_00629038 = 0;
    DAT_00629034 = 0;
  }
  DAT_0062903c = 0;
  uVar1 = *(uint *)&this_ptr->field_0x10;
  if (uVar1 == 0) {
LAB_004e53a6:
    DAT_00629064 = 0x2000;
    DAT_00629068 = 0;
  }
  else if (uVar1 < 2) {
    DAT_00629068 = 0x7f80;
    DAT_00629064 = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004e53a6;
    DAT_00629068 = 0;
    DAT_00629064 = 0;
  }
  DAT_0062906c = 0;
  uVar1 = *(uint *)&this_ptr->field_0x10;
  if (uVar1 == 0) {
LAB_004e53d3:
    DAT_00629094 = 0x2000;
    DAT_00629098 = 0;
  }
  else if (uVar1 < 2) {
    DAT_00629098 = 0x7f80;
    DAT_00629094 = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004e53d3;
    DAT_00629098 = 0;
    DAT_00629094 = 0;
  }
  DAT_0062909c = 0;
  uVar1 = *(uint *)&this_ptr->field_0x10;
  if (uVar1 != 0) {
    if (uVar1 < 2) {
      DAT_006290c8 = 0x7f80;
      DAT_006290c4 = 0;
      goto LAB_004e5423;
    }
    if (uVar1 == 2) {
      DAT_006290c8 = 0;
      DAT_006290c4 = 0;
      goto LAB_004e5423;
    }
  }
  DAT_006290c4 = 0x2000;
  DAT_006290c8 = 0;
LAB_004e5423:
  DAT_006290cc = 0;
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050
            (DAT_00612560,(SMRGLHeaderPrimitive *)0x1cd0e40);
  return;
}

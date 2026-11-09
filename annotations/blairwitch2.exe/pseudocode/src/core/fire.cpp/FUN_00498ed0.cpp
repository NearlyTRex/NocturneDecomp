// Name: core_fire.cpp_FUN_00498ed0
// Address: 00498ed0
// Address Range: [[00498ed0, 00499268]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_00498ed0(CExplosion *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_FUN_00498ed0(CExplosion *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  int iVar1;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  uint auStackY_1048 [999];
  CVector3f *translation;
  SMRGLHeaderPrimitive local_94 [4];
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  CVector3f local_60;
  int local_54;
  int local_50;
  int local_4c;
  float local_48;
  float local_44;
  float local_40;
  int local_3c;
  int local_38;
  int local_34;
  CVector3f local_30;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  int local_10;
  int local_c;
  int local_8;
  
  bVar2 = 0;
  if ((*(uint *)&this_ptr->field_0xc & 0x7fffffff) == 0) {
    return;
  }
  fVar3 = ((float10)1 - (float10)*(float *)&this_ptr->field_0xc) * (float10)_DAT_005d551a;
  round();
  local_18 = (int)ROUND(fVar3);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)(&DAT_00615244 + local_18 * 0x30));
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,(CVector3f *)this_ptr);
  engine_matrix_c_FUN_0046b670(DAT_0060b280);
  translation = (CVector3f *)0x0;
  local_60._0_4_ = local_30._0_4_;
  *(uint *)((int)&local_60 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&local_30 + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&local_60 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&local_30 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,&local_60,translation);
  fVar3 = (float10)*(float *)&this_ptr->field_0x10 * (float10)_DAT_005d5532 * (float10)_DAT_005d552a
  ;
  fVar4 = -(float10)*(float *)&this_ptr->field_0x10 * (float10)_DAT_005d5522 *
          (float10)_DAT_005d552a;
  round();
  iVar1 = round();
  local_c = (int)ROUND(fVar3);
  local_10 = (int)ROUND(fVar4);
  if (iVar1 != 0) {
    local_c = -local_c;
    local_10 = -local_10;
  }
  local_8 = local_10;
  local_48 = (float)local_10;
  local_44 = *(float *)&this_ptr->field_0x10 * _DAT_005d553a * (float)_DAT_005d552a;
  local_40 = 0.0;
  local_24 = (int)ROUND(local_48 * _DAT_005f64e4);
  local_20 = (int)ROUND(local_44 * _DAT_005f64e4);
  local_1c = (int)ROUND(_DAT_005f64e4 * 0.0);
  local_14 = local_48;
  engine_special_cpp_FUN_0055d723(*(SProjectedVertex **)DAT_0060b280,(CVector3i *)&local_24);
  local_8 = local_c;
  local_48 = (float)local_c;
  local_54 = (int)ROUND(local_48 * _DAT_005f64e4);
  local_50 = (int)ROUND(local_44 * _DAT_005f64e4);
  local_4c = (int)ROUND(local_40 * _DAT_005f64e4);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x30),(CVector3i *)&local_54);
  local_44 = -*(float *)&this_ptr->field_0x10 * (float)_DAT_005d5542 * (float)_DAT_005d552a;
  local_3c = (int)ROUND(local_48 * _DAT_005f64e4);
  local_38 = (int)ROUND(local_44 * _DAT_005f64e4);
  local_34 = (int)ROUND(local_40 * _DAT_005f64e4);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x60),(CVector3i *)&local_3c);
  local_48 = local_14;
  local_6c = (int)ROUND(local_14 * _DAT_005f64e4);
  local_68 = (int)ROUND(local_44 * _DAT_005f64e4);
  local_64 = (int)ROUND(local_40 * _DAT_005f64e4);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x90),(CVector3i *)&local_6c);
  this_ptr_00 = DAT_0060b280;
  *(uint *)(*(int *)DAT_0060b280 + 0x18) = 0x20000;
  *(uint *)(*(int *)this_ptr_00 + 0x1c) = 0x20000;
  *(uint *)(*(int *)this_ptr_00 + 0x48) = 0xfe0000;
  *(uint *)(*(int *)this_ptr_00 + 0x4c) = 0x20000;
  *(uint *)(*(int *)this_ptr_00 + 0x78) = 0xfe0000;
  *(uint *)(*(int *)this_ptr_00 + 0x7c) = 0xfe0000;
  *(uint *)(*(int *)this_ptr_00 + 0xa8) = 0x20000;
  *(uint *)(*(int *)this_ptr_00 + 0xac) = 0xfe0000;
  *(uint *)(*(int *)this_ptr_00 + 0x2c) = 0x8000;
  *(uint *)(*(int *)this_ptr_00 + 0x5c) = 0x8000;
  *(uint *)(*(int *)this_ptr_00 + 0x8c) = 0x8000;
  *(uint *)(*(int *)this_ptr_00 + 0xbc) = 0x8000;
  local_90 = 4;
  local_80 = 0;
  local_84 = 0;
  local_88 = 0;
  local_8c = 0;
  local_7c = 0;
  local_70 = 3;
  local_78 = 1;
  local_74 = 2;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(this_ptr_00,1);
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60(DAT_0060b280,local_94,0x123);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  engine_matrix_c_pop_FUN_0046b4a0();
  return;
}

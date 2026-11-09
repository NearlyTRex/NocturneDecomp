// Name: core_fire.cpp_FUN_0049abd0
// Address: 0049abd0
// Address Range: [[0049abd0, 0049b2c4]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_0049abd0(CLightningBolt *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_FUN_0049abd0(CLightningBolt *this_ptr)

{
  byte *world_position;
  byte *puVar1;
  CDemonRenderer *this_ptr_00;
  int iVar2;
  uint uVar3;
  int *extraout_EDX;
  CDemonRenderer *this_ptr_01;
  byte bVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  uint auStackY_103c [975];
  SMRGLHeaderPrimitive local_e8 [4];
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  CVector3f local_54;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  CVector3f local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  bVar4 = 0;
  if (*(float *)&this_ptr->field_0x14 <= 0.0) {
    return;
  }
  iVar2 = rand();
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)(&DAT_006157cc + (iVar2 % 6) * 0x18));
  local_e4 = 4;
  local_d4 = 0;
  local_d8 = 0;
  local_dc = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_c4 = 3;
  local_cc = 1;
  local_c8 = 2;
  uVar3 = rand();
  if ((uVar3 & 1) == 0) {
    _DAT_0062205c = 0x80000;
    _DAT_0062208c = 0x80000;
    _DAT_006220bc = 0xf80000;
    DAT_0062202c = 0xf80000;
  }
  else {
    _DAT_0062205c = 0xf80000;
    _DAT_0062208c = 0xf80000;
    _DAT_006220bc = 0x80000;
    DAT_0062202c = 0x80000;
  }
  _DAT_006220c0 = 0xf80000;
  DAT_00622090 = 0xf80000;
  _DAT_00622060 = 0x80000;
  _DAT_00622030 = 0x80000;
  DAT_00622034 = 0xffff;
  DAT_00622038 = 0xffff;
  DAT_0062203c = 0xffff;
  DAT_00622064 = 0xffff;
  DAT_00622068 = 0xffff;
  DAT_0062206c = 0xffff;
  DAT_00622094 = 0xffff;
  DAT_00622098 = 0xffff;
  DAT_0062209c = 0xffff;
  DAT_006220c4 = 0xffff;
  DAT_006220c8 = 0xffff;
  DAT_006220cc = 0xffff;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xffff);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
  world_position = &this_ptr->field_0x4;
  if (*(int *)this_ptr == 0) {
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
              (DAT_0060b280,(CVector3f *)world_position);
    engine_matrix_c_FUN_0046b670(DAT_0060b280);
    local_24._0_4_ = local_54._0_4_;
    *(uint *)((int)&local_24 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&local_54 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&local_24 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&local_54 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    local_24._0_4_ = 0;
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
              (DAT_0060b280,&local_24,(CVector3f *)0x0);
    local_28 = 0.0;
    if (0.0 < *(float *)&this_ptr->field_0x18) {
      local_30 = *(float *)&this_ptr->field_0x18;
    }
    else {
      local_30 = *(float *)&this_ptr->field_0x10 * (float)_DAT_005d5732;
    }
    local_2c = *(float *)&this_ptr->field_0x10;
    local_60 = (int)ROUND(local_30 * _DAT_005f64e4);
    local_5c = (int)ROUND(local_2c * _DAT_005f64e4);
    local_58 = (int)ROUND(_DAT_005f64e4 * 0.0);
    engine_special_cpp_FUN_0055d723(*(SProjectedVertex **)DAT_0060b280,(CVector3i *)&local_60);
    local_30 = -local_30;
    local_b4 = (int)ROUND(local_30 * _DAT_005f64e4);
    local_b0 = (int)ROUND(local_2c * _DAT_005f64e4);
    local_ac = (int)ROUND(local_28 * _DAT_005f64e4);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x30),(CVector3i *)&local_b4);
    local_2c = 0.0;
    local_48 = (int)ROUND(local_30 * _DAT_005f64e4);
    local_44 = (int)ROUND(_DAT_005f64e4 * 0.0);
    local_40 = (int)ROUND(local_28 * _DAT_005f64e4);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x60),(CVector3i *)&local_48);
    local_30 = -local_30;
    local_18 = (int)ROUND(local_30 * _DAT_005f64e4);
    local_14 = (int)ROUND(local_2c * _DAT_005f64e4);
    local_10 = (int)ROUND(local_28 * _DAT_005f64e4);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x90),(CVector3i *)&local_18);
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(DAT_0060b280,local_e8);
    engine_matrix_c_pop_FUN_0046b4a0();
  }
  else {
    local_9c = (int)ROUND(*(float *)world_position * _DAT_005f64e4);
    local_98 = (int)ROUND(*(float *)&this_ptr->field_0x8 * _DAT_005f64e4);
    local_94 = (int)ROUND(*(float *)&this_ptr->field_0xc * _DAT_005f64e4);
    engine_special_cpp_FUN_0055d9ec(*(SProjectedVertex **)DAT_0060b280,(CVector3i *)&local_9c);
    local_6c = (int)ROUND(*(float *)world_position * _DAT_005f64e4);
    local_68 = (int)ROUND(*(float *)&this_ptr->field_0x8 * _DAT_005f64e4);
    local_64 = (int)ROUND(*(float *)&this_ptr->field_0xc * _DAT_005f64e4);
    engine_special_cpp_FUN_0055d9ec
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x30),(CVector3i *)&local_6c);
    puVar1 = &this_ptr->field_0x1c;
    local_3c = (int)ROUND(*(float *)puVar1 * _DAT_005f64e4);
    local_38 = (int)ROUND(*(float *)&this_ptr->field_0x20 * _DAT_005f64e4);
    local_34 = (int)ROUND(*(float *)&this_ptr->field_0x24 * _DAT_005f64e4);
    engine_special_cpp_FUN_0055d9ec
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x60),(CVector3i *)&local_3c);
    local_90 = (int)ROUND(*(float *)puVar1 * _DAT_005f64e4);
    local_8c = (int)ROUND(*(float *)&this_ptr->field_0x20 * _DAT_005f64e4);
    local_88 = (int)ROUND(*(float *)&this_ptr->field_0x24 * _DAT_005f64e4);
    engine_special_cpp_FUN_0055d9ec
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x90),(CVector3i *)&local_90);
    fVar5 = (float10)_DAT_005d572a;
    fVar6 = (float10)*(float *)&this_ptr->field_0x18 * fVar5;
    fVar7 = (float10)*(float *)&this_ptr->field_0x28;
    *(uint *)(*(int *)DAT_0060b280 + 0x10) = 0x80000000;
    round();
    local_8 = (int)ROUND(fVar6);
    *(int *)(*extraout_EDX + 4) = *(int *)(*extraout_EDX + 4) - local_8;
    *(uint *)(*extraout_EDX + 0x40) = 0x80000000;
    *(int *)(*extraout_EDX + 0x34) = *(int *)(*extraout_EDX + 0x34) + local_8;
    fVar7 = fVar7 * fVar5;
    *(uint *)(*extraout_EDX + 0x70) = 0x80000000;
    round();
    local_c = (int)ROUND(fVar7);
    *(int *)(*(int *)this_ptr_01 + 100) = *(int *)(*(int *)this_ptr_01 + 100) + local_c;
    *(uint *)(*(int *)this_ptr_01 + 0xa0) = 0x80000000;
    *(int *)(*(int *)this_ptr_01 + 0x94) = *(int *)(*(int *)this_ptr_01 + 0x94) - local_c;
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(this_ptr_01,local_e8);
    local_a8 = (int)ROUND(*(float *)world_position * _DAT_005f64e4);
    local_a4 = (int)ROUND(*(float *)&this_ptr->field_0x8 * _DAT_005f64e4);
    local_a0 = (int)ROUND(*(float *)&this_ptr->field_0xc * _DAT_005f64e4);
    engine_special_cpp_FUN_0055d9ec(*(SProjectedVertex **)DAT_0060b280,(CVector3i *)&local_a8);
    local_78 = (int)ROUND(*(float *)world_position * _DAT_005f64e4);
    local_74 = (int)ROUND(*(float *)&this_ptr->field_0x8 * _DAT_005f64e4);
    local_70 = (int)ROUND(*(float *)&this_ptr->field_0xc * _DAT_005f64e4);
    engine_special_cpp_FUN_0055d9ec
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x30),(CVector3i *)&local_78);
    local_c0 = (int)ROUND(*(float *)puVar1 * _DAT_005f64e4);
    local_bc = (int)ROUND(*(float *)&this_ptr->field_0x20 * _DAT_005f64e4);
    local_b8 = (int)ROUND(*(float *)&this_ptr->field_0x24 * _DAT_005f64e4);
    engine_special_cpp_FUN_0055d9ec
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x60),(CVector3i *)&local_c0);
    local_84 = (int)ROUND(*(float *)puVar1 * _DAT_005f64e4);
    local_80 = (int)ROUND(*(float *)&this_ptr->field_0x20 * _DAT_005f64e4);
    local_7c = (int)ROUND(*(float *)&this_ptr->field_0x24 * _DAT_005f64e4);
    engine_special_cpp_FUN_0055d9ec
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x90),(CVector3i *)&local_84);
    this_ptr_00 = DAT_0060b280;
    *(uint *)(*(int *)DAT_0060b280 + 0x10) = 0x80000000;
    **(int **)this_ptr_00 = **(int **)this_ptr_00 - local_8;
    *(uint *)(*(int *)this_ptr_00 + 0x40) = 0x80000000;
    *(int *)(*(int *)this_ptr_00 + 0x30) = *(int *)(*(int *)this_ptr_00 + 0x30) + local_8;
    *(uint *)(*(int *)this_ptr_00 + 0x70) = 0x80000000;
    *(int *)(*(int *)this_ptr_00 + 0x60) = *(int *)(*(int *)this_ptr_00 + 0x60) + local_c;
    *(uint *)(*(int *)this_ptr_00 + 0xa0) = 0x80000000;
    *(int *)(*(int *)this_ptr_00 + 0x90) = *(int *)(*(int *)this_ptr_00 + 0x90) - local_c;
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(this_ptr_00,local_e8);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  return;
}

// Name: core_fire.cpp_FUN_00497350
// Address: 00497350
// Address Range: [[00497350, 00497656]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_00497350(CBulletTrail *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_FUN_00497350(CBulletTrail *this_ptr)

{
  int iVar1;
  float fVar2;
  int extraout_EDX;
  byte bVar3;
  float10 fVar4;
  float afStackY_10ac [1009];
  CDemonRenderer *this_ptr_00;
  CVector3f *world_position;
  float local_d8;
  float local_d4;
  CVector3f local_d0;
  CVector3f local_c4;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8 [4];
  float local_98;
  CVector3f local_94;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78 [4];
  float local_68;
  float local_64;
  float afStack_60 [4];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_2c;
  int local_28;
  float local_24;
  int local_20;
  float local_1c;
  int local_18;
  
  bVar3 = 0;
  local_88 = *(float *)&this_ptr->field_0xc - *(float *)this_ptr;
  local_84 = *(float *)&this_ptr->field_0x10 - *(float *)&this_ptr->field_0x4;
  local_80 = *(float *)&this_ptr->field_0x14 - *(float *)&this_ptr->field_0x8;
  local_b8 = local_88;
  local_b4 = local_84;
  local_b0 = local_80;
  iVar1 = *(int *)&this_ptr->field_0x18;
  local_78[2] = *(float *)(iVar1 + 0x344) - *(float *)(iVar1 + 0x338);
  local_78[3] = *(float *)(iVar1 + 0x348) - *(float *)(iVar1 + 0x33c);
  local_68 = *(float *)(iVar1 + 0x34c) - *(float *)(iVar1 + 0x340);
  local_a8[2] = local_78[2];
  local_a8[3] = local_78[3];
  local_98 = local_68;
  local_d8 = SQRT(local_80 * local_80 + local_88 * local_88 + local_84 * local_84) - local_68;
  if (0.0 < local_d8) {
    local_28 = 2;
    if (0.0 < *(float *)&this_ptr->field_0x1c) {
      fVar4 = (float10)local_d8 / (float10)*(float *)&this_ptr->field_0x1c;
      round();
      local_28 = (int)ROUND(fVar4);
      if (local_28 < extraout_EDX) {
        local_28 = extraout_EDX;
      }
      else if (100 < local_28) {
        local_28 = 100;
      }
    }
    local_18 = local_28;
    local_24 = (float)local_28;
    fVar2 = 1.0 / (float)local_28;
    local_ac = local_b8 * fVar2;
    local_a8[0] = local_b4 * fVar2;
    local_a8[1] = local_b0 * fVar2;
    afStack_60[2] = local_b8 * fVar2;
    afStack_60[(uint)bVar3 * -2 + 3] = local_a8[(uint)bVar3 * -2];
    afStack_60[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
         local_a8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    core_vecdir_cpp_FUN_005838f0(&local_b8);
    iVar1 = local_28;
    local_20 = 0;
    local_94._0_4_ = local_c4._0_4_;
    *(uint *)((int)&local_94 + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&local_c4 + (uint)bVar3 * -8 + 4);
    *(uint *)((int)&local_94 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)((int)&local_c4 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    if (0 < iVar1) {
      local_2c = iVar1 + -1;
      do {
        local_1c = (float)local_20;
        local_18 = local_2c;
        local_d4 = ((float)local_20 * _DAT_005d5462) / (float)local_2c;
        if ((float)_DAT_005d546a < local_d4) {
          world_position = (CVector3f *)&local_64;
          local_4c = afStack_60[2] * local_1c;
          local_48 = afStack_60[3] * local_1c;
          local_44 = local_50 * local_1c;
          local_40 = afStack_60[2] * local_1c;
          afStack_60[(uint)bVar3 * -2 + 9] = afStack_60[(uint)bVar3 * -2 + 6];
          afStack_60[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10] =
               afStack_60[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7];
          local_7c = *(float *)this_ptr + local_40;
          local_78[0] = *(float *)&this_ptr->field_0x4 + local_3c;
          local_78[1] = *(float *)&this_ptr->field_0x8 + local_38;
          local_64 = *(float *)this_ptr + local_40;
          afStack_60[(uint)bVar3 * -2] = local_78[(uint)bVar3 * -2];
          this_ptr_00 = DAT_0060b280;
          afStack_60[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
               local_78[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
                    (this_ptr_00,world_position);
          local_d0._0_4_ = 0;
          local_d0._4_4_ = 0;
          local_d0._8_4_ = 0;
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                    (DAT_0060b280,&local_94,&local_d0);
          fVar4 = (float10)local_d4;
          round();
          local_18 = (int)ROUND(fVar4);
          core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_0044e6a0
                    (*(CKeyFramedModel **)&this_ptr->field_0x18,0,(CKeyFramedModelInstance *)0x0,
                     local_18);
          engine_matrix_c_pop_FUN_0046b4a0();
        }
        local_20 = local_20 + 1;
      } while (local_20 < local_28);
    }
  }
  return;
}

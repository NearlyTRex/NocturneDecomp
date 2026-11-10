// Name: core_colonel.cpp_CColonel_processAI_FUN_00435e30
// Address: 00435e30
// Address Range: [[00435e30, 00436417]]
// Convention: __cdecl
// Signature: void __cdecl core_colonel_cpp_CColonel_processAI_FUN_00435e30(CColonel *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_colonel_cpp_CColonel_processAI_FUN_00435e30(CColonel *this_ptr,float delta_time)

{
  float fVar1;
  int iVar2;
  CPathMap *this_ptr_00;
  byte bVar3;
  float afStackY_10b4 [1007];
  float local_e0;
  float local_dc;
  CVector3f local_d8;
  float local_cc;
  float local_c8 [6];
  float local_b0;
  float local_a8;
  float local_a4 [5];
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar3 = 0;
  local_28 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  local_24 = 0;
  local_1c = 0.25;
  local_2c = 0.7853982;
  memset(&this_ptr->field_0x10a68,0,0x34);
  if (*(int *)&this_ptr->field_0x25638 != 0) {
    iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    local_a8 = *(float *)&this_ptr->field_0x20 - *(float *)(iVar2 + 0x20);
    local_a4[0] = *(float *)&this_ptr->field_0x24 - *(float *)(iVar2 + 0x24);
    local_a4[1] = *(float *)&this_ptr->field_0x28 - *(float *)(iVar2 + 0x28);
    local_84 = local_a8;
    local_a4[(uint)bVar3 * -2 + 9] = local_a4[(uint)bVar3 * -2];
    local_a4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10] =
         local_a4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    local_44 = SQRT(local_7c * local_7c + local_84 * local_84 + local_80 * local_80);
    if ((((*(int *)&this_ptr->field_0x25638 == 3) || (local_44 < _DAT_005cdbf1)) &&
        ((*(int *)&this_ptr->field_0x25638 == 2 || (*(int *)&this_ptr->field_0x25638 == 3)))) &&
       ((iVar2 = core_hero_cpp_FUN_004d00c0(this_ptr,&local_e0), iVar2 != 0 &&
        (local_e0 < (float)_DAT_005cdbf5)))) {
      local_28 = iVar2;
      local_24 = 1;
    }
    local_cc = *(float *)(local_28 + 0x20) - *(float *)&this_ptr->field_0x20;
    local_c8[0] = *(float *)(local_28 + 0x24) - *(float *)&this_ptr->field_0x24;
    local_c8[1] = *(float *)(local_28 + 0x28) - *(float *)&this_ptr->field_0x28;
    local_6c = local_cc;
    local_a4[(uint)bVar3 * -2 + 0xf] = local_c8[(uint)bVar3 * -2];
    local_a4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x10] =
         local_c8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    if (local_a4 + 8 != local_a4 + 0xe) {
      local_84 = local_6c;
      local_80 = local_68;
      local_7c = local_64;
    }
    local_48 = SQRT(local_7c * local_7c + local_84 * local_84 + local_80 * local_80);
    local_dc = local_48;
    if ((float)_DAT_005cdbfd <= local_48) {
      this_ptr_00 = (CPathMap *)0x0;
      if (local_24 == 0) {
        iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        this_ptr_00 = (CPathMap *)(**(code **)(*(int *)(iVar2 + 0x2b0) + 0xcc))(iVar2);
      }
      if (this_ptr_00 == (CPathMap *)0x0) {
        this_ptr_00 = core_path_cpp_getPathMap_FUN_00513ea0((CLocation *)(local_28 + 0x20));
      }
      iVar2 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00513650
                        (this_ptr_00,(CVector3f *)&this_ptr->field_0x20,&local_d8,
                         *(int *)&this_ptr->field_0x6c);
      if (iVar2 != 0) {
        local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                    (local_d8.y - *(float *)&this_ptr->field_0x34);
        fVar1 = local_18 * _DAT_005cdc05 * (float)_DAT_005cdc0d;
        local_38 = -local_1c;
        *(float *)&this_ptr->field_0x10a90 = fVar1;
        if (fVar1 < local_38) {
          *(float *)&this_ptr->field_0x10a90 = local_38;
        }
        if (local_1c < *(float *)&this_ptr->field_0x10a90) {
          *(float *)&this_ptr->field_0x10a90 = local_1c;
        }
        if (((float)_DAT_005cdc15 <= local_dc) || (local_24 == 1)) {
          *(uint *)&this_ptr->field_0x10a70 = 1;
          *(uint *)&this_ptr->field_0x10a68 = 1;
        }
        else {
          *(uint *)&this_ptr->field_0x10a68 = 1;
        }
      }
    }
    else {
      if (local_24 == 1) {
        if (this_ptr->guns_drawn == 0) {
          *(uint *)&this_ptr->field_0x10a80 = 1;
        }
        else {
          iVar2 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
          if ((*(int *)(iVar2 + 0x24) != 2) && (*(int *)(iVar2 + 0x24) != 1)) {
            *(uint *)&this_ptr->field_0x10a74 = 1;
          }
        }
      }
      else {
        core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
      }
      if (local_24 == 1) {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(local_a4 + 8);
        local_a4[2] = local_c8[2];
        local_a4[(uint)bVar3 * -2 + 3] = local_c8[(uint)bVar3 * -2 + 3];
        local_a4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
             local_c8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
        local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                    (local_a4[3] - *(float *)&this_ptr->field_0x34);
        fVar1 = local_18 * _DAT_005cdc05 * (float)_DAT_005cdc0d;
        local_40 = -local_1c;
        *(float *)&this_ptr->field_0x10a90 = fVar1;
        if (fVar1 < local_40) {
          *(float *)&this_ptr->field_0x10a90 = local_40;
        }
        if (local_1c < *(float *)&this_ptr->field_0x10a90) {
          *(float *)&this_ptr->field_0x10a90 = local_1c;
        }
        if ((((float)_DAT_005cdc1d < *(float *)&this_ptr->field_0x10a90) &&
            ((double)*(float *)&this_ptr->field_0x10a90 < _DAT_005cdc25)) &&
           (*(int *)&this_ptr->field_0x10a74 != 0)) {
          *(uint *)&this_ptr->field_0x10a90 = 0;
        }
      }
    }
    local_60 = *(float *)(local_28 + 0x20) - *(float *)&this_ptr->field_0x20;
    local_5c = *(float *)(local_28 + 0x24) - *(float *)&this_ptr->field_0x24;
    local_58 = *(float *)(local_28 + 0x28) - *(float *)&this_ptr->field_0x28;
    local_90 = local_60;
    local_a4[(uint)bVar3 * -2 + 6] = local_a4[(uint)bVar3 * -2 + 0x12];
    local_a4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
         local_a4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x13];
    if (local_a4 + 8 != local_a4 + 5) {
      local_84 = local_90;
      local_80 = local_8c;
      local_7c = local_88;
    }
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(local_a4 + 8);
    local_78 = local_54;
    local_a4[(uint)bVar3 * -2 + 0xc] = local_a4[(uint)bVar3 * -2 + 0x15];
    local_a4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd] =
         local_a4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x16];
    if (local_a4 + 8 != local_a4 + 0xb) {
      local_84 = local_78;
      local_80 = local_74;
      local_7c = local_70;
    }
    local_b0 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                (local_80 - *(float *)&this_ptr->field_0x34);
    if (local_2c < local_b0) {
      local_b0 = local_2c;
    }
    if (local_b0 < -local_2c) {
      local_b0 = -local_2c;
    }
    local_20 = local_b0 - (this_ptr->head_look_euler).y;
    if (delta_time * _DAT_005cdc2d < local_20) {
      local_20 = delta_time * _DAT_005cdc2d;
    }
    if (local_20 < delta_time * _DAT_005cdc31) {
      local_20 = delta_time * _DAT_005cdc31;
    }
    (this_ptr->head_look_euler).y = (this_ptr->head_look_euler).y + local_20;
  }
  return;
}

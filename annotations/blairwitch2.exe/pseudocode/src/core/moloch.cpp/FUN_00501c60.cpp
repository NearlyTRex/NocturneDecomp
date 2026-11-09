// Name: core_moloch.cpp_FUN_00501c60
// Address: 00501c60
// Address Range: [[00501c60, 005020b9]]
// Convention: __cdecl
// Signature: void __cdecl core_moloch_cpp_FUN_00501c60(CMoloch *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_moloch_cpp_FUN_00501c60(CMoloch *this_ptr,float delta_time)

{
  int iVar1;
  float fVar2;
  CPathMap *this_ptr_00;
  uint uVar3;
  int iVar4;
  byte bVar5;
  float afStackY_108c [1009];
  byte auStack_b0 [12];
  float fStack_a4;
  float afStack_a0 [4];
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float fStack_40;
  float fStack_34;
  float local_28;
  float local_24;
  float fStack_20;
  int local_18;
  float fStack_14;
  
  bVar5 = 0;
  local_18 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  local_24 = 0.25;
  local_28 = 0.7853982;
  memset(&this_ptr->field_0x10a68,0,0x34);
  iVar4 = local_18;
  if ((*(int *)&this_ptr->field_0x25638 != 0) && (*(int *)&this_ptr->field_0x25638 == 1)) {
    iVar1 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    local_5c = *(float *)&this_ptr->field_0x20 - *(float *)(iVar1 + 0x20);
    local_58 = *(float *)&this_ptr->field_0x24 - *(float *)(iVar1 + 0x24);
    local_54 = *(float *)&this_ptr->field_0x28 - *(float *)(iVar1 + 0x28);
    afStack_a0[2] = local_5c;
    afStack_a0[(uint)bVar5 * -2 + 3] = afStack_a0[(uint)bVar5 * -2 + 0x12];
    afStack_a0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         afStack_a0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13];
    local_50 = *(float *)(iVar4 + 0x20) - *(float *)&this_ptr->field_0x20;
    local_4c = *(float *)(iVar4 + 0x24) - *(float *)&this_ptr->field_0x24;
    local_48 = *(float *)(iVar4 + 0x28) - *(float *)&this_ptr->field_0x28;
    local_68 = local_50;
    afStack_a0[(uint)bVar5 * -2 + 0xf] = afStack_a0[(uint)bVar5 * -2 + 0x15];
    afStack_a0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
         afStack_a0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16];
    if (afStack_a0 + 2 != afStack_a0 + 0xe) {
      afStack_a0[2] = local_68;
      afStack_a0[3] = local_64;
      local_90 = local_60;
    }
    iVar4 = _DAT_01cedef4 * 4;
    *(uint *)&this_ptr->field_0x2578 = 0;
    if (SQRT(local_90 * local_90 + afStack_a0[2] * afStack_a0[2] + afStack_a0[3] * afStack_a0[3]) <=
        (float)_DAT_005df249) {
      iVar4 = *(int *)(iVar4 + 0x1cedee4);
      iVar4 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x154))(iVar4);
      if ((iVar4 == 0) && (uVar3 = core_charactr_cpp_FUN_0042abe0(this_ptr,delta_time), uVar3 != 0))
      {
        if (uVar3 < 2) {
          *(uint *)&this_ptr->field_0x10a68 = 1;
        }
        else if (uVar3 == 2) {
          *(uint *)&this_ptr->field_0x10a70 = 1;
          *(uint *)&this_ptr->field_0x10a68 = 1;
        }
      }
    }
    else {
      iVar4 = *(int *)(iVar4 + 0x1cedee4);
      this_ptr_00 = (CPathMap *)(**(code **)(*(int *)(iVar4 + 0x2b0) + 0xcc))(iVar4);
      iVar4 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00513650
                        (this_ptr_00,(CVector3f *)&this_ptr->field_0x20,(CVector3f *)auStack_b0,
                         *(int *)&this_ptr->field_0x6c);
      if (iVar4 != 0) {
        fStack_14 = (float)core_actor_cpp_FUN_0040d0c0
                                     ((float)auStack_b0._4_4_ - *(float *)&this_ptr->field_0x34);
        fVar2 = fStack_14 * _DAT_005df251 * (float)_DAT_005df259;
        fStack_34 = -local_24;
        *(float *)&this_ptr->field_0x10a90 = fVar2;
        if (fVar2 < fStack_34) {
          *(float *)&this_ptr->field_0x10a90 = fStack_34;
        }
        if (local_24 < *(float *)&this_ptr->field_0x10a90) {
          *(float *)&this_ptr->field_0x10a90 = local_24;
        }
        *(uint *)&this_ptr->field_0x10a68 = 1;
      }
      *(uint *)&this_ptr->field_0x303c = 0;
    }
    if (*(float *)&this_ptr->field_0x2578 <= 0.0) {
      if (*(float *)&this_ptr->field_0x2578 < 0.0) {
        *(uint *)&this_ptr->field_0x2578 = 0;
        *(float *)&this_ptr->field_0x10a90 = -local_24;
      }
    }
    else {
      *(uint *)&this_ptr->field_0x2578 = 0;
      *(float *)&this_ptr->field_0x10a90 = local_24;
    }
    fStack_a4 = *(float *)(local_18 + 0x20) - *(float *)&this_ptr->field_0x20;
    afStack_a0[0] = *(float *)(local_18 + 0x24) - *(float *)&this_ptr->field_0x24;
    afStack_a0[1] = *(float *)(local_18 + 0x28) - *(float *)&this_ptr->field_0x28;
    fStack_8c = fStack_a4;
    afStack_a0[(uint)bVar5 * -2 + 6] = afStack_a0[(uint)bVar5 * -2];
    afStack_a0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
         afStack_a0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    if (afStack_a0 + 2 != afStack_a0 + 5) {
      afStack_a0[2] = fStack_8c;
      afStack_a0[3] = fStack_88;
      local_90 = fStack_84;
    }
    core_vecdir_cpp_FUN_005838f0(afStack_a0 + 2);
    fStack_80 = fStack_74;
    afStack_a0[(uint)bVar5 * -2 + 9] = afStack_a0[(uint)bVar5 * -2 + 0xc];
    afStack_a0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
         afStack_a0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
    if (afStack_a0 + 2 != afStack_a0 + 8) {
      afStack_a0[2] = fStack_80;
      afStack_a0[3] = fStack_7c;
      local_90 = fStack_78;
    }
    fStack_40 = (float)core_actor_cpp_FUN_0040d0c0(afStack_a0[3] - *(float *)&this_ptr->field_0x34);
    if (local_28 < fStack_40) {
      fStack_40 = local_28;
    }
    if (fStack_40 < -local_28) {
      fStack_40 = -local_28;
    }
    fStack_20 = fStack_40 - *(float *)&this_ptr->field_0x285f8;
    if (delta_time * _DAT_005df261 < fStack_20) {
      fStack_20 = delta_time * _DAT_005df261;
    }
    if (fStack_20 < delta_time * _DAT_005df265) {
      fStack_20 = delta_time * _DAT_005df265;
    }
    *(float *)&this_ptr->field_0x285f8 = *(float *)&this_ptr->field_0x285f8 + fStack_20;
  }
  return;
}

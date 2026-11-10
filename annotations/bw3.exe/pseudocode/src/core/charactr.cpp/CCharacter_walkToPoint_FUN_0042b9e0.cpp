// Name: core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
// Address: 0042b9e0
// Address Range: [[0042b9e0, 0042c011]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter *this_ptr,CVector3f *target_pos,CPathMap *path_map,CVector3f *direction,float min_distance,float max_distance)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter *this_ptr,CVector3f *target_pos,CPathMap *path_map,CVector3f *direction,float min_distance,float max_distance)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  byte bVar7;
  float afStackY_1118 [1010];
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  uint local_130;
  float local_12c;
  uint local_124;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_100;
  float local_fc;
  float local_f8;
  CVector3f local_f4;
  float local_e8;
  float local_e4 [5];
  uint local_d0;
  float local_c4;
  float local_c0;
  float local_bc;
  uint local_b8;
  float local_b4;
  float local_ac;
  uint local_a0;
  float local_9c;
  float local_94;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  uint local_70;
  float local_64;
  float local_60;
  float local_5c;
  int local_50;
  float local_44;
  float local_3c;
  float local_38;
  float local_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_14;
  
  bVar7 = 0;
  local_1c = *(float *)&this_ptr->field_0x2524;
  local_20 = *(float *)&this_ptr->field_0x2528;
  local_134 = SQRT(direction->x * direction->x + direction->z * direction->z);
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(direction);
  local_b8 = local_d0;
  local_e4[(uint)bVar7 * -2 + 0xc] = local_e4[(uint)bVar7 * -2 + 6];
  local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
       local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  local_140 = local_b4;
  core_actor_cpp_FUN_00408bf0(this_ptr,target_pos);
  local_118 = local_94;
  (&stack0xfffffeec)[(uint)bVar7 * 0xfffffffe] = local_e4[(uint)bVar7 * -2 + 0x15];
  *(float *)((int)&stack0xfffffef0 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16];
  local_24 = SQRT(local_118 * local_118 + local_110 * local_110);
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&stack0xfffffee8);
  fVar6 = local_24 - local_134;
  local_130 = local_70;
  *(float *)((int)&stack0xfffffed4 + (uint)bVar7 * -8) = local_e4[(uint)bVar7 * -2 + 0x1e];
  *(float *)(&stack0xfffffed8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1f];
  local_50 = 0;
  local_138 = 0.0;
  local_13c = ABS(fVar6);
  if (0.0 < SQRT(direction->z * direction->z +
                 direction->x * direction->x + direction->y * direction->y)) {
    local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(local_12c - local_b4);
    local_138 = ABS(local_14);
  }
  if (((local_13c < min_distance + (float)_DAT_005b81f6) &&
      (local_138 < max_distance + (float)_DAT_005b81f6)) && (ABS(local_114) < (float)_DAT_005b81fe))
  {
    local_50 = 1;
  }
  fVar3 = (float)_DAT_005b8206;
  fVar2 = (float)_DAT_005b820e;
  (this_ptr->model).accumulated_root_motion.z = 0.0;
  fVar4 = (float)_DAT_005b8216;
  (this_ptr->model).accumulated_root_motion.y = (this_ptr->model).accumulated_root_motion.z;
  fVar6 = (float)_DAT_005b821e;
  (this_ptr->model).accumulated_root_motion.x = (this_ptr->model).accumulated_root_motion.y;
  local_64 = local_134 * fVar4 + fVar6 + ABS(local_140) * fVar3 * fVar2;
  if ((*(int *)&this_ptr->field_0x27a8 != 0) || ((local_24 < local_64 && (ABS(local_114) <= 1.0))))
  {
    pfVar1 = &(this_ptr->position_delta).z;
    local_5c = -local_1c;
    local_30 = local_24 - local_134;
    local_3c = local_5c;
    if ((local_5c <= local_30) && (local_3c = local_30, local_1c < local_30)) {
      local_3c = local_1c;
    }
    *pfVar1 = *pfVar1 + local_3c;
    core_actor_cpp_FUN_00408b80(this_ptr,&this_ptr->position_delta);
    local_100 = local_10c;
    local_e4[(uint)bVar7 * -2 + -6] = *(float *)(&stack0xfffffef8 + (uint)bVar7 * -8);
    local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + -5] =
         local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + -8];
    core_actor_cpp_FUN_00408b00(this_ptr,direction);
    local_e8 = local_ac;
    local_e4[(uint)bVar7 * -2] = local_e4[(uint)bVar7 * -2 + 0xf];
    local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
    local_7c = target_pos->x - local_e8;
    local_78 = target_pos->y - local_e4[0];
    local_74 = target_pos->z - local_e4[1];
    local_88 = local_7c;
    local_e4[(uint)bVar7 * -2 + 0x18] = local_e4[(uint)bVar7 * -2 + 0x1b];
    local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19] =
         local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1c];
    local_c4 = local_88 - local_100;
    local_c0 = local_84 - local_fc;
    local_bc = local_80 - local_f8;
    local_e4[2] = local_88 - local_100;
    local_e4[(uint)bVar7 * -2 + 3] = local_e4[(uint)bVar7 * -2 + 9];
    local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(local_e4 + 2);
    local_a0 = local_124;
    local_e4[(uint)bVar7 * -2 + 0x12] = *(float *)(&stack0xfffffee0 + (uint)bVar7 * -8);
    local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
         *(float *)(&stack0xfffffee4 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    fVar4 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                             (local_9c - (this_ptr->base).orient.vec.y);
    fVar6 = -local_20;
    if ((fVar6 <= fVar4) && (fVar6 = fVar4, local_20 < fVar4)) {
      fVar6 = local_20;
    }
    this_ptr->turn_angle_accumulator = fVar6;
    if (*(int *)&this_ptr->field_0x27a8 != 0) {
      fVar6 = -local_1c;
      local_114 = local_114 - direction->y;
      if ((fVar6 <= local_114) && (fVar6 = local_114, local_1c < local_114)) {
        fVar6 = local_1c;
      }
      (this_ptr->position_delta).y = fVar6;
    }
  }
  else {
    if (path_map == (CPathMap *)0x0) {
      path_map = core_path_cpp_getPathMap_FUN_0050ced0((CLocation *)target_pos);
    }
    iVar5 = core_path_cpp_CPathMap_findPathWithRetry_FUN_0050c680
                      (path_map,&(this_ptr->base).location.position,&local_f4,
                       (this_ptr->base).direction_hint);
    if (iVar5 == 0) {
      if (local_50 == 0) {
        engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"CCharacter::walkToPoint - go somewhere failed\n");
        return -1;
      }
      return 1;
    }
    pfVar1 = &(this_ptr->position_delta).z;
    local_60 = -local_1c;
    local_38 = local_24 - local_134;
    local_44 = local_60;
    if ((local_60 <= local_38) && (local_44 = local_38, local_1c < local_38)) {
      local_44 = local_1c;
    }
    *pfVar1 = *pfVar1 + local_44;
    local_14 = local_f4.y - (this_ptr->base).orient.vec.y;
    fVar4 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(local_14);
    fVar6 = -local_20;
    if ((fVar6 <= fVar4) && (fVar6 = fVar4, local_20 < fVar4)) {
      fVar6 = local_20;
    }
    this_ptr->turn_angle_accumulator = this_ptr->turn_angle_accumulator + fVar6;
  }
  if (local_50 == 0) {
    return 0;
  }
  return 1;
}

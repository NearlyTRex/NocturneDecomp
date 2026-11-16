// Name: core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
// Address: 0042b9e0
// Address Range: [[0042b9e0, 0042c011]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter *this_ptr,CVector3f *target_pos,CPathMap *path_map,CVector3f *direction,float min_distance,float max_distance)

#include "nocturne.h"

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
  float local_130;
  float local_12c;
  CVector3f local_124;
  CVector3f local_118;
  CVector3f local_10c;
  float local_100;
  float local_fc [2];
  CVector3f local_f4;
  float local_e8;
  float local_e4 [2];
  CVector3f local_dc;
  CVector3f local_d0;
  float local_c4;
  float local_c0 [5];
  CVector3f local_ac;
  float local_a0;
  float local_9c [2];
  CVector3f local_94;
  float local_88;
  float local_84 [4];
  float local_74;
  CVector3f local_70;
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
  local_1c = this_ptr->walk_step_speed;
  local_20 = this_ptr->turn_speed;
  local_134 = SQRT(direction->x * direction->x + direction->z * direction->z);
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(direction,&local_d0);
  local_c0[2] = local_d0.x;
  local_c0[(uint)bVar7 * -2 + 3] = *(float *)((int)&local_d0 + (uint)bVar7 * -8 + 4);
  local_c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       *(float *)((int)&local_d0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  local_140 = local_c0[3];
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0(&this_ptr->base,target_pos,&local_94);
  local_118.x = local_94.x;
  *(uint *)((int)&local_118 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_94 + (uint)bVar7 * -8 + 4);
  *(uint *)((int)&local_118 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       *(uint *)((int)&local_94 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  local_24 = SQRT(local_118.x * local_118.x + local_118.z * local_118.z);
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&local_118,&local_70);
  fVar6 = local_24 - local_134;
  local_130 = local_70.x;
  *(uint *)((int)&stack0xfffffed4 + (uint)bVar7 * -8) =
       *(uint *)((int)&local_70 + (uint)bVar7 * -8 + 4);
  *(uint *)(&stack0xfffffed8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)((int)&local_70 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  local_50 = 0;
  local_138 = 0.0;
  local_13c = ABS(fVar6);
  if (0.0 < SQRT(direction->z * direction->z +
                 direction->x * direction->x + direction->y * direction->y)) {
    local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(local_12c - local_c0[3]);
    local_138 = ABS(local_14);
  }
  if (((local_13c < min_distance + (float)_DAT_005b81f6) &&
      (local_138 < max_distance + (float)_DAT_005b81f6)) &&
     (ABS(local_118.y) < (float)_DAT_005b81fe)) {
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
  if ((this_ptr->is_spectral != 0) || ((local_24 < local_64 && (ABS(local_118.y) <= 1.0)))) {
    pfVar1 = &(this_ptr->position_delta).z;
    local_5c = -local_1c;
    local_30 = local_24 - local_134;
    local_3c = local_5c;
    if ((local_5c <= local_30) && (local_3c = local_30, local_1c < local_30)) {
      local_3c = local_1c;
    }
    *pfVar1 = *pfVar1 + local_3c;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
              (&this_ptr->base,&this_ptr->position_delta,&local_10c);
    local_100 = local_10c.x;
    local_fc[(uint)bVar7 * -2] = *(float *)((int)&local_10c + (uint)bVar7 * -8 + 4);
    local_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         *(float *)((int)&local_10c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    core_actor_cpp_CDemonActor_transformVector_FUN_00408b00(&this_ptr->base,direction,&local_ac);
    local_e8 = local_ac.x;
    local_e4[(uint)bVar7 * -2] = *(float *)((int)&local_ac + (uint)bVar7 * -8 + 4);
    local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         *(float *)((int)&local_ac + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    local_84[2] = target_pos->x - local_e8;
    local_84[3] = target_pos->y - local_e4[0];
    local_74 = target_pos->z - local_e4[1];
    local_88 = local_84[2];
    local_84[(uint)bVar7 * -2] = local_84[(uint)bVar7 * -2 + 3];
    local_84[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         local_84[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    local_c4 = local_88 - local_100;
    local_c0[0] = local_84[0] - local_fc[0];
    local_c0[1] = local_84[1] - local_fc[1];
    local_dc.x = local_88 - local_100;
    *(float *)((int)&local_dc + (uint)bVar7 * -8 + 4) = local_c0[(uint)bVar7 * -2];
    *(float *)((int)&local_dc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         local_c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&local_dc,&local_124);
    local_a0 = local_124.x;
    local_9c[(uint)bVar7 * -2] = *(float *)((int)&local_124 + (uint)bVar7 * -8 + 4);
    local_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         *(float *)((int)&local_124 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                      (local_9c[0] - (this_ptr->base).orient.vec.y);
    fVar6 = -local_20;
    if ((fVar6 <= fVar4) && (fVar6 = fVar4, local_20 < fVar4)) {
      fVar6 = local_20;
    }
    this_ptr->turn_angle_accumulator = fVar6;
    if (this_ptr->is_spectral != 0) {
      fVar6 = -local_1c;
      local_118.y = local_118.y - direction->y;
      if ((fVar6 <= local_118.y) && (fVar6 = local_118.y, local_1c < local_118.y)) {
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
        engine_console_cpp_CConsole_printf_FUN_00441ff0
                  (g_CConsolePtr,"CCharacter::walkToPoint - go somewhere failed\n");
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
    fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(local_14);
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

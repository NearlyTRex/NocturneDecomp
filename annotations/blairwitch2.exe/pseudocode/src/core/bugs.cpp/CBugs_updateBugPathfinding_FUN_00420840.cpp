// Name: core_bugs.cpp_CBugs_updateBugPathfinding_FUN_00420840
// Address: 00420840
// Address Range: [[00420840, 00420e88]]
// Convention: __cdecl
// Signature: int __cdecl core_bugs_cpp_CBugs_updateBugPathfinding_FUN_00420840(CBugs *this_ptr,SBug *bug_data,float delta_time,CVector3f *dest_vertex)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_bugs_cpp_CBugs_updateBugPathfinding_FUN_00420840(CBugs *this_ptr,SBug *bug_data,float delta_time,CVector3f *dest_vertex)

{
  float fVar1;
  byte bVar2;
  float afStackY_10c0 [1011];
  float local_e8;
  CVector3f local_e4;
  CVector3f local_d8;
  float local_cc;
  float local_c8 [5];
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  CVector3f local_84;
  CVector3f local_78;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c [4];
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  CVector3f *local_30;
  CVector3f *local_2c;
  CVector3f *local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar2 = 0;
  if (bug_data->state != 0) {
    return 0;
  }
  local_28 = &bug_data->dest_position;
  local_30 = &bug_data->position;
  local_e4.x = local_28->x - local_30->x;
  local_e4.y = (bug_data->dest_position).y - (bug_data->position).y;
  local_e4.z = (bug_data->dest_position).z - (bug_data->position).z;
  local_e8 = SQRT(local_e4.z * local_e4.z + local_e4.x * local_e4.x + local_e4.y * local_e4.y);
  local_6c = local_e4.x;
  local_68 = local_e4.y;
  local_64 = local_e4.z;
  local_5c[3] = local_e8;
  if (local_e8 < _DAT_005f3e28) {
    local_18 = core_bugs_cpp_CBugs_sampleGroundHeight_FUN_0041feb0
                         (this_ptr,(bug_data->position).x,(bug_data->position).z);
    (bug_data->position).y = local_18;
    if (dest_vertex == (CVector3f *)0x0) {
      local_5c[2] = _DAT_005f3e28 * _DAT_005cca45 * (float)_DAT_005cca49;
      local_1c = _DAT_005f3e28 * _DAT_005cca51 * (float)_DAT_005cca49;
      local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(local_1c,local_5c[2]);
      (bug_data->dest_position).x = local_18;
      local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(local_1c,local_5c[2]);
      (bug_data->dest_position).z = local_18;
      local_18 = core_bugs_cpp_CBugs_sampleGroundHeight_FUN_0041feb0
                           (this_ptr,(bug_data->dest_position).x,(bug_data->dest_position).z);
      (bug_data->dest_position).y = local_18;
      local_cc = local_28->x - local_30->x;
      local_c8[0] = local_28->y - local_30->y;
      local_c8[1] = local_28->z - local_30->z;
      local_78.x = local_cc;
      *(float *)((int)&local_78 + (uint)bVar2 * -8 + 4) = local_c8[(uint)bVar2 * -2];
      *(float *)((int)&local_78 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           local_c8[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
      if (&local_e4 != &local_78) {
        local_e4.x = local_78.x;
        local_e4.y = local_78.y;
        local_e4.z = local_78.z;
      }
      local_e8 = SQRT(local_e4.z * local_e4.z + local_e4.x * local_e4.x + local_e4.y * local_e4.y);
    }
    else {
      if (dest_vertex != local_28) {
        local_28->x = dest_vertex->x;
        local_28->y = dest_vertex->y;
        local_28->z = dest_vertex->z;
      }
      local_9c = (bug_data->dest_position).x - (bug_data->position).x;
      local_98 = (bug_data->dest_position).y - (bug_data->position).y;
      local_94 = (bug_data->dest_position).z - (bug_data->position).z;
      local_d8.x = local_9c;
      *(float *)((int)&local_d8 + (uint)bVar2 * -8 + 4) = local_c8[(uint)bVar2 * -2 + 0xc];
      *(float *)((int)&local_d8 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           local_c8[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0xd];
      if (&local_e4 != &local_d8) {
        local_e4.x = local_d8.x;
        local_e4.y = local_d8.y;
        local_e4.z = local_d8.z;
      }
      local_e8 = SQRT(local_e4.z * local_e4.z + local_e4.x * local_e4.x + local_e4.y * local_e4.y);
      local_48 = local_e8;
      if (local_e8 < _DAT_005f3e28) {
        return 1;
      }
    }
  }
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_e4,&local_84);
  fVar1 = local_e8;
  local_90 = local_84.x;
  local_c8[(uint)bVar2 * -2 + 0xf] = *(float *)((int)&local_84 + (uint)bVar2 * -8 + 4);
  local_c8[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x10] =
       *(float *)((int)&local_84 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  if (fVar1 <= 0.0) {
    return 1;
  }
  local_3c = _DAT_005f3e30 * delta_time;
  if (local_e8 < _DAT_005f3e30 * delta_time) {
    local_3c = local_e8;
  }
  local_4c = local_3c / local_e8;
  local_e4.x = local_e4.x * local_4c;
  local_e4.y = local_e4.y * local_4c;
  local_e4.z = local_e4.z * local_4c;
  local_60 = (bug_data->position).x + local_e4.x;
  local_5c[0] = (bug_data->position).y + local_e4.y;
  local_5c[1] = (bug_data->position).z + local_e4.z;
  local_a8 = local_60;
  local_c8[(uint)bVar2 * -2 + 9] = local_5c[(uint)bVar2 * -2];
  local_c8[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 10] =
       local_5c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  local_2c = &bug_data->position;
  local_18 = core_bugs_cpp_CBugs_sampleGroundHeight_FUN_0041feb0(this_ptr,local_a8,local_a0);
  local_24 = local_18;
  if (local_18 - (bug_data->position).y <= local_e8 * (float)_DAT_005cca59) {
    if ((CVector3f *)(local_c8 + 8) != local_2c) {
      local_2c->x = local_a8;
      local_2c->y = local_a4;
      local_2c->z = local_a0;
    }
    if ((bug_data->position).y < local_18) {
      (bug_data->position).y = local_18;
    }
  }
  else {
    if (local_e4.y <= 0.0) {
      fVar1 = (bug_data->position).y - local_3c;
      local_90 = 1.5707964;
    }
    else {
      fVar1 = (bug_data->position).y + local_3c;
      local_90 = -1.5707964;
    }
    (bug_data->position).y = fVar1;
  }
  local_b4 = local_90 - (bug_data->orientation).x;
  local_b0 = local_8c - (bug_data->orientation).y;
  local_ac = local_88 - (bug_data->orientation).z;
  local_c8[2] = local_b4;
  local_c8[(uint)bVar2 * -2 + 3] = local_c8[(uint)bVar2 * -2 + 6];
  local_c8[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
       local_c8[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7];
  local_44 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(local_c8[3]);
  local_18 = local_44;
  local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(local_c8[2]);
  local_34 = delta_time * _DAT_005cca61 * _DAT_005cca65;
  local_40 = -local_34;
  if (local_44 < local_40) {
    local_44 = local_40;
  }
  if (local_34 < local_44) {
    local_44 = local_34;
  }
  local_20 = -local_34;
  local_38 = local_18;
  if (local_18 < local_20) {
    local_38 = local_20;
  }
  if (local_34 < local_38) {
    local_38 = local_34;
  }
  local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0((bug_data->orientation).y + local_44);
  (bug_data->orientation).z = 0.0;
  (bug_data->orientation).y = local_18;
  fVar1 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0((bug_data->orientation).x + local_38);
  (bug_data->orientation).x = fVar1;
  return 0;
}

// Name: core_bugs.cpp_CBugs_updateBugPathfinding_FUN_00422a00
// Address: 00422a00
// Address Range: [[00422a00, 00423048]]
// Convention: __cdecl
// Signature: int __cdecl core_bugs_cpp_CBugs_updateBugPathfinding_FUN_00422a00(CBugs *this_ptr,SBug *bug_data,float delta_time,CVector3f *dest_vertex)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_bugs_cpp_CBugs_updateBugPathfinding_FUN_00422a00(CBugs *this_ptr,SBug *bug_data,float delta_time,CVector3f *dest_vertex)

{
  float fVar1;
  byte bVar2;
  float afStackY_10c0 [1011];
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
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
  float local_84;
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
  float local_50;
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
  local_e4 = local_28->x - local_30->x;
  local_e0 = (bug_data->dest_position).y - (bug_data->position).y;
  local_dc = (bug_data->dest_position).z - (bug_data->position).z;
  local_e8 = SQRT(local_dc * local_dc + local_e4 * local_e4 + local_e0 * local_e0);
  local_6c = local_e4;
  local_68 = local_e0;
  local_64 = local_dc;
  local_50 = local_e8;
  if (local_e8 < _DAT_005dcbc8) {
    local_18 = core_bugs_cpp_CBugs_sampleGroundHeight_FUN_00422070
                         (this_ptr,(bug_data->position).x,(bug_data->position).z);
    (bug_data->position).y = local_18;
    if (dest_vertex == (CVector3f *)0x0) {
      local_54 = _DAT_005dcbc8 * _DAT_005b786d * (float)_DAT_005b7871;
      local_1c = _DAT_005dcbc8 * _DAT_005b7879 * (float)_DAT_005b7871;
      local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(local_1c,local_54);
      (bug_data->dest_position).x = local_18;
      local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(local_1c,local_54);
      (bug_data->dest_position).z = local_18;
      local_18 = core_bugs_cpp_CBugs_sampleGroundHeight_FUN_00422070
                           (this_ptr,(bug_data->dest_position).x,(bug_data->dest_position).z);
      (bug_data->dest_position).y = local_18;
      local_cc = local_28->x - local_30->x;
      local_c8 = local_28->y - local_30->y;
      local_c4 = local_28->z - local_30->z;
      local_78 = local_cc;
      (&stack0xffffff8c)[(uint)bVar2 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffff38 + (uint)bVar2 * -8);
      *(uint *)((int)&stack0xffffff90 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffff3c + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      if (&stack0xffffff1c != &stack0xffffff88) {
        local_e4 = local_78;
        local_e0 = local_74;
        local_dc = local_70;
      }
      local_e8 = SQRT(local_dc * local_dc + local_e4 * local_e4 + local_e0 * local_e0);
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
      local_d8 = local_9c;
      (&stack0xffffff2c)[(uint)bVar2 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffff68 + (uint)bVar2 * -8);
      *(uint *)((int)&stack0xffffff30 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffff6c + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      if (&stack0xffffff1c != &stack0xffffff28) {
        local_e4 = local_d8;
        local_e0 = local_d4;
        local_dc = local_d0;
      }
      local_e8 = SQRT(local_dc * local_dc + local_e4 * local_e4 + local_e0 * local_e0);
      local_48 = local_e8;
      if (local_e8 < _DAT_005dcbc8) {
        return 1;
      }
    }
  }
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&stack0xffffff1c);
  fVar1 = local_e8;
  local_90 = local_84;
  *(uint *)((int)&stack0xffffff74 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffff80 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffff78 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffff84 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (fVar1 <= 0.0) {
    return 1;
  }
  local_3c = _DAT_005dcbd0 * delta_time;
  if (local_e8 < _DAT_005dcbd0 * delta_time) {
    local_3c = local_e8;
  }
  local_4c = local_3c / local_e8;
  local_e4 = local_e4 * local_4c;
  local_e0 = local_e0 * local_4c;
  local_dc = local_dc * local_4c;
  local_60 = (bug_data->position).x + local_e4;
  local_5c = (bug_data->position).y + local_e0;
  local_58 = (bug_data->position).z + local_dc;
  local_a8 = local_60;
  (&stack0xffffff5c)[(uint)bVar2 * 0xfffffffe] = (&stack0xffffffa4)[(uint)bVar2 * 0xfffffffe];
  *(uint *)((int)&stack0xffffff60 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffffa8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  local_2c = &bug_data->position;
  local_18 = core_bugs_cpp_CBugs_sampleGroundHeight_FUN_00422070(this_ptr,local_a8,local_a0);
  local_24 = local_18;
  if (local_18 - (bug_data->position).y <= local_e8 * (float)_DAT_005b7881) {
    if ((CVector3f *)&stack0xffffff58 != local_2c) {
      local_2c->x = local_a8;
      local_2c->y = local_a4;
      local_2c->z = local_a0;
    }
    if ((bug_data->position).y < local_18) {
      (bug_data->position).y = local_18;
    }
  }
  else {
    if (local_e0 <= 0.0) {
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
  local_c0 = local_b4;
  *(uint *)((int)&stack0xffffff44 + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffff50 + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffff48 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffff54 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  local_44 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(local_bc);
  local_18 = local_44;
  local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(local_c0);
  local_34 = delta_time * _DAT_005b7889 * _DAT_005b788d;
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
  local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0((bug_data->orientation).y + local_44);
  (bug_data->orientation).z = 0.0;
  (bug_data->orientation).y = local_18;
  fVar1 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0((bug_data->orientation).x + local_38);
  (bug_data->orientation).x = fVar1;
  return 0;
}

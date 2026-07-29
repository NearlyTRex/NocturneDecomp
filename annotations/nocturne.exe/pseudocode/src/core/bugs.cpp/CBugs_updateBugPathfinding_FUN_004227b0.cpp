// Name: core_bugs.cpp_CBugs_updateBugPathfinding_FUN_004227b0
// Address: 004227b0
// Address Range: [[004227b0, 00422c64]]
// Convention: __cdecl
// Signature: int __cdecl core_bugs_cpp_CBugs_updateBugPathfinding_FUN_004227b0(CBugs *this_ptr,SBug *bug_data,float delta_time,CVector3f *dest_vertex)

#include "nocturne.h"

int __cdecl core_bugs_cpp_CBugs_updateBugPathfinding_FUN_004227b0(CBugs *this_ptr,SBug *bug_data,float delta_time,CVector3f *dest_vertex)

{
  CVector3f *pCVar1;
  float fVar2;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  CVector3f local_80;
  CVector3f local_74;
  CVector3f local_68;
  float local_5c;
  float local_58;
  float local_54;
  CVector3f local_50;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (bug_data->state != 0) {
    return 0;
  }
  pCVar1 = &bug_data->dest_position;
  local_68.x = pCVar1->x - (bug_data->position).x;
  local_68.y = (bug_data->dest_position).y - (bug_data->position).y;
  local_68.z = (bug_data->dest_position).z - (bug_data->position).z;
  local_90 = SQRT(local_68.z * local_68.z + local_68.x * local_68.x + local_68.y * local_68.y);
  local_44 = local_90;
  if (local_90 < 0.5f) {
    local_14 = core_bugs_cpp_CBugs_sampleGroundHeight_FUN_00421f00
                         (this_ptr,(bug_data->position).x,(bug_data->position).z);
    (bug_data->position).y = local_14;
    if (dest_vertex == (CVector3f *)0x0) {
      local_40 = 0.5f * 12.0f * (float)0.5;
      local_18 = 0.5f * 1.6018581507970269e-314._0_4_ * (float)0.5;
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(local_18,local_40);
      (bug_data->dest_position).x = local_14;
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(local_18,local_40);
      (bug_data->dest_position).z = local_14;
      local_14 = core_bugs_cpp_CBugs_sampleGroundHeight_FUN_00421f00
                           (this_ptr,(bug_data->dest_position).x,(bug_data->dest_position).z);
      (bug_data->dest_position).y = local_14;
      local_50.x = pCVar1->x - (bug_data->position).x;
      local_50.y = (bug_data->dest_position).y - (bug_data->position).y;
      local_50.z = (bug_data->dest_position).z - (bug_data->position).z;
      if (&local_68 != &local_50) {
        local_68.x = local_50.x;
        local_68.y = local_50.y;
        local_68.z = local_50.z;
      }
      local_90 = SQRT(local_68.z * local_68.z + local_68.x * local_68.x + local_68.y * local_68.y);
    }
    else {
      if (pCVar1 != dest_vertex) {
        pCVar1->x = dest_vertex->x;
        (bug_data->dest_position).y = dest_vertex->y;
        (bug_data->dest_position).z = dest_vertex->z;
      }
      local_74.x = (bug_data->dest_position).x - (bug_data->position).x;
      local_74.y = (bug_data->dest_position).y - (bug_data->position).y;
      local_74.z = (bug_data->dest_position).z - (bug_data->position).z;
      if (&local_68 != &local_74) {
        local_68.x = local_74.x;
        local_68.y = local_74.y;
        local_68.z = local_74.z;
      }
      local_90 = SQRT(local_68.z * local_68.z + local_68.x * local_68.x + local_68.y * local_68.y);
      local_3c = local_90;
      if (local_90 < 0.5f) {
        return 1;
      }
    }
  }
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_80,&local_68);
  if (local_90 <= 0.0) {
    return 1;
  }
  local_1c = 3.0f * delta_time;
  if (local_90 < local_1c) {
    local_1c = local_90;
  }
  local_2c = local_1c / local_90;
  local_68.x = local_68.x * local_2c;
  local_68.y = local_68.y * local_2c;
  local_68.z = local_68.z * local_2c;
  pCVar1 = &bug_data->position;
  local_8c = pCVar1->x + local_68.x;
  local_88 = (bug_data->position).y + local_68.y;
  local_84 = (bug_data->position).z + local_68.z;
  local_30 = core_bugs_cpp_CBugs_sampleGroundHeight_FUN_00421f00(this_ptr,local_8c,local_84);
  if (local_30 - (bug_data->position).y <= local_90 * (float)0.40000000000000002) {
    if (pCVar1 != (CVector3f *)&local_8c) {
      pCVar1->x = local_8c;
      (bug_data->position).y = local_88;
      (bug_data->position).z = local_84;
    }
    if ((bug_data->position).y < local_30) {
      (bug_data->position).y = local_30;
    }
  }
  else if (local_68.y <= 0.0) {
    (bug_data->position).y = (bug_data->position).y - local_1c;
    local_80.x = 1.5707964;
  }
  else {
    (bug_data->position).y = (bug_data->position).y + local_1c;
    local_80.x = -1.5707964;
  }
  local_5c = local_80.x - (bug_data->orientation).x;
  local_58 = local_80.y - (bug_data->orientation).y;
  local_54 = local_80.z - (bug_data->orientation).z;
  local_14 = local_30;
  local_24 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00(local_58);
  local_14 = local_24;
  local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00(local_5c);
  local_20 = delta_time * (float)3.1415926535000001 * (float)4;
  local_38 = -local_20;
  if (local_24 < local_38) {
    local_24 = local_38;
  }
  if (local_20 < local_24) {
    local_24 = local_20;
  }
  local_34 = -local_20;
  local_28 = local_14;
  if (local_14 < local_34) {
    local_28 = local_34;
  }
  if (local_20 < local_28) {
    local_28 = local_20;
  }
  local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00((bug_data->orientation).y + local_24);
  (bug_data->orientation).z = 0.0;
  (bug_data->orientation).y = local_14;
  fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00((bug_data->orientation).x + local_28);
  (bug_data->orientation).x = fVar2;
  return 0;
}

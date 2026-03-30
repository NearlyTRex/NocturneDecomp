// Name: core_bugs.cpp_CBugs_updateBugPathfinding_FUN_00426420
// Address: 00426420
// MANUAL RECONSTRUCTION
// Address Range: [[00426420, 004264fb] [004265af, 004268d4]]
// Convention: __cdecl
// Signature: int __cdecl core_bugs_cpp_CBugs_updateBugPathfinding_FUN_00426420(CBugs *this_ptr,SBug *bug_data,float delta_time,CVector3f *dest_vertex)

#include "nocturne.h"

int __cdecl core_bugs_cpp_CBugs_updateBugPathfinding_FUN_00426420(CBugs *this_ptr,SBug *bug_data,float delta_time,CVector3f *dest_vertex)

{
  CVector3f *pCVar2;
  float max_value;
  float fVar3;
  float fVar4;
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
  CVector3f *pCVar1;
  
  if (bug_data->state != 0) {
    return 0;
  }
  pCVar1 = &bug_data->dest_position;
  local_68.x = pCVar1->x - (bug_data->position).x;
  local_68.y = (bug_data->dest_position).y - (bug_data->position).y;
  local_68.z = (bug_data->dest_position).z - (bug_data->position).z;
  local_90 = SQRT(local_68.z * local_68.z + local_68.x * local_68.x + local_68.y * local_68.y);
  if (local_90 < 0.5f) {
    fVar3 = core_bugs_cpp_CBugs_sampleGroundHeight_FUN_00425b70
                      (this_ptr,(bug_data->position).x,(bug_data->position).z);
    (bug_data->position).y = fVar3;
    if (dest_vertex == (CVector3f *)0x0) {
      max_value = 0.5f * 12.0f * (float)0.5;
      fVar3 = 0.5f * -12.0f * (float)0.5;
      fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(fVar3,max_value);
      (bug_data->dest_position).x = fVar4;
      fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(fVar3,max_value);
      (bug_data->dest_position).z = fVar3;
      fVar3 = core_bugs_cpp_CBugs_sampleGroundHeight_FUN_00425b70
                        (this_ptr,(bug_data->dest_position).x,(bug_data->dest_position).z);
      (bug_data->dest_position).y = fVar3;
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
      if (local_90 < 0.5f) {
        return 1;
      }
    }
  }
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_80,&local_68);
  if (local_90 <= 0.0) {
    return 1;
  }
  local_1c = 3.0f * delta_time;
  if (local_90 < local_1c) {
    local_1c = local_90;
  }
  fVar3 = local_1c / local_90;
  local_68.x = local_68.x * fVar3;
  local_68.y = local_68.y * fVar3;
  local_68.z = local_68.z * fVar3;
  pCVar2 = &bug_data->position;
  local_8c = pCVar2->x + local_68.x;
  local_88 = (bug_data->position).y + local_68.y;
  local_84 = (bug_data->position).z + local_68.z;
  fVar3 = core_bugs_cpp_CBugs_sampleGroundHeight_FUN_00425b70(this_ptr,local_8c,local_84);
  if (fVar3 - (bug_data->position).y <= local_90 * (float)0.40000000000000002) {
    if (pCVar2 != (CVector3f *)&local_8c) {
      pCVar2->x = local_8c;
      (bug_data->position).y = local_88;
      (bug_data->position).z = local_84;
    }
    if ((bug_data->position).y < fVar3) {
      (bug_data->position).y = fVar3;
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
  fVar3 = local_80.x - (bug_data->orientation).x;
  local_24 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_80.y - (bug_data->orientation).y);
  local_28 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fVar3);
  fVar3 = delta_time * (float)3.1415926535000001 * (float)4;
  if (local_24 < -fVar3) {
    local_24 = -fVar3;
  }
  if (fVar3 < local_24) {
    local_24 = fVar3;
  }
  if (local_28 < -fVar3) {
    local_28 = -fVar3;
  }
  if (fVar3 < local_28) {
    local_28 = fVar3;
  }
  fVar3 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((bug_data->orientation).y + local_24);
  (bug_data->orientation).z = 0.0;
  (bug_data->orientation).y = fVar3;
  fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((bug_data->orientation).x + local_28);
  (bug_data->orientation).x = fVar2;
  return 0;
}

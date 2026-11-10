// Name: core_stranger.cpp_CStranger_aimLeftPistol_FUN_005c4370
// Address: 005c4370
// MANUAL RECONSTRUCTION
// Address Range: [[005c4370, 005c48ae]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_aimLeftPistol_FUN_005c4370(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_aimLeftPistol_FUN_005c4370(CStranger *this_ptr)

{
  int bone_index;
  double ratio;
  float hit_fraction;
  float distance;
  float correction;
  float pitch;
  float yaw;
  float yaw_min;
  float yaw_max;
  CVector3f muzzle_local;
  CVector3f muzzle_world;
  CVector3f barrel_offset;
  CVector3f barrel_end;
  CVector3f hit_point;
  CVector3f hit_local;
  CVector3f shoulder;
  CVector3f to_target;
  CVector3f angles;
  CVector3f forward;

  if (this_ptr->weapon == (CWeapon *)0x0) {
    g_CurrentFilename = "..\\core\\stranger.cpp";
    g_CurrentLineNumber = 4288;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStranger::aimLeftPistol - no weapon?");
  }
  (*(((this_ptr->weapon->base).vtable._uw)->_uw).getMuzzlePoint)(this_ptr->weapon,&muzzle_local);
  bone_index = g_StrangerIndices[3];
  yaw_min = -1.3089969f;
  yaw_max = 0.5235988f;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (&this_ptr->weapon->base,&muzzle_world,&muzzle_local);
  forward.x = 0.0;
  forward.y = 0.0;
  forward.z = 1000.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (&this_ptr->weapon->base,&barrel_offset,&forward);
  barrel_end.x = muzzle_world.x + barrel_offset.x;
  barrel_end.y = muzzle_world.y + barrel_offset.y;
  barrel_end.z = muzzle_world.z + barrel_offset.z;
  core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00574270(g_CDemonSetPtr,1,0xff,0,0);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&this_ptr->weapon->base);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  hit_fraction = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                           (g_CDemonSetPtr,&muzzle_world,&barrel_end);
  core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
  if ((hit_fraction < 0.0) || (1.0 < hit_fraction)) {
    hit_fraction = 1.0;
  }
  hit_point.x = muzzle_world.x + barrel_offset.x * hit_fraction;
  hit_point.y = muzzle_world.y + barrel_offset.y * hit_fraction;
  hit_point.z = muzzle_world.z + barrel_offset.z * hit_fraction;
  core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0059fa20
            (&(this_ptr->base).base.model,&shoulder,bone_index);
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            ((CDemonActor *)this_ptr,&hit_local,&hit_point);
  to_target.x = hit_local.x - shoulder.x;
  to_target.y = hit_local.y - shoulder.y;
  to_target.z = hit_local.z - shoulder.z;
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&angles,&to_target);
  distance = (float)SQRT(to_target.y * to_target.y + to_target.x * to_target.x +
                         to_target.z * to_target.z);
  if ((double)distance > 0.01) {
    // The muzzle sits off the arm's axis; turn by the angle that offset
    // subtends at the target's distance. Sideways offset corrects yaw...
    correction = -muzzle_local.x;
    ratio = SQRT(distance * distance - correction * correction) / (double)distance;
    if ((ratio < 1.0) && (0.0 <= ratio)) {
      if (0.0 <= correction) {
        angles.y = angles.y + (float)acos(ratio);
      }
      else {
        angles.y = angles.y - (float)acos(ratio);
      }
      angles.y = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(angles.y);
    }
    // ...and vertical offset corrects pitch.
    ratio = SQRT(distance * distance - muzzle_local.y * muzzle_local.y) / (double)distance;
    if ((ratio < 1.0) && (0.0 <= ratio)) {
      if (0.0 <= muzzle_local.y) {
        angles.x = angles.x + (float)acos(ratio);
      }
      else {
        angles.x = angles.x - (float)acos(ratio);
      }
      angles.x = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(angles.x);
    }
  }
  pitch = angles.x;
  if (pitch < -1.047198f) {
    pitch = -1.047198f;
  }
  if (1.22173f < pitch) {
    pitch = 1.22173f;
  }
  yaw = angles.y;
  if (yaw < yaw_min) {
    yaw = yaw_min;
  }
  if (yaw_max < yaw) {
    yaw = yaw_max;
  }
  (this_ptr->left_arm_aim).kickback_factor = 1.0;
  (this_ptr->left_arm_aim).target_yaw = yaw;
  (this_ptr->left_arm_aim).target_pitch = pitch;
  (this_ptr->left_arm_aim).aim_yaw = yaw;
  (this_ptr->left_arm_aim).aim_pitch = pitch;
}

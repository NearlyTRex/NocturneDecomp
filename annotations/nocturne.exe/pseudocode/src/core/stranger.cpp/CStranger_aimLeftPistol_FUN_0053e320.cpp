// Name: core_stranger.cpp_CStranger_aimLeftPistol_FUN_0053e320
// Address: 0053e320
// Address Range: [[0053e320, 0053e85e]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_aimLeftPistol_FUN_0053e320(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_aimLeftPistol_FUN_0053e320(CStranger *this_ptr)

{
  float fVar1;
  int bone_index;
  double dVar2;
  float fStack_bc;
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  CVector3f local_9c;
  CVector3f CStack_90;
  CVector3f CStack_84;
  CVector3f CStack_78;
  CVector3f CStack_6c;
  CVector3f CStack_60;
  CVector3f CStack_54;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  CVector3f CStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (this_ptr->weapon == (CWeapon *)0x0) {
    PTR_01cc4800 = "..\\core\\stranger.cpp";
    INT_01cc4804 = 0x10b4;
    core_main_c_FUN_004c8440("CStranger::aimLeftPistol - no weapon?");
  }
  (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).canWalk)
            ((CCharacter *)this_ptr->weapon);
  bone_index = _DAT_02dc9f5c;
  fStack_24 = -1.3089969;
  fStack_2c = 0.5235988;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            (&this_ptr->weapon->base,&CStack_a8,&local_9c);
  CStack_3c.x = 0.0;
  CStack_3c.y = 0.0;
  CStack_3c.z = 1000.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
            (&this_ptr->weapon->base,&CStack_84,&CStack_3c);
  CStack_90.x = CStack_a8.x + CStack_84.x;
  CStack_90.y = CStack_a8.y + CStack_84.y;
  CStack_90.z = CStack_a8.z + CStack_84.z;
  core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00511840(0x01E57284,1,0xff,0,0);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,&this_ptr->weapon->base);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,(CDemonActor *)this_ptr);
  fStack_bc = core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00(0x01E57284,&CStack_a8,&CStack_90);
  fStack_14 = fStack_bc;
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  if ((fStack_bc < 0.0) || (1.0 < fStack_bc)) {
    fStack_bc = 1.0;
  }
  fStack_48 = CStack_84.x * fStack_bc;
  fStack_44 = CStack_84.y * fStack_bc;
  fStack_40 = CStack_84.z * fStack_bc;
  CStack_b4.x = CStack_a8.x + fStack_48;
  CStack_b4.y = CStack_a8.y + fStack_44;
  CStack_b4.z = CStack_a8.z + fStack_40;
  if (&CStack_90 != &CStack_b4) {
    CStack_90.x = CStack_b4.x;
    CStack_90.y = CStack_b4.y;
    CStack_90.z = CStack_b4.z;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
            (&(this_ptr->base).base.model,&CStack_6c,bone_index);
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
            ((CDemonActor *)this_ptr,&CStack_60,&CStack_90);
  CStack_78.x = CStack_60.x - CStack_6c.x;
  CStack_78.y = CStack_60.y - CStack_6c.y;
  CStack_78.z = CStack_60.z - CStack_6c.z;
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&CStack_54,&CStack_78);
  fVar1 = SQRT(CStack_78.z * CStack_78.z + CStack_78.x * CStack_78.x + CStack_78.y * CStack_78.y);
  if ((float)0.01 < fVar1) {
    fStack_20 = -local_9c.x;
    if ((((float)0.01 <= fVar1) &&
        (dVar2 = (double)(SQRT(fVar1 * fVar1 - fStack_20 * fStack_20) / fVar1), dVar2 < 1.0)) &&
       (0.0 <= dVar2)) {
      dVar2 = acos(dVar2);
      fStack_2c = (float)dVar2;
      if (0.0 <= fStack_24) {
        CStack_54.x = CStack_54.x + fStack_2c;
      }
      else {
        CStack_54.x = CStack_54.x - fStack_2c;
      }
      CStack_54.x = core_actor_cpp_normalizeAngleToPi_FUN_0040df00(CStack_54.x);
      fStack_18 = CStack_54.x;
    }
    if ((((float)0.01 <= fStack_bc) &&
        (dVar2 = (double)(SQRT(fStack_bc * fStack_bc - local_9c.x * local_9c.x) / fStack_bc),
        dVar2 < 1.0)) && (0.0 <= dVar2)) {
      dVar2 = acos(dVar2);
      CStack_3c.y = (float)dVar2;
      if (0.0 <= CStack_a8.z) {
        CStack_60.y = CStack_60.y + CStack_3c.y;
      }
      else {
        CStack_60.y = CStack_60.y - CStack_3c.y;
      }
      core_actor_cpp_normalizeAngleToPi_FUN_0040df00(CStack_60.y);
    }
  }
  fStack_1c = CStack_54.x;
  fStack_20 = CStack_60.z;
  if (CStack_60.z < -1.047198f) {
    fStack_20 = -1.047198f;
  }
  if (1.22173f < fStack_20) {
    fStack_20 = 1.22173f;
  }
  if (CStack_54.x < fStack_28) {
    fStack_1c = fStack_28;
  }
  if (fStack_30 < fStack_1c) {
    fStack_1c = fStack_30;
  }
  (this_ptr->left_arm_aim).kickback_factor = 1.0;
  (this_ptr->left_arm_aim).target_yaw = fStack_1c;
  (this_ptr->left_arm_aim).target_pitch = fStack_20;
  (this_ptr->left_arm_aim).aim_yaw = fStack_1c;
  (this_ptr->left_arm_aim).aim_pitch = fStack_20;
  return;
}

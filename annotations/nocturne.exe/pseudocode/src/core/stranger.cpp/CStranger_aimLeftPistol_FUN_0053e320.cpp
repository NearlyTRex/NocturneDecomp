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
  uint uVar3;
  float fStack_bc;
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  CVector3f local_9c;
  CVector3f CStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  CVector3f CStack_6c;
  CVector3f CStack_60;
  float afStack_54 [3];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  uint uStack_3c;
  float fStack_38;
  uint uStack_34;
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
  (*((this_ptr->weapon->base).vtable._ub)->initializeInEditor)(&this_ptr->weapon->base);
  bone_index = _DAT_02dc9f5c;
  fStack_24 = -1.3089969;
  fStack_2c = 0.5235988;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            (&this_ptr->weapon->base,&CStack_a8,&local_9c);
  uStack_3c = 0;
  fStack_38 = 0.0;
  uStack_34 = 0x447a0000;
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(this_ptr->weapon,&fStack_84,&uStack_3c);
  CStack_90.x = CStack_a8.x + fStack_84;
  CStack_90.y = CStack_a8.y + fStack_80;
  CStack_90.z = CStack_a8.z + fStack_7c;
  core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00511840(0x01E57284,1,0xff,0,0);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,&this_ptr->weapon->base);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,(CDemonActor *)this_ptr);
  fStack_bc = (float)core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                               (0x01E57284,&CStack_a8,&CStack_90);
  fStack_14 = fStack_bc;
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  if ((fStack_bc < 0.0) || (1.0 < fStack_bc)) {
    fStack_bc = 1.0;
  }
  fStack_48 = fStack_84 * fStack_bc;
  fStack_44 = fStack_80 * fStack_bc;
  fStack_40 = fStack_7c * fStack_bc;
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
  fStack_78 = CStack_60.x - CStack_6c.x;
  fStack_74 = CStack_60.y - CStack_6c.y;
  fStack_70 = CStack_60.z - CStack_6c.z;
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(afStack_54,&fStack_78);
  fVar1 = SQRT(fStack_70 * fStack_70 + fStack_78 * fStack_78 + fStack_74 * fStack_74);
  if ((float)0.01 < fVar1) {
    fStack_20 = -local_9c.x;
    if ((((float)0.01 <= fVar1) &&
        (dVar2 = (double)(SQRT(fVar1 * fVar1 - fStack_20 * fStack_20) / fVar1), dVar2 < 1.0)) &&
       (0.0 <= dVar2)) {
      uVar3 = 0x53e744;
      dVar2 = acos(dVar2);
      fStack_2c = (float)dVar2;
      if (0.0 <= fStack_24) {
        afStack_54[0] = afStack_54[0] + fStack_2c;
      }
      else {
        afStack_54[0] = afStack_54[0] - fStack_2c;
      }
      afStack_54[0] = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(afStack_54[0],uVar3);
      fStack_18 = afStack_54[0];
    }
    if ((((float)0.01 <= fStack_bc) &&
        (dVar2 = (double)(SQRT(fStack_bc * fStack_bc - local_9c.x * local_9c.x) / fStack_bc),
        dVar2 < 1.0)) && (0.0 <= dVar2)) {
      uVar3 = 0x53e7ea;
      dVar2 = acos(dVar2);
      fStack_38 = (float)dVar2;
      if (0.0 <= CStack_a8.z) {
        CStack_60.y = CStack_60.y + fStack_38;
      }
      else {
        CStack_60.y = CStack_60.y - fStack_38;
      }
      core_actor_cpp_normalizeAngleToPi_FUN_0040df00(CStack_60.y,uVar3);
    }
  }
  fStack_1c = afStack_54[0];
  fStack_20 = CStack_60.z;
  if (CStack_60.z < -1.047198f) {
    fStack_20 = -1.047198f;
  }
  if (1.22173f < fStack_20) {
    fStack_20 = 1.22173f;
  }
  if (afStack_54[0] < fStack_28) {
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

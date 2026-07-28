// Name: core_stranger.cpp_CStranger_updateArmRecoilBlend_FUN_0053ecc0
// Address: 0053ecc0
// Address Range: [[0053ecc0, 0053f20b]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_updateArmRecoilBlend_FUN_0053ecc0(CStranger *this_ptr,float delta_time,int is_weapon_active)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_updateArmRecoilBlend_FUN_0053ecc0(CStranger *this_ptr,float delta_time,int is_weapon_active)

{
  CStranger *this_ptr_00;
  float fVar1;
  int iVar2;
  ECollisionType EVar3;
  float *pfVar4;
  CVector3f *pCVar5;
  int iVar6;
  int iVar7;
  float local_f8;
  float local_f4;
  float fStack_f0;
  SCollisionInfo SStack_e4;
  CVector3f local_bc;
  byte local_b0 [12];
  uint local_a4;
  uint local_a0;
  uint local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  CVector3f local_80;
  float local_74;
  float local_70;
  float local_6c;
  CVector3f local_68;
  CVector3f local_5c;
  CVector3f local_50;
  CVector3f local_44;
  float local_38;
  float local_34;
  float local_30;
  float local_20;
  float local_1c;
  float local_18;
  
  if ((this_ptr->weapon == (CWeapon *)0x0) || (this_ptr->weapon->weapon_type != 0)) {
    is_weapon_active = 0;
  }
  iVar6 = 0;
  local_f8 = 0.0;
  if (is_weapon_active != 0) {
    iVar7 = 0;
LAB_0053ecf1:
    do {
      if ((int)0x01E57284->actors[0x6d6] <= iVar6) goto LAB_0053ee02;
      this_ptr_00 = *(CStranger **)((int)0x01E57284->actors + iVar7 + 0x1b5c);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                ((CDemonActor *)this_ptr,&local_68,&(this_ptr_00->base).base.base.location.position)
      ;
      if (((ABS(local_68.x) <= (float)1.5) &&
          (ABS(local_68.y) <= (float)4)) &&
         ((0.0 <= local_68.z &&
          ((((int)local_68.z < 0x40c00001 && (this_ptr_00 != this_ptr)) &&
           (iVar2 = (*(((this_ptr_00->base).base.base.vtable._uc)->_uc).releaseFromGrab)
                              ((CCharacter *)this_ptr_00), iVar2 == 0)))))) {
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(&SStack_e4);
        EVar3 = (*((this_ptr_00->base).base.base.vtable._ub)->getCollisionType)
                          ((CDemonActor *)this_ptr_00,&SStack_e4);
        if ((EVar3 == COLLISION_TYPE_CYLINDER) &&
           (fStack_f0 = 1.0 - ((local_68.z - SStack_e4.cylinder_radius) + (float)-1.5) *
                              (float)0.40000000000000002, local_f8 <= fStack_f0)) {
          if (fStack_f0 < 0.0) {
            fStack_f0 = 0.0;
          }
          local_f8 = fStack_f0;
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + 4;
          goto LAB_0053ecf1;
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 4;
    } while( true );
  }
LAB_0053f147:
  if (1.0 < local_f8) {
    local_f8 = 1.0;
  }
  local_f4 = local_f8 - this_ptr->arm_recoil_blend;
  if (0.0 <= local_f4) {
    if ((0.0 < local_f4) && (delta_time / 0.05f < local_f4)) {
      local_f4 = delta_time / 0.05f;
    }
  }
  else {
    fVar1 = -delta_time * (1.0 / 0.5f);
    if (local_f4 < fVar1) {
      local_f4 = fVar1;
    }
  }
  this_ptr->arm_recoil_blend = this_ptr->arm_recoil_blend + local_f4;
  return;
LAB_0053ee02:
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,(CDemonActor *)this_ptr);
  local_a4 = 0;
  local_a0 = 0;
  local_20 = 3.5;
  local_1c = 1.5;
  local_9c = 0x40600000;
  pfVar4 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                              (this_ptr,local_b0,&local_a4);
  if (&local_8c != pfVar4) {
    local_8c = *pfVar4;
    local_88 = pfVar4[1];
    local_84 = pfVar4[2];
  }
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                     (&(this_ptr->base).base.model,&local_bc,_DAT_02dc9f54);
  pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                     ((CDemonActor *)this_ptr,&local_80,pCVar5);
  if (&local_5c != pCVar5) {
    local_5c.x = pCVar5->x;
    local_5c.y = pCVar5->y;
    local_5c.z = pCVar5->z;
  }
  local_74 = local_5c.x + local_8c;
  local_70 = local_5c.y + local_88;
  local_6c = local_5c.z + local_84;
  if (&local_98 != &local_74) {
    local_98 = local_74;
    local_94 = local_70;
    local_90 = local_6c;
  }
  local_18 = (float)core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                              (0x01E57284,&local_5c,&local_98);
  if (((0.0 <= local_18) && (local_18 < 1.0)) &&
     (fVar1 = 1.0 - (local_18 * local_20 - local_1c) / (local_20 - local_1c), local_f8 < fVar1)) {
    local_f8 = fVar1;
  }
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                     (&(this_ptr->base).base.model,&local_50,_DAT_02dc9f58);
  pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                     ((CDemonActor *)this_ptr,&local_44,pCVar5);
  if (&local_5c != pCVar5) {
    local_5c.x = pCVar5->x;
    local_5c.y = pCVar5->y;
    local_5c.z = pCVar5->z;
  }
  local_38 = local_5c.x + local_8c;
  local_34 = local_5c.y + local_88;
  local_30 = local_5c.z + local_84;
  if (&local_98 != &local_38) {
    local_98 = local_38;
    local_94 = local_34;
    local_90 = local_30;
  }
  local_18 = (float)core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                              (0x01E57284,&local_5c,&local_98);
  if (((0.0 <= local_18) && (local_18 < 1.0)) &&
     (fVar1 = 1.0 - (local_18 * local_20 - local_1c) / (local_20 - local_1c), local_f8 < fVar1)) {
    local_f8 = fVar1;
  }
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  goto LAB_0053f147;
}

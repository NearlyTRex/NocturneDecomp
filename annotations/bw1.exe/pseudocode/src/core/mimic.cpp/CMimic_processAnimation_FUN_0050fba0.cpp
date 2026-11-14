// Name: core_mimic.cpp_CMimic_processAnimation_FUN_0050fba0
// Address: 0050fba0
// Address Range: [[0050fba0, 00510525]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_processAnimation_FUN_0050fba0(CMimic *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mimic_cpp_CMimic_processAnimation_FUN_0050fba0(CMimic *this_ptr,float delta_time)

{
  float fVar1;
  uint uVar2;
  SMotion *pSVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  CMatrix3x4f *pCVar7;
  float *pfVar8;
  float *pfVar9;
  bool bVar10;
  byte bVar11;
  float afStackY_11d8 [961];
  CDemonSet *this_ptr_00;
  CVector3f *start_pos;
  CMimic *this_ptr_01;
  CDeformableModelInstance *pCVar12;
  CVector3f *pCVar13;
  CBoundingBox3D *out_box;
  float fVar14;
  EBloodType blood_type;
  SDamageInfo *damage_info;
  SDamageInfo local_2bc;
  float local_280 [12];
  CMatrix3x4f local_250;
  float local_220 [6];
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float afStack_1ec [2];
  CVector3f local_1e4;
  float local_1d8;
  float local_1d4 [2];
  CVector3f local_1cc;
  float local_1c0;
  float afStack_1bc [2];
  CVector3f local_1b4;
  uint local_1a8;
  float local_1a4 [2];
  CVector3f local_19c;
  float local_190;
  float local_18c [5];
  CVector3f local_178;
  float local_16c;
  float afStack_168 [5];
  float local_154;
  uint local_150;
  float local_14c;
  uint local_148;
  float local_140;
  float local_13c;
  float local_130 [3];
  CVector3f local_124;
  CVector3f local_118;
  float local_10c;
  float afStack_108 [5];
  CVector3f local_f4;
  float local_e8;
  float afStack_e4 [2];
  CVector3f local_dc;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float afStack_c0 [4];
  float local_b0;
  CVector3f local_ac;
  float local_a0;
  float afStack_9c [2];
  CVector3f local_94;
  uint local_88;
  float afStack_84 [2];
  CVector3f local_7c;
  float local_70;
  float local_6c [5];
  CVector3f local_58;
  CVector3f local_4c;
  double local_40;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  CDeformableModelInstance *local_20;
  uint local_1c;
  CDeformableModelInstance *local_18;
  float local_14;
  
  bVar11 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
            ((CDeformableModelInstance *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x158),0,
             &local_ac);
  pfVar8 = &local_16c;
  uVar2 = *(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  local_16c = local_ac.x;
  afStack_168[(uint)bVar11 * -2] = *(float *)((int)&local_ac + (uint)bVar11 * -8 + 4);
  afStack_168[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       *(float *)((int)&local_ac + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
  core_actor_cpp_FUN_00408b40(uVar2,pfVar8);
  iVar6 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  local_1e4.x = local_1f0;
  *(float *)((int)&local_1e4 + (uint)bVar11 * -8 + 4) = afStack_1ec[(uint)bVar11 * -2];
  *(float *)((int)&local_1e4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
       afStack_1ec[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  local_1e4.y = *(float *)(iVar6 + 0x24);
  core_actor_cpp_FUN_00408bb0(this_ptr,&local_1e4);
  local_1c0 = local_10c;
  afStack_1bc[(uint)bVar11 * -2] = afStack_108[(uint)bVar11 * -2];
  afStack_1bc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       afStack_108[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  local_d0 = local_1c0;
  local_cc = 0.0;
  local_c8 = afStack_1bc[1];
  local_20 = &(this_ptr->base).base.model;
  local_24 = -1.0;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&local_20->base);
  uVar5 = pSVar3->state_index;
  if (uVar5 < 2) {
    if (uVar5 == 0) {
      iVar6 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      iVar6 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x10c))(iVar6);
      if (((iVar6 == 0) && (g_CGamePtr->freeze_enemies_enabled == 0)) &&
         (ABS((this_ptr->base).base.base.location.position.y -
              *(float *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x24)) <= (float)_DAT_005e89e0))
      {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&local_d0);
        local_1a8 = local_88;
        local_1a4[(uint)bVar11 * -2] = afStack_84[(uint)bVar11 * -2];
        local_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             afStack_84[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(local_1a4[0]);
        if (SQRT(local_c8 * local_c8 + local_d0 * local_d0 + local_cc * local_cc) <
            (1.0 - ABS(local_14) * (float)_DAT_005e89e8) * (float)_DAT_005e89f0 +
            (float)_DAT_005e89f8) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_00568e30
                    (local_20,_DAT_01d22424,&local_250);
          afStack_108[4] = 0.3;
          pCVar7 = &local_250;
          pfVar8 = local_280;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            *pfVar8 = pCVar7->m[0].w;
            pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar11 * -2 + 1) * 4);
            pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
          }
          afStack_108[3] = 0.7;
          afStack_108[2] = 0.0;
          core_xform_cpp_FUN_005b5080(afStack_108 + 2,local_280);
          pfVar8 = afStack_168 + 0xe;
          local_130[0] = local_18c[2];
          afStack_168[(uint)bVar11 * -2 + 0xf] = local_18c[(uint)bVar11 * -2 + 3];
          afStack_168[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
               local_18c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
          core_actor_cpp_FUN_00408b40(this_ptr,pfVar8);
          pCVar13 = &local_1e4;
          start_pos = &local_118;
          local_118.x = local_a0;
          *(float *)((int)&local_118 + (uint)bVar11 * -8 + 4) = afStack_9c[(uint)bVar11 * -2];
          this_ptr_00 = g_CDemonSetPtr;
          *(float *)((int)&local_118 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
               afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          iVar6 = core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_005572e0
                            (this_ptr_00,start_pos,pCVar13);
          if (iVar6 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&local_20->base,2,1);
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"gh-alrt[1,4].wav");
          }
        }
      }
      goto LAB_0050fccf;
    }
LAB_0050fc98:
    iVar6 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    out_box = (CBoundingBox3D *)0x50fcb1;
    iVar4 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x10c))();
    if ((iVar4 != 0) || (g_CGamePtr->freeze_enemies_enabled != 0)) {
      iVar4 = 0;
      goto LAB_0050fcc0;
    }
    core_actor_cpp_FUN_00408bb0(this_ptr->mirror_plane_actor,&(this_ptr->base).base.base.location);
    local_148 = afStack_168[2];
    afStack_168[(uint)bVar11 * -2 + 9] = afStack_168[(uint)bVar11 * -2 + 3];
    afStack_168[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
         afStack_168[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr,out_box);
    pfVar8 = local_220;
    pfVar9 = &local_208;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar9 = *pfVar8;
      pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
      pfVar9 = pfVar9 + (uint)bVar11 * -2 + 1;
    }
    afStack_c0[2] = local_1fc - local_208;
    afStack_c0[3] = local_1f8 - local_204;
    local_b0 = local_1f4 - local_200;
    local_154 = local_1fc - local_208;
    afStack_168[(uint)bVar11 * -2 + 6] = afStack_c0[(uint)bVar11 * -2 + 3];
    afStack_168[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
         afStack_c0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    local_150 = 0;
    if (-local_140 <= SQRT(local_14c * local_14c + local_154 * local_154)) {
      pCVar12 = &(this_ptr->base).base.model;
      local_14 = (float)core_motion_cpp_FUN_00524a40(pCVar12,1);
      (this_ptr->base).base.walk_step_speed = local_14 * _DAT_005e89d0;
      local_14 = (float)core_motion_cpp_FUN_00524a40(pCVar12,2);
      fVar14 = (this_ptr->base).speed;
      fVar1 = (this_ptr->base).speed;
      (this_ptr->base).base.walk_step_speed =
           local_14 * _DAT_005e89d4 + (this_ptr->base).base.walk_step_speed;
      (this_ptr->base).base.walk_step_speed =
           fVar14 * delta_time * (this_ptr->base).base.walk_step_speed;
      core_charactr_cpp_FUN_00435320(this_ptr,delta_time * fVar1);
      local_58.z = 0x40200000;
      iVar6 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      local_58.x = 0.0;
      local_58.y = 0.0;
      iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                        ((CCharacter *)this_ptr,(CVector3f *)(iVar6 + 0x20),
                         (CPathMap *)(iVar6 + 0xc208),&local_58,1.0,0.17453292);
      if (iVar6 < 0) {
        iVar6 = 1;
        iVar4 = 0;
      }
      else {
        if (0 < iVar6) {
          core_mimic_cpp_CMimic_beginMorph_FUN_00510b00(this_ptr);
          goto LAB_0050fccf;
        }
        if (ABS((this_ptr->base).base.turn_angle_accumulator) /
            (delta_time * (this_ptr->base).speed) <= (float)_DAT_005e89d8) {
          iVar6 = 1;
          iVar4 = 2;
        }
        else {
          iVar6 = 1;
          iVar4 = 1;
        }
      }
      goto LAB_0050fcc7;
    }
    core_mimic_cpp_CMimic_beginMorph_FUN_00510b00(this_ptr);
  }
  else {
    if (uVar5 < 3) goto LAB_0050fc98;
    if (0xb < uVar5) {
      if (0xc < uVar5) {
        if (uVar5 != 0x13) goto LAB_0051029c;
        if (*(int *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x26fc) == 0) {
          local_28 = core_motion_cpp_FUN_00525020(&local_20->base);
          pCVar12 = local_20;
          local_40 = (double)local_28;
          local_14 = local_28;
          if (local_28 <= (float)_DAT_005e89c8) {
            local_24 = 0x40200000;
            if (1.0 <= local_40) {
              local_34 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
              local_14 = local_34;
              core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
                        (pCVar12,_DAT_01d22444,&local_7c);
              local_6c[2] = local_7c.x;
              local_6c[(uint)bVar11 * -2 + 3] = *(float *)((int)&local_7c + (uint)bVar11 * -8 + 4);
              local_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
                   *(float *)((int)&local_7c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
              local_6c[2] = -local_6c[2];
              core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&local_2bc);
              local_2bc.damage_amount = local_34;
              damage_info = &local_2bc;
              fVar14 = 0.2;
              local_2bc.attacker = (CDemonActor *)this_ptr;
              local_2bc.wielder = (CDemonActor *)this_ptr;
              core_actor_cpp_FUN_00408b40(this_ptr,local_6c + 2);
              pCVar13 = &local_94;
              local_94.x = local_13c;
              *(float *)((int)&local_94 + (uint)bVar11 * -8 + 4) =
                   afStack_168[(uint)bVar11 * -2 + 0xc];
              this_ptr_01 = this_ptr;
              *(float *)((int)&local_94 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
                   afStack_168[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
              iVar6 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770
                                (&this_ptr_01->base,pCVar13,fVar14,damage_info);
              if (iVar6 != 0) {
                (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"gh-hits[1,4].wav");
              }
            }
          }
          goto LAB_0050fccf;
        }
        iVar6 = 1;
        iVar4 = 0;
        pCVar12 = local_20;
        goto LAB_0050fcc7;
      }
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                  (local_20,0,&local_dc);
        pfVar8 = &local_e8;
        local_e8 = local_dc.x;
        afStack_e4[(uint)bVar11 * -2] = *(float *)((int)&local_dc + (uint)bVar11 * -8 + 4);
        afStack_e4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             *(float *)((int)&local_dc + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        core_actor_cpp_FUN_00408b40(this_ptr,pfVar8);
        blood_type = BLOOD_TYPE_RED;
        local_f4.x = local_c4;
        *(float *)((int)&local_f4 + (uint)bVar11 * -8 + 4) = afStack_c0[(uint)bVar11 * -2];
        *(float *)((int)&local_f4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
             afStack_c0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(g_CGorePtr,&local_f4,blood_type);
        (this_ptr->base).pool_me = 1;
      }
      goto LAB_0050fccf;
    }
LAB_0051029c:
    iVar6 = 1;
    iVar4 = 2;
LAB_0050fcc0:
    pCVar12 = &(this_ptr->base).base.model;
LAB_0050fcc7:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar12->base,iVar4,iVar6);
  }
LAB_0050fccf:
  if (0.0 <= local_24) {
    fVar14 = (this_ptr->base).speed;
    (this_ptr->base).base.walk_step_speed = (this_ptr->base).speed * delta_time;
    core_charactr_cpp_FUN_00435320(this_ptr,delta_time * fVar14);
    local_4c.z = local_24;
    iVar6 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    local_4c.x = 0.0;
    local_4c.y = 0.0;
    iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                      ((CCharacter *)this_ptr,(CVector3f *)(iVar6 + 0x20),
                       (CPathMap *)(iVar6 + 0xc208),&local_4c,3.0,0.5235988);
    if (iVar6 != 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,2,1);
    }
  }
  local_18 = &(this_ptr->base).base.model;
  local_2c = delta_time * (this_ptr->base).speed;
  while (pCVar12 = local_18, 0.0 < local_2c) {
    uVar5 = core_motion_cpp_CMotionController_advance_FUN_00524270(&local_18->base,&local_2c);
    if (uVar5 != 0) {
      if (uVar5 < 2) {
        if ((this_ptr->base).base.is_on_ground != 0) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                    (local_18,_DAT_01d22440,&local_1cc);
          local_124.x = local_1cc.x;
          *(uint *)((int)&local_124 + (uint)bVar11 * -8 + 4) =
               *(uint *)((int)&local_1cc + (uint)bVar11 * -8 + 4);
          *(uint *)((int)&local_124 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
               *(uint *)((int)&local_1cc + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          local_124.x = -local_124.x;
          (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                    ((CDemonActor *)this_ptr,&local_124,1.0);
        }
      }
      else if ((uVar5 == 7) && ((this_ptr->base).base.is_on_ground != 0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                  (pCVar12,_DAT_01d22444,&local_19c);
        local_1b4.x = local_19c.x;
        *(uint *)((int)&local_1b4 + (uint)bVar11 * -8 + 4) =
             *(uint *)((int)&local_19c + (uint)bVar11 * -8 + 4);
        *(uint *)((int)&local_1b4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
             *(uint *)((int)&local_19c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        local_1b4.x = -local_1b4.x;
        (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                  ((CDemonActor *)this_ptr,&local_1b4,1.0);
      }
    }
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&local_18->base);
  local_1c = pSVar3->state_index;
  if (((local_1c == 0xc) || (local_1c == 0)) &&
     ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) goto LAB_005104af;
  core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
  local_190 = (this_ptr->base).base.velocity.x * delta_time;
  local_18c[0] = (this_ptr->base).base.velocity.y * delta_time;
  local_18c[1] = (this_ptr->base).base.velocity.z * delta_time;
  local_70 = local_190;
  local_6c[(uint)bVar11 * -2] = local_18c[(uint)bVar11 * -2];
  local_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       local_18c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  local_1d8 = local_70 + (this_ptr->base).base.position_delta.x;
  local_1d4[0] = local_6c[0] + (this_ptr->base).base.position_delta.y;
  local_1d4[1] = local_6c[1] + (this_ptr->base).base.position_delta.z;
  local_178.x = local_1d8;
  *(float *)((int)&local_178 + (uint)bVar11 * -8 + 4) = local_1d4[(uint)bVar11 * -2];
  *(float *)((int)&local_178 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4 + 8) =
       local_1d4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  if (local_1c < 3) {
    if (local_1c == 0) {
      bVar10 = true;
LAB_00510467:
      if (!bVar10) {
LAB_00510469:
        local_178.x = local_178.x + (this_ptr->base).base.model.accumulated_root_motion.x;
        local_178.y = local_178.y + (this_ptr->base).base.model.accumulated_root_motion.y;
        local_178.z = local_178.z + (this_ptr->base).base.model.accumulated_root_motion.z;
      }
    }
  }
  else if (3 < local_1c) {
    if (local_1c < 0x11) {
      bVar10 = local_1c == 0x10;
      goto LAB_00510467;
    }
    if (0x11 < local_1c) {
      if (local_1c < 0x14) goto LAB_00510469;
      if (0x14 < local_1c) {
        bVar10 = local_1c == 0x15;
        goto LAB_00510467;
      }
    }
  }
  core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&local_178);
LAB_005104af:
  pCVar12 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(pCVar12);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(pCVar12);
  core_cloth_cpp_CCloth_process_FUN_00440610
            (&this_ptr->cloth,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec,delta_time,
             (this_ptr->base).base.closest_distance_threshold,pCVar12);
  return;
}

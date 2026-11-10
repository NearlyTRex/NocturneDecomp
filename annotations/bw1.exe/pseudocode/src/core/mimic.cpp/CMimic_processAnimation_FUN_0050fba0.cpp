// Name: core_mimic.cpp_CMimic_processAnimation_FUN_0050fba0
// Address: 0050fba0
// Address Range: [[0050fba0, 00510525]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_processAnimation_FUN_0050fba0(CMimic *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mimic_cpp_CMimic_processAnimation_FUN_0050fba0(CMimic *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  uint uVar2;
  SMotion *pSVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  float *pfVar8;
  uint *puVar9;
  float *pfVar10;
  bool bVar11;
  byte bVar12;
  float afStackY_11d8 [961];
  CDemonSet *this_ptr_01;
  CVector3f *start_pos;
  CMimic *this_ptr_02;
  CMotionController *pCVar13;
  CVector3f *pCVar14;
  CBoundingBox3D *out_box;
  float fVar15;
  EBloodType blood_type;
  SDamageInfo *damage_info;
  SDamageInfo local_2bc [4];
  float local_2b8;
  CMimic *local_288;
  CMimic *local_284;
  uint local_280 [12];
  uint local_250 [12];
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
  float local_1d4 [5];
  float local_1c0;
  float local_1b8;
  CVector3f local_1b4;
  uint local_1a8;
  float local_1a4 [5];
  float local_190;
  float local_18c;
  float local_188;
  uint local_184;
  CVector3f local_178;
  uint local_16c;
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
  uint local_e8;
  uint auStack_e4 [5];
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float afStack_c0 [4];
  float local_b0;
  uint local_ac;
  float local_a0;
  CVector3f local_94;
  uint local_88;
  float afStack_84 [2];
  uint local_7c;
  float local_70;
  float local_6c [2];
  uint local_64;
  float afStack_60 [2];
  CVector3f local_58;
  CVector3f local_4c;
  double local_40;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  CMotionController *local_20;
  uint local_1c;
  CMotionController *local_18;
  float local_14;
  
  bVar12 = 0;
  core_skeleton_cpp_FUN_00569040(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x158,0);
  puVar7 = &local_16c;
  uVar2 = *(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  local_16c = local_ac;
  afStack_168[(uint)bVar12 * -2] = afStack_c0[(uint)bVar12 * -2 + 6];
  afStack_168[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
       afStack_c0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
  core_actor_cpp_FUN_00408b40(uVar2,puVar7);
  iVar6 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  local_1e4.x = local_1f0;
  *(float *)((int)&local_1e4 + (uint)bVar12 * -8 + 4) = afStack_1ec[(uint)bVar12 * -2];
  *(float *)((int)&local_1e4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
       afStack_1ec[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
  local_1e4.y = *(float *)(iVar6 + 0x24);
  core_actor_cpp_FUN_00408bb0(this_ptr,&local_1e4);
  local_1c0 = local_10c;
  local_1d4[(uint)bVar12 * -2 + 6] = afStack_108[(uint)bVar12 * -2];
  local_1d4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
       afStack_108[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
  local_d0 = local_1c0;
  local_cc = 0.0;
  local_c8 = local_1b8;
  local_20 = &(this_ptr->base).base.model.base;
  local_24 = -1.0;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(local_20);
  uVar5 = *(uint *)(pSVar3 + 0x24);
  if (uVar5 < 2) {
    if (uVar5 == 0) {
      iVar6 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      iVar6 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x10c))(iVar6);
      if (((iVar6 == 0) && (*(int *)&g_CGamePtr->field_0x1f0 == 0)) &&
         (ABS((this_ptr->base).base.base.location.position.y -
              *(float *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x24)) <= (float)_DAT_005e89e0))
      {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(auStack_e4 + 5);
        local_1a8 = local_88;
        local_1a4[(uint)bVar12 * -2] = afStack_84[(uint)bVar12 * -2];
        local_1a4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
             afStack_84[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
        local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(local_1a4[0]);
        if (SQRT(local_c8 * local_c8 + local_d0 * local_d0 + local_cc * local_cc) <
            (1.0 - ABS(local_14) * (float)_DAT_005e89e8) * (float)_DAT_005e89f0 +
            (float)_DAT_005e89f8) {
          core_skeleton_cpp_FUN_00568e30(local_20,_DAT_01d22424);
          afStack_108[4] = 0.3;
          puVar7 = local_250;
          puVar9 = local_280;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + (uint)bVar12 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
          }
          afStack_108[3] = 0.7;
          afStack_108[2] = 0.0;
          core_xform_cpp_FUN_005b5080(afStack_108 + 2,local_280);
          pfVar8 = afStack_168 + 0xe;
          local_130[0] = (float)local_184;
          afStack_168[(uint)bVar12 * -2 + 0xf] = local_1a4[(uint)bVar12 * -2 + 9];
          afStack_168[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10] =
               local_1a4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
          core_actor_cpp_FUN_00408b40(this_ptr,pfVar8);
          pCVar14 = &local_1e4;
          start_pos = &local_118;
          local_118.x = local_a0;
          *(float *)((int)&local_118 + (uint)bVar12 * -8 + 4) = afStack_c0[(uint)bVar12 * -2 + 9];
          this_ptr_01 = g_CDemonSetPtr;
          *(float *)((int)&local_118 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
               afStack_c0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
          iVar6 = core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_005572e0
                            (this_ptr_01,start_pos,pCVar14);
          if (iVar6 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(local_20,2,1);
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
    if ((iVar4 != 0) || (*(int *)&g_CGamePtr->field_0x1f0 != 0)) {
      iVar4 = 0;
      goto LAB_0050fcc0;
    }
    core_actor_cpp_FUN_00408bb0(this_ptr->mirror_plane_actor,&(this_ptr->base).base.base.location);
    local_148 = afStack_168[2];
    afStack_168[(uint)bVar12 * -2 + 9] = afStack_168[(uint)bVar12 * -2 + 3];
    afStack_168[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10] =
         afStack_168[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
    (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr,out_box);
    pfVar8 = local_220;
    pfVar10 = &local_208;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar10 = *pfVar8;
      pfVar8 = pfVar8 + (uint)bVar12 * -2 + 1;
      pfVar10 = pfVar10 + (uint)bVar12 * -2 + 1;
    }
    afStack_c0[2] = local_1fc - local_208;
    afStack_c0[3] = local_1f8 - local_204;
    local_b0 = local_1f4 - local_200;
    local_154 = local_1fc - local_208;
    afStack_168[(uint)bVar12 * -2 + 6] = afStack_c0[(uint)bVar12 * -2 + 3];
    afStack_168[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
         afStack_c0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
    local_150 = 0;
    if (-local_140 <= SQRT(local_14c * local_14c + local_154 * local_154)) {
      pCVar13 = &(this_ptr->base).base.model.base;
      local_14 = (float)core_motion_cpp_FUN_00524a40(pCVar13,1);
      *(float *)&(this_ptr->base).base.field_0x2524 = local_14 * _DAT_005e89d0;
      local_14 = (float)core_motion_cpp_FUN_00524a40(pCVar13,2);
      fVar15 = (this_ptr->base).speed;
      fVar1 = (this_ptr->base).speed;
      *(float *)&(this_ptr->base).base.field_0x2524 =
           local_14 * _DAT_005e89d4 + *(float *)&(this_ptr->base).base.field_0x2524;
      *(float *)&(this_ptr->base).base.field_0x2524 =
           fVar15 * delta_time * *(float *)&(this_ptr->base).base.field_0x2524;
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
          local_28 = core_motion_cpp_FUN_00525020(local_20);
          pCVar13 = local_20;
          local_40 = (double)local_28;
          local_14 = local_28;
          if (local_28 <= (float)_DAT_005e89c8) {
            local_24 = 0x40200000;
            if (1.0 <= local_40) {
              local_34 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
              local_14 = local_34;
              core_skeleton_cpp_FUN_00569130(pCVar13,_DAT_01d22444);
              local_64 = local_7c;
              afStack_60[(uint)bVar12 * -2] = afStack_84[(uint)bVar12 * -2 + 3];
              afStack_60[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
                   afStack_84[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
              local_64 = local_64 ^ 0x80000000;
              core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(local_2bc);
              local_2b8 = local_34;
              damage_info = local_2bc;
              fVar15 = 0.2;
              local_288 = this_ptr;
              local_284 = this_ptr;
              core_actor_cpp_FUN_00408b40(this_ptr,&local_64);
              pCVar14 = &local_94;
              local_94.x = local_13c;
              *(float *)((int)&local_94 + (uint)bVar12 * -8 + 4) =
                   afStack_168[(uint)bVar12 * -2 + 0xc];
              this_ptr_02 = this_ptr;
              *(float *)((int)&local_94 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
                   afStack_168[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd];
              iVar6 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770
                                (&this_ptr_02->base,pCVar14,fVar15,damage_info);
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
        pCVar13 = local_20;
        goto LAB_0050fcc7;
      }
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_FUN_00569040(local_20,0);
        puVar7 = &local_e8;
        local_e8 = auStack_e4[2];
        auStack_e4[(uint)bVar12 * -2] = auStack_e4[(uint)bVar12 * -2 + 3];
        auStack_e4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
             auStack_e4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
        core_actor_cpp_FUN_00408b40(this_ptr,puVar7);
        blood_type = BLOOD_TYPE_RED;
        local_f4.x = local_c4;
        *(float *)((int)&local_f4 + (uint)bVar12 * -8 + 4) = afStack_c0[(uint)bVar12 * -2];
        *(float *)((int)&local_f4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
             afStack_c0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(g_CGorePtr,&local_f4,blood_type);
        (this_ptr->base).pool_me = 1;
      }
      goto LAB_0050fccf;
    }
LAB_0051029c:
    iVar6 = 1;
    iVar4 = 2;
LAB_0050fcc0:
    pCVar13 = &(this_ptr->base).base.model.base;
LAB_0050fcc7:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCVar13,iVar4,iVar6);
  }
LAB_0050fccf:
  if (0.0 <= local_24) {
    fVar15 = (this_ptr->base).speed;
    *(float *)&(this_ptr->base).base.field_0x2524 = (this_ptr->base).speed * delta_time;
    core_charactr_cpp_FUN_00435320(this_ptr,delta_time * fVar15);
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
  local_18 = &(this_ptr->base).base.model.base;
  local_2c = delta_time * (this_ptr->base).speed;
  while (pCVar13 = local_18, 0.0 < local_2c) {
    uVar5 = core_motion_cpp_CMotionController_advance_FUN_00524270(local_18,&local_2c);
    if (uVar5 != 0) {
      if (uVar5 < 2) {
        if ((this_ptr->base).base.is_on_ground != 0) {
          core_skeleton_cpp_FUN_00569040(local_18,_DAT_01d22440);
          local_124.x = local_1d4[2];
          *(float *)((int)&local_124 + (uint)bVar12 * -8 + 4) = local_1d4[(uint)bVar12 * -2 + 3];
          *(float *)((int)&local_124 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
               local_1d4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
          local_124.x = -local_124.x;
          (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                    ((CDemonActor *)this_ptr,&local_124,1.0);
        }
      }
      else if ((uVar5 == 7) && ((this_ptr->base).base.is_on_ground != 0)) {
        core_skeleton_cpp_FUN_00569040(pCVar13,_DAT_01d22444);
        local_1b4.x = local_1a4[2];
        *(float *)((int)&local_1b4 + (uint)bVar12 * -8 + 4) = local_1a4[(uint)bVar12 * -2 + 3];
        *(float *)((int)&local_1b4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
             local_1a4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
        local_1b4.x = -local_1b4.x;
        (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                  ((CDemonActor *)this_ptr,&local_1b4,1.0);
      }
    }
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(local_18);
  local_1c = *(uint *)(pSVar3 + 0x24);
  if (((local_1c == 0xc) || (local_1c == 0)) &&
     ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) goto LAB_005104af;
  core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
  local_190 = (this_ptr->base).base.velocity.x * delta_time;
  local_18c = (this_ptr->base).base.velocity.y * delta_time;
  local_188 = (this_ptr->base).base.velocity.z * delta_time;
  local_70 = local_190;
  local_6c[(uint)bVar12 * -2] = local_1a4[(uint)bVar12 * -2 + 6];
  local_6c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
       local_1a4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
  local_1d8 = local_70 + (this_ptr->base).base.position_delta.x;
  local_1d4[0] = local_6c[0] + (this_ptr->base).base.position_delta.y;
  local_1d4[1] = local_6c[1] + (this_ptr->base).base.position_delta.z;
  local_178.x = local_1d8;
  *(float *)((int)&local_178 + (uint)bVar12 * -8 + 4) = local_1d4[(uint)bVar12 * -2];
  *(float *)((int)&local_178 + ((uint)bVar12 * -2 + (uint)bVar12 * -2) * 4 + 8) =
       local_1d4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
  if (local_1c < 3) {
    if (local_1c == 0) {
      bVar11 = true;
LAB_00510467:
      if (!bVar11) {
LAB_00510469:
        local_178.x = local_178.x + (this_ptr->base).base.model.accumulated_root_motion.x;
        local_178.y = local_178.y + (this_ptr->base).base.model.accumulated_root_motion.y;
        local_178.z = local_178.z + (this_ptr->base).base.model.accumulated_root_motion.z;
      }
    }
  }
  else if (3 < local_1c) {
    if (local_1c < 0x11) {
      bVar11 = local_1c == 0x10;
      goto LAB_00510467;
    }
    if (0x11 < local_1c) {
      if (local_1c < 0x14) goto LAB_00510469;
      if (0x14 < local_1c) {
        bVar11 = local_1c == 0x15;
        goto LAB_00510467;
      }
    }
  }
  core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&local_178);
LAB_005104af:
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(this_ptr_00);
  core_cloth_cpp_CCloth_process_FUN_00440610
            ((CCloth *)&this_ptr->field_0xc330,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec,delta_time,
             (this_ptr->base).base.closest_distance_threshold,this_ptr_00);
  return;
}

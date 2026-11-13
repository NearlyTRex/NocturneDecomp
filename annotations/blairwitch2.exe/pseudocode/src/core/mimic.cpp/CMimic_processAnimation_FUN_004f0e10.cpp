// Name: core_mimic.cpp_CMimic_processAnimation_FUN_004f0e10
// Address: 004f0e10
// Address Range: [[004f0e10, 004f1795]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_processAnimation_FUN_004f0e10(CMimic *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mimic_cpp_CMimic_processAnimation_FUN_004f0e10(CMimic *this_ptr,float delta_time)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  CMatrix3x4f *pCVar6;
  float *pfVar7;
  float *pfVar8;
  bool bVar9;
  byte bVar10;
  float afStackY_11d8 [961];
  CDemonSet *this_ptr_00;
  CVector3f *start_pos;
  CMimic *this_ptr_01;
  CDeformableModelInstance *pCVar11;
  CVector3f *pCVar12;
  CBoundingBox3D *out_box;
  float fVar13;
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
  
  bVar10 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
            ((CDeformableModelInstance *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b4),0,
             &local_ac);
  pfVar7 = &local_16c;
  uVar2 = *(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  local_16c = local_ac.x;
  afStack_168[(uint)bVar10 * -2] = *(float *)((int)&local_ac + (uint)bVar10 * -8 + 4);
  afStack_168[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
       *(float *)((int)&local_ac + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  core_actor_cpp_FUN_00408d70(uVar2,pfVar7);
  iVar3 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  local_1e4.x = local_1f0;
  *(float *)((int)&local_1e4 + (uint)bVar10 * -8 + 4) = afStack_1ec[(uint)bVar10 * -2];
  *(float *)((int)&local_1e4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
       afStack_1ec[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  local_1e4.y = *(float *)(iVar3 + 0x24);
  core_actor_cpp_FUN_00408de0(this_ptr,&local_1e4);
  local_1c0 = local_10c;
  afStack_1bc[(uint)bVar10 * -2] = afStack_108[(uint)bVar10 * -2];
  afStack_1bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
       afStack_108[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  local_d0 = local_1c0;
  local_cc = 0.0;
  local_c8 = afStack_1bc[1];
  local_20 = &(this_ptr->base).base.model;
  local_24 = -1.0;
  iVar3 = core_motion_cpp_FUN_005035c0(local_20);
  uVar5 = *(uint *)(iVar3 + 0x24);
  if (uVar5 < 2) {
    if (uVar5 == 0) {
      iVar3 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x114))(iVar3);
      if (((iVar3 == 0) && (g_CGamePtr->freeze_enemies_enabled == 0)) &&
         (ABS((this_ptr->base).base.base.location.position.y -
              *(float *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x24)) <= (float)_DAT_005dd959))
      {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_d0);
        local_1a8 = local_88;
        local_1a4[(uint)bVar10 * -2] = afStack_84[(uint)bVar10 * -2];
        local_1a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(local_1a4[0]);
        if (SQRT(local_c8 * local_c8 + local_d0 * local_d0 + local_cc * local_cc) <
            (1.0 - ABS(local_14) * (float)_DAT_005dd961) * (float)_DAT_005dd969 +
            (float)_DAT_005dd971) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_00546790
                    (local_20,_DAT_01d097c4,&local_250);
          afStack_108[4] = 0.3;
          pCVar6 = &local_250;
          pfVar7 = local_280;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar7 = pCVar6->m[0].w;
            pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar10 * -2 + 1) * 4);
            pfVar7 = pfVar7 + (uint)bVar10 * -2 + 1;
          }
          afStack_108[3] = 0.7;
          afStack_108[2] = 0.0;
          core_xform_cpp_FUN_00591530(afStack_108 + 2,local_280);
          pfVar7 = afStack_168 + 0xe;
          local_130[0] = local_18c[2];
          afStack_168[(uint)bVar10 * -2 + 0xf] = local_18c[(uint)bVar10 * -2 + 3];
          afStack_168[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
               local_18c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
          core_actor_cpp_FUN_00408d70(this_ptr,pfVar7);
          pCVar12 = &local_1e4;
          start_pos = &local_118;
          local_118.x = local_a0;
          *(float *)((int)&local_118 + (uint)bVar10 * -8 + 4) = afStack_9c[(uint)bVar10 * -2];
          this_ptr_00 = g_CDemonSetPtr;
          *(float *)((int)&local_118 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
               afStack_9c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
          iVar3 = core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_00535ec0
                            (this_ptr_00,start_pos,pCVar12);
          if (iVar3 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&local_20->base,2,1);
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"gh-alrt[1,4].wav");
          }
        }
      }
      goto LAB_004f0f3f;
    }
LAB_004f0f08:
    iVar3 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    out_box = (CBoundingBox3D *)0x4f0f21;
    iVar4 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x114))();
    if ((iVar4 != 0) || (g_CGamePtr->freeze_enemies_enabled != 0)) {
      iVar4 = 0;
      goto LAB_004f0f30;
    }
    core_actor_cpp_FUN_00408de0(this_ptr->mirror_plane_actor,&(this_ptr->base).base.base.location);
    local_148 = afStack_168[2];
    afStack_168[(uint)bVar10 * -2 + 9] = afStack_168[(uint)bVar10 * -2 + 3];
    afStack_168[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
         afStack_168[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr,out_box);
    pfVar7 = local_220;
    pfVar8 = &local_208;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar8 = *pfVar7;
      pfVar7 = pfVar7 + (uint)bVar10 * -2 + 1;
      pfVar8 = pfVar8 + (uint)bVar10 * -2 + 1;
    }
    afStack_c0[2] = local_1fc - local_208;
    afStack_c0[3] = local_1f8 - local_204;
    local_b0 = local_1f4 - local_200;
    local_154 = local_1fc - local_208;
    afStack_168[(uint)bVar10 * -2 + 6] = afStack_c0[(uint)bVar10 * -2 + 3];
    afStack_168[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
         afStack_c0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    local_150 = 0;
    if (-local_140 <= SQRT(local_14c * local_14c + local_154 * local_154)) {
      pCVar11 = &(this_ptr->base).base.model;
      local_14 = (float)core_motion_cpp_FUN_005038a0(pCVar11,1);
      (this_ptr->base).base.walk_step_speed = local_14 * _DAT_005dd949;
      local_14 = (float)core_motion_cpp_FUN_005038a0(pCVar11,2);
      fVar13 = (this_ptr->base).speed;
      fVar1 = (this_ptr->base).speed;
      (this_ptr->base).base.walk_step_speed =
           local_14 * _DAT_005dd94d + (this_ptr->base).base.walk_step_speed;
      (this_ptr->base).base.walk_step_speed =
           fVar13 * delta_time * (this_ptr->base).base.walk_step_speed;
      core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar1);
      local_58.z = 0x40200000;
      iVar3 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      local_58.x = 0.0;
      local_58.y = 0.0;
      iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                        ((CCharacter *)this_ptr,(CVector3f *)(iVar3 + 0x20),
                         (CPathMap *)(iVar3 + 0x10a9c),&local_58,1.0,0.17453292);
      if (iVar3 < 0) {
        iVar3 = 1;
        iVar4 = 0;
      }
      else {
        if (0 < iVar3) {
          core_mimic_cpp_CMimic_beginMorph_FUN_004f1d70(this_ptr);
          goto LAB_004f0f3f;
        }
        if (ABS((this_ptr->base).base.turn_angle_accumulator) /
            (delta_time * (this_ptr->base).speed) <= (float)_DAT_005dd951) {
          iVar3 = 1;
          iVar4 = 2;
        }
        else {
          iVar3 = 1;
          iVar4 = 1;
        }
      }
      goto LAB_004f0f37;
    }
    core_mimic_cpp_CMimic_beginMorph_FUN_004f1d70(this_ptr);
  }
  else {
    if (uVar5 < 3) goto LAB_004f0f08;
    if (0xb < uVar5) {
      if (0xc < uVar5) {
        if (uVar5 != 0x13) goto LAB_004f150c;
        if (*(int *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x276c) == 0) {
          local_28 = core_motion_cpp_FUN_00503e60(&local_20->base);
          pCVar11 = local_20;
          local_40 = (double)local_28;
          local_14 = local_28;
          if (local_28 <= (float)_DAT_005dd941) {
            local_24 = 0x40200000;
            if (1.0 <= local_40) {
              local_34 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
              local_14 = local_34;
              core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
                        (pCVar11,_DAT_01d097e4,&local_7c);
              local_6c[2] = local_7c.x;
              local_6c[(uint)bVar10 * -2 + 3] = *(float *)((int)&local_7c + (uint)bVar10 * -8 + 4);
              local_6c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
                   *(float *)((int)&local_7c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
              local_6c[2] = -local_6c[2];
              core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&local_2bc);
              local_2bc.damage_amount = local_34;
              damage_info = &local_2bc;
              fVar13 = 0.2;
              local_2bc.attacker = (CDemonActor *)this_ptr;
              local_2bc.wielder = (CDemonActor *)this_ptr;
              core_actor_cpp_FUN_00408d70(this_ptr,local_6c + 2);
              pCVar12 = &local_94;
              local_94.x = local_13c;
              *(float *)((int)&local_94 + (uint)bVar10 * -8 + 4) =
                   afStack_168[(uint)bVar10 * -2 + 0xc];
              this_ptr_01 = this_ptr;
              *(float *)((int)&local_94 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                   afStack_168[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
              iVar3 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                                (&this_ptr_01->base,pCVar12,fVar13,damage_info);
              if (iVar3 != 0) {
                (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"gh-hits[1,4].wav");
              }
            }
          }
          goto LAB_004f0f3f;
        }
        iVar3 = 1;
        iVar4 = 0;
        pCVar11 = local_20;
        goto LAB_004f0f37;
      }
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                  (local_20,0,&local_dc);
        pfVar7 = &local_e8;
        local_e8 = local_dc.x;
        afStack_e4[(uint)bVar10 * -2] = *(float *)((int)&local_dc + (uint)bVar10 * -8 + 4);
        afStack_e4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             *(float *)((int)&local_dc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        core_actor_cpp_FUN_00408d70(this_ptr,pfVar7);
        blood_type = BLOOD_TYPE_RED;
        local_f4.x = local_c4;
        *(float *)((int)&local_f4 + (uint)bVar10 * -8 + 4) = afStack_c0[(uint)bVar10 * -2];
        *(float *)((int)&local_f4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             afStack_c0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(g_CGorePtr,&local_f4,blood_type);
        (this_ptr->base).pool_me = 1;
      }
      goto LAB_004f0f3f;
    }
LAB_004f150c:
    iVar3 = 1;
    iVar4 = 2;
LAB_004f0f30:
    pCVar11 = &(this_ptr->base).base.model;
LAB_004f0f37:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar11->base,iVar4,iVar3);
  }
LAB_004f0f3f:
  if (0.0 <= local_24) {
    fVar13 = (this_ptr->base).speed;
    (this_ptr->base).base.walk_step_speed = (this_ptr->base).speed * delta_time;
    core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar13);
    local_4c.z = local_24;
    iVar3 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    local_4c.x = 0.0;
    local_4c.y = 0.0;
    iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                      ((CCharacter *)this_ptr,(CVector3f *)(iVar3 + 0x20),
                       (CPathMap *)(iVar3 + 0x10a9c),&local_4c,3.0,0.5235988);
    if (iVar3 != 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,2,1);
    }
  }
  local_18 = &(this_ptr->base).base.model;
  local_2c = delta_time * (this_ptr->base).speed;
  while (pCVar11 = local_18, 0.0 < local_2c) {
    uVar5 = core_motion_cpp_CMotionController_advance_FUN_005030c0(&local_18->base,&local_2c);
    if (uVar5 != 0) {
      if (uVar5 < 2) {
        if ((this_ptr->base).base.is_on_ground != 0) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                    (local_18,_DAT_01d097e0,&local_1cc);
          local_124.x = local_1cc.x;
          *(uint *)((int)&local_124 + (uint)bVar10 * -8 + 4) =
               *(uint *)((int)&local_1cc + (uint)bVar10 * -8 + 4);
          *(uint *)((int)&local_124 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
               *(uint *)((int)&local_1cc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          local_124.x = -local_124.x;
          (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                    ((CDemonActor *)this_ptr,&local_124,1.0);
        }
      }
      else if ((uVar5 == 7) && ((this_ptr->base).base.is_on_ground != 0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                  (pCVar11,_DAT_01d097e4,&local_19c);
        local_1b4.x = local_19c.x;
        *(uint *)((int)&local_1b4 + (uint)bVar10 * -8 + 4) =
             *(uint *)((int)&local_19c + (uint)bVar10 * -8 + 4);
        *(uint *)((int)&local_1b4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             *(uint *)((int)&local_19c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        local_1b4.x = -local_1b4.x;
        (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                  ((CDemonActor *)this_ptr,&local_1b4,1.0);
      }
    }
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  iVar3 = core_motion_cpp_FUN_005035c0(local_18);
  local_1c = *(uint *)(iVar3 + 0x24);
  if (((local_1c == 0xc) || (local_1c == 0)) &&
     ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) goto LAB_004f171f;
  core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
  local_190 = (this_ptr->base).base.velocity.x * delta_time;
  local_18c[0] = (this_ptr->base).base.velocity.y * delta_time;
  local_18c[1] = (this_ptr->base).base.velocity.z * delta_time;
  local_70 = local_190;
  local_6c[(uint)bVar10 * -2] = local_18c[(uint)bVar10 * -2];
  local_6c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
       local_18c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  local_1d8 = local_70 + (this_ptr->base).base.position_delta.x;
  local_1d4[0] = local_6c[0] + (this_ptr->base).base.position_delta.y;
  local_1d4[1] = local_6c[1] + (this_ptr->base).base.position_delta.z;
  local_178.x = local_1d8;
  *(float *)((int)&local_178 + (uint)bVar10 * -8 + 4) = local_1d4[(uint)bVar10 * -2];
  *(float *)((int)&local_178 + ((uint)bVar10 * -2 + (uint)bVar10 * -2) * 4 + 8) =
       local_1d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  if (local_1c < 3) {
    if (local_1c == 0) {
      bVar9 = true;
LAB_004f16d7:
      if (!bVar9) {
LAB_004f16d9:
        local_178.x = local_178.x + (this_ptr->base).base.model.accumulated_root_motion.x;
        local_178.y = local_178.y + (this_ptr->base).base.model.accumulated_root_motion.y;
        local_178.z = local_178.z + (this_ptr->base).base.model.accumulated_root_motion.z;
      }
    }
  }
  else if (3 < local_1c) {
    if (local_1c < 0x11) {
      bVar9 = local_1c == 0x10;
      goto LAB_004f16d7;
    }
    if (0x11 < local_1c) {
      if (local_1c < 0x14) goto LAB_004f16d9;
      if (0x14 < local_1c) {
        bVar9 = local_1c == 0x15;
        goto LAB_004f16d7;
      }
    }
  }
  core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&local_178);
LAB_004f171f:
  pCVar11 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(pCVar11);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0(pCVar11);
  core_cloth_cpp_CCloth_process_FUN_005afdf0
            (&this_ptr->cloth,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec,delta_time,
             (this_ptr->base).base.closest_distance_threshold,pCVar11);
  return;
}

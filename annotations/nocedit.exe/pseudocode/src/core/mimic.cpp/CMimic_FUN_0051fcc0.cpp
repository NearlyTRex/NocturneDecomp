// Name: core_mimic.cpp_CMimic_FUN_0051fcc0
// Address: 0051fcc0
// Address Range: [[0051fcc0, 00520203] [0052029d, 005204f8]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_FUN_0051fcc0(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_mimic_cpp_CMimic_FUN_0051fcc0(CMimic *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CVector3f *pCVar5;
  SMotion *pSVar6;
  int iVar7;
  uint uVar8;
  CBoundingBox3D *pCVar9;
  CMatrix3x4f *pCVar10;
  CMatrix3x4f *pCVar11;
  bool bVar12;
  byte bVar13;
  float in_stack_00000008;
  CDeformableModelInstance *pCVar14;
  SDamageInfo local_1e4;
  CMatrix3x4f local_1a8;
  CMatrix3x4f local_178;
  CBoundingBox3D local_148;
  CVector3f local_130;
  CVector3f local_124;
  CVector3f local_118;
  CVector3f local_10c;
  CVector3f local_100;
  CVector3f local_f4;
  CVector3f local_e8;
  float local_dc;
  uint local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  CVector3f local_c4;
  CVector3f local_b8;
  CVector3f local_ac;
  CVector3f local_a0;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  double local_38;
  float local_2c [2];
  float local_24;
  float local_20;
  float local_1c;
  CDeformableModelInstance *local_18;
  float local_14;
  
  bVar13 = 0;
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     (&(g_HeroActors[g_LocalHeroIndex]->base).model,&local_10c,0);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],&local_94,pCVar5);
  local_94.y = (g_HeroActors[g_LocalHeroIndex]->base).base.location.position.y;
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            ((CDemonActor *)this_ptr,&local_88,&local_94);
  local_1c = -1.0;
  local_70.x = local_88.x;
  local_70.z = local_88.z;
  local_18 = &(this_ptr->base).base.model;
  local_70.y = 0.0;
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&local_18->motion_controller);
  uVar8 = pSVar6->state_index;
  if (uVar8 < 2) {
    if (uVar8 == 0) {
      iVar7 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).getDeathState)
                        (&g_HeroActors[g_LocalHeroIndex]->base);
      if (((iVar7 == 0) && (g_CGamePtr->freeze_enemies_enabled == 0)) &&
         (ABS((this_ptr->base).base.base.location.position.y -
              (g_HeroActors[g_LocalHeroIndex]->base).base.location.position.y) <=
          (float)15)) {
        pCVar5 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&local_58,&local_70);
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar5->y);
        if (SQRT(local_70.z * local_70.z + local_70.x * local_70.x + local_70.y * local_70.y) <
            (1.0 - ABS(local_14) * (float)0.63661977238577705) * (float)25 +
            (float)30) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
                    (local_18,INT_02f33378,&local_1a8);
          local_4c.y = 0.7;
          pCVar10 = &local_1a8;
          pCVar11 = &local_178;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            pCVar11->m[0].w = pCVar10->m[0].w;
            pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar13 * -2 + 1) * 4);
            pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar13 * -2 + 1) * 4);
          }
          local_4c.z = 0.3;
          local_4c.x = 0.0;
          pCVar5 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_b8,&local_4c,&local_178);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_f4,pCVar5);
          iVar7 = core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_00572510
                            (g_CDemonSetPtr,&local_f4,&local_94);
          if (iVar7 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&local_18->motion_controller,2,1);
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"gh-alrt[1,4].wav");
          }
        }
      }
      goto LAB_0051fdb4;
    }
LAB_0051fd7d:
    iVar7 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).getDeathState)
                      (&g_HeroActors[g_LocalHeroIndex]->base);
    if ((iVar7 != 0) || (g_CGamePtr->freeze_enemies_enabled != 0)) {
      iVar7 = 0;
      goto LAB_0051fda5;
    }
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
              (this_ptr->mirror_plane_actor,&local_118,&(this_ptr->base).base.base.location.position
              );
    pCVar9 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                       ((CDemonActor *)this_ptr,&local_148);
    local_dc = (pCVar9->max).x - (pCVar9->min).x;
    local_d4 = (pCVar9->max).z - (pCVar9->min).z;
    local_d8 = 0;
    if (-local_118.z <= SQRT(local_d4 * local_d4 + local_dc * local_dc)) {
      pCVar14 = &(this_ptr->base).base.model;
      local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                           (&pCVar14->motion_controller,1);
      (this_ptr->base).base.walk_step_speed = local_14 * 4.242857f;
      local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                           (&pCVar14->motion_controller,2);
      fVar3 = (this_ptr->base).speed;
      fVar1 = (this_ptr->base).speed;
      fVar4 = (float)1.57079632675;
      (this_ptr->base).base.walk_step_speed =
           local_14 * 12.22222f + (this_ptr->base).base.walk_step_speed;
      local_e8.z = 2.5f;
      fVar2 = (this_ptr->base).base.walk_step_speed;
      (this_ptr->base).base.turn_speed = in_stack_00000008 * fVar4 * fVar1;
      (this_ptr->base).base.walk_step_speed = fVar3 * in_stack_00000008 * fVar2;
      local_e8.x = 0.0;
      local_e8.y = 0.0;
      iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                        ((CCharacter *)this_ptr,
                         &(g_HeroActors[g_LocalHeroIndex]->base).base.location.position,
                         &g_HeroActors[g_LocalHeroIndex]->path_map,&local_e8,1.0,0.17453292);
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      else {
        if (0 < iVar7) {
          core_mimic_cpp_CMimic_beginMorph_FUN_00520a80(this_ptr);
          goto LAB_0051fdb4;
        }
        if (ABS((this_ptr->base).base.turn_angle_accumulator) /
            (in_stack_00000008 * (this_ptr->base).speed) <= (float)0.78539816337500001) {
          iVar7 = 2;
        }
        else {
          iVar7 = 1;
        }
      }
      goto LAB_0051fdac;
    }
    core_mimic_cpp_CMimic_beginMorph_FUN_00520a80(this_ptr);
  }
  else {
    if (uVar8 < 3) goto LAB_0051fd7d;
    if (0xb < uVar8) {
      if (0xc < uVar8) {
        if (uVar8 != 0x13) goto LAB_005202b7;
        if ((g_HeroActors[g_LocalHeroIndex]->base).grabbed_by == (CDemonActor *)0x0) {
          local_20 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                               (&local_18->motion_controller);
          local_38 = (double)local_20;
          local_14 = local_20;
          if (local_20 <= (float)2) {
            local_1c = 2.5f;
            if (1.0 <= local_38) {
              local_24 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
              local_14 = local_24;
              core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                        (local_18,&local_ac,INT_02f33398);
              local_ac.x._3_1_ = local_ac.x._3_1_ ^ 0x80;
              core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_1e4);
              local_1e4.damage_amount = local_24;
              local_1e4.attacker = (CDemonActor *)this_ptr;
              local_1e4.wielder = (CDemonActor *)this_ptr;
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        ((CDemonActor *)this_ptr,&local_130,&local_ac);
              iVar7 = core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
              if (iVar7 != 0) {
                (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"gh-hits[1,4].wav");
              }
            }
          }
          goto LAB_0051fdb4;
        }
        iVar7 = 0;
        pCVar14 = local_18;
        goto LAB_0051fdac;
      }
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (local_18,&local_a0,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_7c,pCVar5);
        core_gore_cpp_CGore_createBloodPool_FUN_004ede30(g_CGorePtr,&local_7c,0);
        (this_ptr->base).pool_me = 1;
      }
      goto LAB_0051fdb4;
    }
LAB_005202b7:
    iVar7 = 2;
LAB_0051fda5:
    pCVar14 = &(this_ptr->base).base.model;
LAB_0051fdac:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&pCVar14->motion_controller,iVar7,1);
  }
LAB_0051fdb4:
  if (0.0 <= local_1c) {
    fVar3 = (this_ptr->base).speed;
    fVar1 = (float)3.1415926535000001;
    (this_ptr->base).base.walk_step_speed = fVar3 * in_stack_00000008;
    (this_ptr->base).base.turn_speed = in_stack_00000008 * fVar1 * fVar3;
    local_64.z = local_1c;
    local_64.x = 0.0;
    local_64.y = 0.0;
    iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                      ((CCharacter *)this_ptr,
                       &(g_HeroActors[g_LocalHeroIndex]->base).base.location.position,
                       &g_HeroActors[g_LocalHeroIndex]->path_map,&local_64,3.0,0.5235988);
    if (iVar7 != 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,2,1);
    }
  }
  local_2c[0] = in_stack_00000008 * (this_ptr->base).speed;
  pCVar14 = &(this_ptr->base).base.model;
  while (0.0 < local_2c[0]) {
    uVar8 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&pCVar14->motion_controller,local_2c);
    if (uVar8 != 0) {
      if (uVar8 < 2) {
        if ((this_ptr->base).base.is_on_ground != 0) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                    (pCVar14,&local_c4,INT_02f33394);
          local_c4.x._3_1_ = local_c4.x._3_1_ ^ 0x80;
          (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                    ((CDemonActor *)this_ptr,&local_c4,1.0);
        }
      }
      else if ((uVar8 == 7) && ((this_ptr->base).base.is_on_ground != 0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                  (pCVar14,&local_100,INT_02f33398);
        local_100.x._3_1_ = local_100.x._3_1_ ^ 0x80;
        (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                  ((CDemonActor *)this_ptr,&local_100,1.0);
      }
    }
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar14->motion_controller);
  uVar8 = pSVar6->state_index;
  if (((uVar8 == 0xc) || (uVar8 == 0)) &&
     ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) goto LAB_00520482;
  (this_ptr->base).base.velocity.y =
       (this_ptr->base).base.velocity.y - in_stack_00000008 * (float)32;
  local_d0 = (this_ptr->base).base.velocity.x * in_stack_00000008;
  local_cc = (this_ptr->base).base.velocity.y * in_stack_00000008;
  local_c8 = in_stack_00000008 * (this_ptr->base).base.velocity.z;
  local_124.x = local_d0 + (this_ptr->base).base.position_delta.x;
  local_124.y = local_cc + (this_ptr->base).base.position_delta.y;
  local_124.z = local_c8 + (this_ptr->base).base.position_delta.z;
  if (uVar8 < 3) {
    if (uVar8 == 0) {
      bVar12 = true;
LAB_0052043a:
      if (!bVar12) {
LAB_0052043c:
        local_124.x = local_124.x + (this_ptr->base).base.model.accumulated_root_motion.x;
        local_124.y = local_124.y + (this_ptr->base).base.model.accumulated_root_motion.y;
        local_124.z = local_124.z + (this_ptr->base).base.model.accumulated_root_motion.z;
      }
    }
  }
  else if (3 < uVar8) {
    if (uVar8 < 0x11) {
      bVar12 = uVar8 == 0x10;
      goto LAB_0052043a;
    }
    if (0x11 < uVar8) {
      if (uVar8 < 0x14) goto LAB_0052043c;
      if (0x14 < uVar8) {
        bVar12 = uVar8 == 0x15;
        goto LAB_0052043a;
      }
    }
  }
  core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_124);
LAB_00520482:
  pCVar14 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar14);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(pCVar14);
  core_cloth_cpp_CCloth_process_FUN_0043ab80
            (&this_ptr->cloth,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec,in_stack_00000008,
             (this_ptr->base).base.closest_distance_threshold,pCVar14);
  return;
}

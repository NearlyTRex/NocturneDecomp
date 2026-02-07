// Name: core_mimic.cpp_CMimic_FUN_0051fcc0
// Address: 0051fcc0
// Address Range: [[0051fcc0, 00520203] [0052029d, 005204f8]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_FUN_0051fcc0(CMimic *this_ptr)

#include "nocturne.h"

void __cdecl core_mimic_cpp_CMimic_FUN_0051fcc0(CMimic *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CVector3f *pCVar6;
  SMotion *pSVar7;
  int iVar8;
  uint uVar9;
  CBoundingBox3D *pCVar10;
  CMatrix3x4f *pCVar11;
  CMatrix3x4f *pCVar12;
  bool bVar13;
  byte bVar14;
  float in_stack_00000008;
  CMimic *this_ptr_00;
  CLocation *desired_state_index;
  CPathMap *force_immediate;
  CMatrix3x4f local_1a8;
  CMatrix3x4f local_178;
  CBoundingBox3D local_148;
  CVector3f local_130;
  float local_124;
  float local_120;
  float local_11c;
  CVector3f local_118;
  CVector3f local_10c;
  CVector3f local_100;
  CVector3f local_f4;
  uint local_e8;
  uint local_e4;
  float local_e0;
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
  uint local_64;
  uint local_60;
  float local_5c;
  CVector3f local_58;
  CVector3f local_4c;
  double local_38;
  float local_2c;
  float local_24;
  float local_20;
  float local_1c;
  CMimic *local_18;
  float local_14;
  
  bVar14 = 0;
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     (&(g_HeroActors[g_LocalHeroIndex]->base).model,&local_10c,0);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],&local_94,pCVar6);
  local_94.y = (g_HeroActors[g_LocalHeroIndex]->base).base.location.position.y;
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            ((CDemonActor *)this_ptr,&local_88,&local_94);
  local_1c = -1.0;
  local_70.x = local_88.x;
  local_70.z = local_88.z;
  local_18 = (CMimic *)&(this_ptr->base).base.model;
  local_70.y = 0.0;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     ((CMotionController *)local_18);
  uVar9 = pSVar7->state_index;
  if (uVar9 < 2) {
    if (uVar9 == 0) {
      iVar8 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).isDamageable)
                        (&g_HeroActors[g_LocalHeroIndex]->base);
      if (((iVar8 == 0) && (g_CGamePtr->debug_flag_2 == 0)) &&
         (ABS((this_ptr->base).base.base.location.position.y -
              (g_HeroActors[g_LocalHeroIndex]->base).base.location.position.y) <=
          (float)15)) {
        pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&local_58,&local_70);
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar6->y);
        if (SQRT(local_70.z * local_70.z + local_70.x * local_70.x + local_70.y * local_70.y) <
            (1.0 - ABS(local_14) * (float)0.63661977238577705) * (float)25 +
            (float)30) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
                    ((CDeformableModelInstance *)local_18,INT_02f33378,&local_1a8);
          local_4c.y = 0.7;
          pCVar11 = &local_1a8;
          pCVar12 = &local_178;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            pCVar12->m[0].w = pCVar11->m[0].w;
            pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar14 * -2 + 1) * 4);
            pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar14 * -2 + 1) * 4);
          }
          local_4c.z = 0.3;
          local_4c.x = 0.0;
          pCVar6 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_b8,&local_4c,&local_178);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_f4,pCVar6);
          iVar8 = core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_00572510
                            (g_CDemonSetPtr,&local_f4,&local_94);
          if (iVar8 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      ((CMotionController *)local_18,2,1);
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"gh-alrt[1,4].wav");
          }
        }
      }
      goto LAB_0051fdb4;
    }
LAB_0051fd7d:
    desired_state_index = (CLocation *)0x51fd96;
    iVar8 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).isDamageable)
                      (&g_HeroActors[g_LocalHeroIndex]->base);
    if ((iVar8 != 0) || (g_CGamePtr->debug_flag_2 != 0)) {
      force_immediate = (CPathMap *)0x0;
      goto LAB_0051fda5;
    }
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
              (this_ptr->mirror_plane_actor,&local_118,&(this_ptr->base).base.base.location.position
              );
    pCVar10 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                        ((CDemonActor *)this_ptr,&local_148);
    local_dc = (pCVar10->max).x - (pCVar10->min).x;
    local_d4 = (pCVar10->max).z - (pCVar10->min).z;
    local_d8 = 0;
    if (-local_118.z <= SQRT(local_d4 * local_d4 + local_dc * local_dc)) {
      pCVar1 = &(this_ptr->base).base.model;
      local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                           (&pCVar1->motion_controller,1);
      (this_ptr->base).base.walk_step_speed = local_14 * 4.242857f;
      local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                           (&pCVar1->motion_controller,2);
      fVar4 = (this_ptr->base).speed;
      fVar2 = (this_ptr->base).speed;
      fVar5 = (float)1.57079632675;
      (this_ptr->base).base.walk_step_speed =
           local_14 * 12.22222f + (this_ptr->base).base.walk_step_speed;
      local_e0 = 2.5f;
      fVar3 = (this_ptr->base).base.walk_step_speed;
      (this_ptr->base).base.turn_speed = in_stack_00000008 * fVar5 * fVar2;
      (this_ptr->base).base.walk_step_speed = fVar4 * in_stack_00000008 * fVar3;
      force_immediate = &g_HeroActors[g_LocalHeroIndex]->path_map;
      desired_state_index = &(g_HeroActors[g_LocalHeroIndex]->base).base.location;
      local_e8 = 0;
      local_e4 = 0;
      this_ptr_00 = this_ptr;
      iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
      if ((-1 < iVar8) && (0 < iVar8)) {
        core_mimic_cpp_CMimic_beginMorph_FUN_00520a80(this_ptr);
        goto LAB_0051fdb4;
      }
      goto LAB_0051fdac;
    }
    core_mimic_cpp_CMimic_beginMorph_FUN_00520a80(this_ptr);
  }
  else {
    if (uVar9 < 3) goto LAB_0051fd7d;
    if (0xb < uVar9) {
      if (0xc < uVar9) {
        if (uVar9 != 0x13) goto LAB_005202b7;
        if ((g_HeroActors[g_LocalHeroIndex]->base).grabbed_by == (CDemonActor *)0x0) {
          local_20 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                               ((CMotionController *)local_18);
          local_38 = (double)local_20;
          local_14 = local_20;
          if (local_20 <= (float)2) {
            local_1c = 2.5f;
            if (1.0 <= local_38) {
              local_24 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
              local_14 = local_24;
              core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                        ((CDeformableModelInstance *)local_18,&local_ac,INT_02f33398);
              local_ac.x._3_1_ = local_ac.x._3_1_ ^ 0x80;
              core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe1c);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        ((CDemonActor *)this_ptr,&local_130,&local_ac);
              iVar8 = core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
              if (iVar8 != 0) {
                (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"gh-hits[1,4].wav");
              }
            }
          }
          goto LAB_0051fdb4;
        }
        force_immediate = (CPathMap *)0x1;
        desired_state_index = (CLocation *)0x0;
        this_ptr_00 = local_18;
        goto LAB_0051fdac;
      }
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           ((CDeformableModelInstance *)local_18,&local_a0,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_7c,pCVar6);
        core_gore_cpp_CGore_FUN_004ede30(g_CGorePtr);
        (this_ptr->base).pool_me = 1;
      }
      goto LAB_0051fdb4;
    }
LAB_005202b7:
    force_immediate = (CPathMap *)0x1;
    desired_state_index = (CLocation *)0x2;
LAB_0051fda5:
    this_ptr_00 = (CMimic *)&(this_ptr->base).base.model;
LAB_0051fdac:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)this_ptr_00,(int)desired_state_index,(int)force_immediate);
  }
LAB_0051fdb4:
  if (0.0 <= local_1c) {
    fVar4 = (this_ptr->base).speed;
    fVar2 = (float)3.1415926535000001;
    (this_ptr->base).base.walk_step_speed = fVar4 * in_stack_00000008;
    (this_ptr->base).base.turn_speed = in_stack_00000008 * fVar2 * fVar4;
    local_5c = local_1c;
    local_64 = 0;
    local_60 = 0;
    iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
    if (iVar8 != 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,2,1);
    }
  }
  local_2c = in_stack_00000008 * (this_ptr->base).speed;
  pCVar1 = &(this_ptr->base).base.model;
  while (0.0 < local_2c) {
    uVar9 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar1->motion_controller);
    if (uVar9 != 0) {
      if (uVar9 < 2) {
        if ((this_ptr->base).base.field3_0x2410 != 0) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                    (pCVar1,&local_c4,INT_02f33394);
          local_c4.x._3_1_ = local_c4.x._3_1_ ^ 0x80;
          (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                    ((CDemonActor *)this_ptr,&local_c4,1.0);
        }
      }
      else if ((uVar9 == 7) && ((this_ptr->base).base.field3_0x2410 != 0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                  (pCVar1,&local_100,INT_02f33398);
        local_100.x._3_1_ = local_100.x._3_1_ ^ 0x80;
        (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                  ((CDemonActor *)this_ptr,&local_100,1.0);
      }
    }
  }
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar1->motion_controller);
  uVar9 = pSVar7->state_index;
  if (((uVar9 == 0xc) || (uVar9 == 0)) &&
     ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) goto LAB_00520482;
  (this_ptr->base).base.field7_0x2428.y =
       (this_ptr->base).base.field7_0x2428.y - in_stack_00000008 * (float)32;
  local_d0 = (this_ptr->base).base.field7_0x2428.x * in_stack_00000008;
  local_cc = (this_ptr->base).base.field7_0x2428.y * in_stack_00000008;
  local_c8 = in_stack_00000008 * (this_ptr->base).base.field7_0x2428.z;
  local_124 = local_d0 + (this_ptr->base).base.field6_0x241c.x;
  local_120 = local_cc + (this_ptr->base).base.field6_0x241c.y;
  local_11c = local_c8 + (this_ptr->base).base.field6_0x241c.z;
  if (uVar9 < 3) {
    if (uVar9 == 0) {
      bVar13 = true;
LAB_0052043a:
      if (!bVar13) {
LAB_0052043c:
        local_124 = local_124 + (this_ptr->base).base.model.accumulated_root_motion.x;
        local_120 = local_120 + (this_ptr->base).base.model.accumulated_root_motion.y;
        local_11c = local_11c + (this_ptr->base).base.model.accumulated_root_motion.z;
      }
    }
  }
  else if (3 < uVar9) {
    if (uVar9 < 0x11) {
      bVar13 = uVar9 == 0x10;
      goto LAB_0052043a;
    }
    if (0x11 < uVar9) {
      if (uVar9 < 0x14) goto LAB_0052043c;
      if (0x14 < uVar9) {
        bVar13 = uVar9 == 0x15;
        goto LAB_0052043a;
      }
    }
  }
  core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
LAB_00520482:
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(pCVar1);
  core_cloth_cpp_CCloth_process_FUN_0043ab80
            ((CCloth *)this_ptr->unk3,&(this_ptr->base).base.base.location.position,
             (CVector3f *)&(this_ptr->base).base.base.orient,in_stack_00000008,
             (this_ptr->base).base.closest_distance_threshold,pCVar1);
  return;
}

// Name: core_mimic.cpp_FUN_0051fcc0
// Address: 0051fcc0
// Address Range: [[0051fcc0, 00520203] [0052029d, 005204f8]]
// Convention: unknown
// Signature: undefined core_mimic.cpp_FUN_0051fcc0()

#include "nocturne.h"

/* Signature: byte actors_enemy_mimic.cpp_FUN_0051fcc0(uint param_1, uint param_2)
    */

void core_mimic_cpp_FUN_0051fcc0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CCharacter *pCVar4;
  CVector3f *pCVar5;
  SMotion *pSVar6;
  int iVar7;
  uint uVar8;
  CBoundingBox3D *pCVar9;
  float *pfVar10;
  CMatrix3x4f *pCVar11;
  bool bVar12;
  byte bVar13;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  CDeformableModelInstance *pCVar14;
  SCollisionInfo *in_stack_fffffda2;
  SDamageInfo local_1e4;
  float local_1a8 [12];
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
  CDeformableModelInstance *local_18;
  float local_14;
  
  bVar13 = 0;
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     (&(g_HeroActors[g_LocalHeroIndex]->base_character).model,&local_10c,0);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],&local_94,pCVar5);
  local_94.y = (g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.location.position.y;
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (&in_stack_00000004->base_actor,&local_88,&local_94);
  local_1c = -1.0;
  local_70.x = local_88.x;
  local_70.z = local_88.z;
  local_18 = &in_stack_00000004->model;
  local_70.y = 0.0;
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&local_18->motion_controller);
  uVar8 = pSVar6->state_index;
  if (uVar8 < 2) {
    if (uVar8 == 0) {
      iVar7 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].hasCollision)
                        ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_fffffda2);
      if (((iVar7 == 0) && (g_CGamePtr->field54_0x1d4 == 0)) &&
         (ABS((in_stack_00000004->base_actor).location.position.y -
              (g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.location.position.y) <=
          (float)15)) {
        pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&local_58,&local_70);
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar5->y);
        if (SQRT(local_70.z * local_70.z + local_70.x * local_70.x + local_70.y * local_70.y) <
            (1.0 - ABS(local_14) * (float)0.63661977238577705) * (float)25 +
            (float)30) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
                    (local_18,DAT_02f33378,(CMatrix3x4f *)in_stack_fffffda2);
          local_4c.y = 0.7;
          pfVar10 = local_1a8;
          pCVar11 = &local_178;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            pCVar11->m[0].w = *pfVar10;
            pfVar10 = pfVar10 + (uint)bVar13 * -2 + 1;
            pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar13 * -2 + 1) * 4);
          }
          local_4c.z = 0.3;
          local_4c.x = 0.0;
          pCVar5 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_b8,&local_4c,&local_178);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    (&in_stack_00000004->base_actor,&local_f4,pCVar5);
          iVar7 = core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_00572510
                            (g_CDemonSetPtr,&local_f4,&local_94);
          if (iVar7 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&local_18->motion_controller,2,1);
            (*((in_stack_00000004->base_actor).vtable)->playSound)
                      (&in_stack_00000004->base_actor,"gh-alrt[1,4].wav");
          }
        }
      }
      goto LAB_0051fdb4;
    }
LAB_0051fd7d:
    iVar7 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].hasCollision)
                      ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_fffffda2);
    if ((iVar7 != 0) || (g_CGamePtr->field54_0x1d4 != 0)) {
      iVar7 = 0;
      goto LAB_0051fda5;
    }
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
              (*(CDemonActor **)(in_stack_00000004[6].cloth_data + 0x1e88),&local_118,
               &(in_stack_00000004->base_actor).location.position);
    pCVar9 = (*((in_stack_00000004->base_actor).vtable)->getBoundingBox)
                       (&in_stack_00000004->base_actor,&local_148);
    local_dc = (pCVar9->max).x - (pCVar9->min).x;
    local_d4 = (pCVar9->max).z - (pCVar9->min).z;
    local_d8 = 0;
    if (-local_118.z <= SQRT(local_d4 * local_d4 + local_dc * local_dc)) {
      pCVar14 = &in_stack_00000004->model;
      local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                           (&pCVar14->motion_controller,1);
      *(float *)(in_stack_00000004->field2_0x240c + 0x28) = local_14 * 4.242857f;
      local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                           (&pCVar14->motion_controller,2);
      fVar2 = *(float *)in_stack_00000004[1].base_actor.actor_name;
      fVar1 = *(float *)in_stack_00000004[1].base_actor.actor_name;
      fVar3 = (float)1.57079632675;
      *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
           local_14 * 12.22222f + *(float *)(in_stack_00000004->field2_0x240c + 0x28);
      local_e0 = DAT_00661408;
      *(float *)(in_stack_00000004->field2_0x240c + 0x2c) = in_stack_00000008 * fVar3 * fVar1;
      *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
           fVar2 * in_stack_00000008 * *(float *)(in_stack_00000004->field2_0x240c + 0x28);
      local_e8 = 0;
      local_e4 = 0;
      iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(in_stack_00000004);
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      else {
        if (0 < iVar7) {
          core_mimic_cpp_CMimic_beginMorph_FUN_00520a80();
          goto LAB_0051fdb4;
        }
        if (ABS(*(float *)(in_stack_00000004->field2_0x240c + 0xc)) /
            (in_stack_00000008 * *(float *)in_stack_00000004[1].base_actor.actor_name) <=
            (float)0.78539816337500001) {
          iVar7 = 2;
        }
        else {
          iVar7 = 1;
        }
      }
      goto LAB_0051fdac;
    }
    core_mimic_cpp_CMimic_beginMorph_FUN_00520a80();
  }
  else {
    if (uVar8 < 3) goto LAB_0051fd7d;
    if (0xb < uVar8) {
      if (0xc < uVar8) {
        if (uVar8 != 0x13) goto LAB_005202b7;
        if ((g_HeroActors[g_LocalHeroIndex]->base_character).grabbed_by == (CDemonActor *)0x0) {
          local_20 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                               (&local_18->motion_controller);
          local_38 = (double)local_20;
          local_14 = local_20;
          if (local_20 <= (float)2) {
            local_1c = DAT_00661408;
            if (1.0 <= local_38) {
              local_24 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
              local_14 = local_24;
              core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                        (local_18,&local_ac,DAT_02f33398);
              local_ac.x._3_1_ = local_ac.x._3_1_ ^ 0x80;
              core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_1e4);
              local_1e4.damage_amount = local_24;
              local_1e4.attacker = &in_stack_00000004->base_actor;
              local_1e4.wielder = &in_stack_00000004->base_actor;
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        (&in_stack_00000004->base_actor,&local_130,&local_ac);
              iVar7 = core_enemy_cpp_FUN_004a9880();
              if (iVar7 != 0) {
                (*((in_stack_00000004->base_actor).vtable)->playSound)
                          (&in_stack_00000004->base_actor,"gh-hits[1,4].wav");
              }
            }
          }
          goto LAB_0051fdb4;
        }
        iVar7 = 0;
        pCVar14 = local_18;
        goto LAB_0051fdac;
      }
      if ((*(int *)(in_stack_00000004[1].base_actor.actor_name + 4) == 0) &&
         ((in_stack_00000004->base_actor).field11_0xdc == 0)) {
        pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (local_18,&local_a0,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  (&in_stack_00000004->base_actor,&local_7c,pCVar5);
        core_gore_cpp_FUN_004ede30();
        pCVar4 = in_stack_00000004 + 1;
        (pCVar4->base_actor).actor_name[4] = '\x01';
        (pCVar4->base_actor).actor_name[5] = '\0';
        (pCVar4->base_actor).actor_name[6] = '\0';
        (pCVar4->base_actor).actor_name[7] = '\0';
      }
      goto LAB_0051fdb4;
    }
LAB_005202b7:
    iVar7 = 2;
LAB_0051fda5:
    pCVar14 = &in_stack_00000004->model;
LAB_0051fdac:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&pCVar14->motion_controller,iVar7,1);
  }
LAB_0051fdb4:
  if (0.0 <= local_1c) {
    fVar2 = *(float *)in_stack_00000004[1].base_actor.actor_name;
    fVar1 = (float)3.1415926535000001;
    *(float *)(in_stack_00000004->field2_0x240c + 0x28) = fVar2 * in_stack_00000008;
    *(float *)(in_stack_00000004->field2_0x240c + 0x2c) = in_stack_00000008 * fVar1 * fVar2;
    local_5c = local_1c;
    local_64 = 0;
    local_60 = 0;
    iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(in_stack_00000004);
    if (iVar7 != 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller,2,1);
    }
  }
  local_2c = in_stack_00000008 * *(float *)in_stack_00000004[1].base_actor.actor_name;
  pCVar14 = &in_stack_00000004->model;
  while (0.0 < local_2c) {
    uVar8 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar14->motion_controller);
    if (uVar8 != 0) {
      if (uVar8 < 2) {
        if (*(int *)(in_stack_00000004->field2_0x240c + 4) != 0) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                    (pCVar14,&local_c4,DAT_02f33394);
          local_c4.x._3_1_ = local_c4.x._3_1_ ^ 0x80;
          (*((in_stack_00000004->base_actor).vtable)->processFootstepAtOffset)
                    (&in_stack_00000004->base_actor,&local_c4,1.0);
        }
      }
      else if ((uVar8 == 7) && (*(int *)(in_stack_00000004->field2_0x240c + 4) != 0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                  (pCVar14,&local_100,DAT_02f33398);
        local_100.x._3_1_ = local_100.x._3_1_ ^ 0x80;
        (*((in_stack_00000004->base_actor).vtable)->processFootstepAtOffset)
                  (&in_stack_00000004->base_actor,&local_100,1.0);
      }
    }
  }
  core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar14->motion_controller);
  uVar8 = pSVar6->state_index;
  if (((uVar8 == 0xc) || (uVar8 == 0)) && ((in_stack_00000004->base_actor).field11_0xdc == 0))
  goto LAB_00520482;
  *(float *)(in_stack_00000004->field2_0x240c + 0x20) =
       *(float *)(in_stack_00000004->field2_0x240c + 0x20) -
       in_stack_00000008 * (float)32;
  local_d0 = *(float *)(in_stack_00000004->field2_0x240c + 0x1c) * in_stack_00000008;
  local_cc = *(float *)(in_stack_00000004->field2_0x240c + 0x20) * in_stack_00000008;
  local_c8 = in_stack_00000008 * *(float *)(in_stack_00000004->field2_0x240c + 0x24);
  local_124 = local_d0 + *(float *)(in_stack_00000004->field2_0x240c + 0x10);
  local_120 = local_cc + *(float *)(in_stack_00000004->field2_0x240c + 0x14);
  local_11c = local_c8 + *(float *)(in_stack_00000004->field2_0x240c + 0x18);
  if (uVar8 < 3) {
    if (uVar8 == 0) {
      bVar12 = true;
LAB_0052043a:
      if (!bVar12) {
LAB_0052043c:
        local_124 = local_124 + (in_stack_00000004->model).accumulated_root_motion.x;
        local_120 = local_120 + (in_stack_00000004->model).accumulated_root_motion.y;
        local_11c = local_11c + (in_stack_00000004->model).accumulated_root_motion.z;
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
  core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
LAB_00520482:
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(&in_stack_00000004->model)
  ;
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
            (&in_stack_00000004->model);
  core_cloth_cpp_FUN_0043ab80();
  return;
}

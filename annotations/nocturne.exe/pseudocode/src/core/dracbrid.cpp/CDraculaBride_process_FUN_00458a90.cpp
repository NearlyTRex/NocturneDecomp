// Name: core_dracbrid.cpp_CDraculaBride_process_FUN_00458a90
// Address: 00458a90
// Address Range: [[00458a90, 00459f65]]
// Convention: unknown
// Signature: void core_dracbrid_cpp_CDraculaBride_process_FUN_00458a90(CPathMap *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dracbrid_cpp_CDraculaBride_process_FUN_00458a90(CPathMap *param_1,float param_2)

{
  CMotionController *this_ptr;
  int *piVar1;
  CDeformableModelInstance *this_ptr_00;
  uint uVar2;
  int iVar3;
  int iVar4;
  SMotion *pSVar5;
  CPathMap *pCVar6;
  CSkeleton *pCVar7;
  int *piVar8;
  CVector3f *pCVar9;
  CDemonActor *pCVar10;
  CCharacter *pCVar11;
  double dVar12;
  float fVar13;
  SDamageInfo *pSVar14;
  CPathMap *in_stack_fffffb6c;
  CPathMap *in_stack_fffffb70;
  CPathMap *pCVar15;
  float fVar16;
  float in_stack_fffffb78;
  byte local_3cc [100];
  byte local_368 [100];
  SDamageInfo local_304;
  SDamageInfo local_2c8;
  SDamageInfo local_28c;
  SDamageInfo local_250;
  SDamageInfo local_214;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  CVector3f local_1cc;
  CVector3f local_1c0;
  CVector3f local_1b4;
  uint local_1a8;
  uint local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  byte local_190 [12];
  CVector3f local_184;
  uint local_178;
  uint local_174;
  uint local_170;
  CVector3f local_16c;
  float local_160;
  float local_15c;
  float local_158;
  CVector3f local_154;
  CVector3f local_148;
  CVector3f local_13c;
  CVector3f local_130;
  float local_124;
  float local_120;
  float local_11c;
  CVector3f local_118;
  CVector3f local_10c;
  CVector3f local_100;
  CVector3f local_f4;
  CVector3f local_e8;
  float local_dc;
  float local_d8;
  float local_d4;
  CVector3f local_d0;
  CVector3f local_c4;
  CVector3f local_b8;
  CVector3f local_ac;
  float local_a0;
  int local_9c;
  int local_98;
  CVector3f local_94;
  CVector3f local_88;
  float local_7c;
  float local_78;
  float local_74;
  CVector3f local_64;
  uint local_58;
  uint local_54;
  float local_50;
  CVector3f local_4c;
  float local_38;
  float local_34;
  int local_30;
  CDeformableModelInstance *local_2c;
  int local_28;
  CDeformableModelInstance *local_24;
  CSkeleton *local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  if (param_1->height_cache_tags[0x15][0x43] != 0) {
    fVar13 = (float)param_1->height_cache_tags[0x15][0x44] - param_2;
    param_1->height_cache_tags[0x15][0x44] = (int)fVar13;
    fVar16 = 5.0f;
    if (0.0 <= fVar13) {
      iVar4 = 0;
      if (0 < param_1->height_cache_tags[0x15][0x24]) {
        fVar13 = (float)65535;
        pCVar6 = param_1;
        do {
          iVar3 = pCVar6->height_cache_tags[0x15][0x25];
          *(uint *)(iVar3 + 0xfc) = 1;
          *(uint *)(iVar3 + 0xc9c) = 1;
          iVar4 = iVar4 + 1;
          in_stack_fffffb6c = (CPathMap *)0x458c6e;
          dVar12 = round
                             ((double)(((float)param_1->height_cache_tags[0x15][0x44] * fVar13) /
                                      fVar16));
          *(int *)(iVar3 + 0xca8) = (int)ROUND(dVar12);
          pCVar6 = (CPathMap *)&(pCVar6->current_position).y;
        } while (iVar4 < param_1->height_cache_tags[0x15][0x24]);
      }
    }
    else {
      param_1->height_cache_tags[0x15][0x43] = 0;
      param_1->height_cache[0][0x10] = 2;
      iVar4 = param_1->height_cache_tags[0x15][0x24];
      param_1->height_cache_tags[0x15][0x44] = 0;
      iVar3 = 0;
      pCVar6 = param_1;
      if (0 < iVar4) {
        do {
          *(uint *)(pCVar6->height_cache_tags[0x15][0x25] + 0x70) = 2;
          iVar3 = iVar3 + 1;
          pCVar6 = (CPathMap *)&(pCVar6->current_position).y;
        } while (iVar3 < param_1->height_cache_tags[0x15][0x24]);
      }
    }
  }
  core_dracbrid_cpp_CDraculaBride_updateFreakySounds_FUN_0045b020((CDraculaBride *)param_1,param_2);
  iVar4 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  if (0.0 <= (float)param_1->height_cache_tags[0x15][0x1f]) {
    param_1->height_cache_tags[0x15][0x1f] =
         (int)((float)param_1->height_cache_tags[0x15][0x1f] - param_2);
  }
  param_1->height_cache[0x16][0x47] = 0;
  param_1->height_cache[0x16][0x46] = param_1->height_cache[0x16][0x47];
  param_1->height_cache[0x16][0x45] = param_1->height_cache[0x16][0x46];
  local_38 = param_2 * (float)param_1->height_cache_tags[0x14][0x37];
  this_ptr = (CMotionController *)(param_1->height_cache[0] + 0x48);
  while (0.0 < local_38) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(this_ptr,&local_38);
    if (iVar4 == 0x29a) {
      param_1->height_cache[0x1d][0x1b] = 0;
      local_178 = 0;
      local_174 = 0x41a00000;
      local_170 = 0x41a00000;
      core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,&local_ac,&local_178);
      core_dracbrid_cpp_CDraculaBride_explode_FUN_00459f70
                ((CDraculaBride *)param_1,&local_ac,-1.0,1);
      fVar13 = 5.0f;
      iVar4 = param_1->height_cache[0][0x47];
      param_1->height_cache_tags[0x15][0x43] = 1;
      param_1->height_cache_tags[0x15][0x44] = (int)fVar13;
      (**(code **)(iVar4 + 0x28))((CDemonActor *)param_1,"brideexplosion.wav");
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)param_1,iVar4);
    }
  }
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(this_ptr);
  iVar4 = pSVar5->state_index;
  if (iVar4 == 9) {
    fVar16 = 6.0f * param_2;
    fVar13 = (float)param_1->height_cache_tags[0x14][0x37];
    param_1->height_cache[0x17][4] =
         (int)(3.141593f * param_2 * (float)param_1->height_cache_tags[0x14][0x37]);
    param_1->height_cache[0x17][3] = (int)(fVar13 * fVar16);
  }
  else {
    fVar16 = 1.570796f * param_2;
    fVar13 = (float)param_1->height_cache_tags[0x14][0x37];
    param_1->height_cache[0x17][3] = param_1->height_cache[0x16][0x47];
    param_1->height_cache[0x17][4] = (int)(fVar16 * fVar13);
  }
  iVar3 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar3 != 0) {
    uVar2 = param_1->height_cache[0x17][0x62];
    if (uVar2 < 2) {
      if (uVar2 == 1) {
LAB_00458d26:
        iVar4 = 0xe;
      }
      else {
LAB_00458f79:
        iVar4 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                ((CMotionController *)(param_1->height_cache[0] + 0x48),iVar4,1);
    }
    else {
      if (uVar2 < 3) goto LAB_00458d26;
      if (uVar2 != 3) goto LAB_00458f79;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                ((CMotionController *)(param_1->height_cache[0] + 0x48),0,1);
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
    }
    param_1->height_cache[0x16][0x47] = 0;
    param_1->height_cache[0x16][0x46] = param_1->height_cache[0x16][0x47];
    param_1->height_cache[0x16][0x45] = param_1->height_cache[0x16][0x46];
    goto switchD_00458fa0_default;
  }
  switch(iVar4) {
  case 0:
    (**(code **)(param_1->height_cache[0][0x47] + 0x13c))
              ((CCharacter *)param_1,(int)param_2,&in_stack_fffffb6c->current_position);
    if (param_1->height_cache_tags[0x14][0x3d] == 0) {
      in_stack_fffffb6c = (CPathMap *)0x459be7;
      in_stack_fffffb70 = param_1;
      iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030((CEnemy *)param_1,param_2);
      if (iVar4 != 0) {
        in_stack_fffffb70 = (CPathMap *)0xe;
        in_stack_fffffb6c = (CPathMap *)(param_1->height_cache[0] + 0x48);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  ((CMotionController *)in_stack_fffffb6c,0xe,1);
      }
      break;
    }
    iVar4 = core_actor_cpp_randomChance_FUN_0040dea0(0.25);
    if ((iVar4 != 0) &&
       (iVar4 = core_actor_cpp_isOfClass_FUN_0040d7e0
                          ((CDemonActor *)param_1->height_cache_tags[0x14][0x3d],"CHero"),
       iVar4 != 0)) {
      pCVar11 = (CCharacter *)0x0;
      iVar4 = 0;
      while (((int)pCVar11 < (int)0x01E57284->characters[0x6d6] &&
             ((pCVar10 = core_actor_cpp_castToClassHash_FUN_0040d890
                                   (*(CDemonActor **)
                                     ((int)0x01E57284->characters + iVar4 + 0x1b5c),
                                    g_CDraculaBrideActorType_01b4d224.name_hash),
              pCVar10 == (CDemonActor *)0x0 || (*(int *)(pCVar10[0x90].create_event + 0x38) == 0))))
            ) {
        pCVar11 = (CCharacter *)((pCVar11->base).actor_name + 1);
        iVar4 = iVar4 + 4;
      }
      if (pCVar11 == 0x01E57284->characters[0x6d6]) {
        _sprintf();
        core_dracbrid_cpp_FUN_0045ab40();
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  ((CMotionController *)(param_1->height_cache[0] + 0x48),0x17,1);
        in_stack_fffffb6c = (CPathMap *)0x459d20;
        in_stack_fffffb70 = param_1;
        (**(code **)(param_1->height_cache[0][0x47] + 0x24))
                  ((CDemonActor *)param_1,"hotbride-disappear.wav");
        iVar4 = param_1->height_cache_tags[0x14][0x3d];
        piVar8 = param_1->height_cache_tags[0x15] + 0x20;
        param_1->height_cache_tags[0x15][0x1c] = 1;
        if (piVar8 != (int *)(iVar4 + 0x20)) {
          *piVar8 = *(int *)(iVar4 + 0x20);
          param_1->height_cache_tags[0x15][0x21] = *(int *)(iVar4 + 0x24);
          param_1->height_cache_tags[0x15][0x22] = *(int *)(iVar4 + 0x28);
        }
        param_1->height_cache_tags[0x15][0x1d] = 0;
        break;
      }
    }
    in_stack_fffffb6c = (CPathMap *)(param_1->height_cache[0] + 0x48);
    if ((float)param_1->height_cache_tags[0x15][0x1f] < 0.0) {
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
      in_stack_fffffb70 = (CPathMap *)0xd;
      param_1->height_cache_tags[0x15][0x1f] = (int)local_14;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                ((CMotionController *)in_stack_fffffb6c,0xd,1);
      break;
    }
    goto LAB_00459978;
  case 2:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_28c);
    local_28c.damage_amount =
         (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40e00000,0x41700000);
    pSVar14 = &local_28c;
    local_28c.attacker = (CDemonActor *)param_1;
    local_28c.wielder = (CDemonActor *)param_1;
    fVar13 = 0.4;
    local_14 = local_28c.damage_amount;
    pCVar9 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                       (&local_b8,(CVector3f *)&DAT_02dd1184,
                        (CMatrix3x4f *)(param_1->height_cache[10] + _DAT_01b4d260 * 0xc));
    pCVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                       ((CDemonActor *)param_1,&local_100,pCVar9);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0((CEnemy *)param_1,pCVar9,fVar13,pSVar14);
    param_1->height_cache_tags[0x15][0x23] = 1;
    break;
  case 3:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_304);
    local_304.damage_amount =
         (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40e00000,0x41700000);
    pSVar14 = &local_304;
    local_304.attacker = (CDemonActor *)param_1;
    local_304.wielder = (CDemonActor *)param_1;
    fVar13 = 0.4;
    local_14 = local_304.damage_amount;
    pCVar9 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                       (&local_184,(CVector3f *)&DAT_02dd1184,
                        (CMatrix3x4f *)(param_1->height_cache[10] + _DAT_01b4d260 * 0xc));
    pCVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                       ((CDemonActor *)param_1,&local_4c,pCVar9);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0((CEnemy *)param_1,pCVar9,fVar13,pSVar14);
    break;
  case 7:
    if (param_1->height_cache_tags[0x15][0x43] == 0) {
      pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                         ((CDeformableModelInstance *)(param_1->height_cache[0] + 0x48),&local_d0,
                          _DAT_01b4d27c);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                ((CDemonActor *)param_1,&local_f4,pCVar9);
      core_fire_cpp_CFireEffect_createGunFlames_FUN_0048c3c0
                (0x01C08D04,&local_f4,param_1->height_cache,1,0);
      local_9c = param_1->height_cache[0][1];
      local_98 = param_1->height_cache[0][2];
      local_a0 = (float)param_1->height_cache[0][0] + 1.5897179988972888e-314._0_4_;
      core_fire_cpp_CFireEffect_createGunFlames_FUN_0048c3c0(0x01C08D04,&local_f4,&local_a0,1,0);
    }
    break;
  case 8:
    (**(code **)(param_1->height_cache[0][0x47] + 0x13c))
              ((CCharacter *)param_1,(int)param_2,&in_stack_fffffb6c->current_position);
    if (param_1->height_cache_tags[0x14][0x3d] == 0) {
      in_stack_fffffb6c = (CPathMap *)0x459862;
      in_stack_fffffb70 = param_1;
      iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030((CEnemy *)param_1,param_2);
      if (iVar4 != 0) {
        in_stack_fffffb70 = (CPathMap *)0xe;
        in_stack_fffffb6c = (CPathMap *)(param_1->height_cache[0] + 0x48);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  ((CMotionController *)in_stack_fffffb6c,0xe,1);
      }
    }
    else {
      if (((float)param_1->height_cache[0x17][5] < 20.0f) ||
         ((float)param_1->height_cache_tags[0x15][0x1f] < 0.0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  ((CMotionController *)(param_1->height_cache[0] + 0x48),0,1);
        local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
        param_1->height_cache_tags[0x15][0x1f] = (int)local_14;
      }
      in_stack_fffffb6c = (CPathMap *)(param_1->height_cache[0] + 0x48);
      if (param_1->height_cache_tags[0x15][0x23] == 0) {
        in_stack_fffffb70 = (CPathMap *)0x9;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  ((CMotionController *)in_stack_fffffb6c,9,1);
      }
      else {
        in_stack_fffffb70 = (CPathMap *)0x19;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  ((CMotionController *)in_stack_fffffb6c,0x19,1);
        param_1->height_cache_tags[0x15][0x23] = 0;
      }
    }
    break;
  case 9:
    if ((float)param_1->height_cache_tags[0x15][0x1e] <= 0.0) {
      _sprintf(local_3cc,"bride-%d?.wav",param_1->height_cache_tags[0x15][0x1b]);
      core_dracbrid_cpp_FUN_0045ab40(param_1,local_3cc,0x3f800000);
      iVar4 = core_actor_cpp_randomChance_FUN_0040dea0(0.2);
      if (iVar4 != 0) {
        core_dracbrid_cpp_FUN_0045ab40(param_1,local_3cc,0x3f800000);
      }
    }
    (**(code **)(param_1->height_cache[0][0x47] + 0x13c))
              ((CCharacter *)param_1,(int)param_2,&in_stack_fffffb6c->current_position);
    pCVar6 = (CPathMap *)(param_1->height_cache[0] + 0x48);
    if (param_1->height_cache_tags[0x14][0x3d] != 0) {
      if (0.0 <= (float)param_1->height_cache_tags[0x15][0x1f]) {
        fVar13 = 0.08726646;
        in_stack_fffffb70 = (CPathMap *)0x3f000000;
        local_58 = 0;
        local_50 = 2.0f;
        local_54 = 0;
        pCVar10 = (CDemonActor *)param_1->height_cache_tags[0x14][0x3d];
        in_stack_fffffb6c = (*((pCVar10->vtable)._ub)->getPathMap)(pCVar10);
        iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                          ((CCharacter *)param_1,
                           (CVector3f *)(param_1->height_cache_tags[0x14][0x3d] + 0x20),
                           in_stack_fffffb6c,&in_stack_fffffb70->current_position,fVar13,
                           in_stack_fffffb78);
        if (iVar4 < 0) {
          engine_console_cpp_CConsole_printf_FUN_0043ac60();
          in_stack_fffffb6c = (CPathMap *)0x459a38;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    ((CMotionController *)pCVar6,8,1);
          in_stack_fffffb70 = pCVar6;
        }
        else if (iVar4 < 1) {
          iVar4 = param_1->height_cache_tags[0x14][0x3d];
          local_124 = *(float *)(iVar4 + 0x20) - (float)(param_1->dest_voxel_coords).z;
          local_120 = *(float *)(iVar4 + 0x24) - (float)(param_1->grid_origin).x;
          local_11c = *(float *)(iVar4 + 0x28) - (float)(param_1->grid_origin).y;
          if (&local_7c != &local_124) {
            local_7c = local_124;
            local_78 = local_120;
            local_74 = local_11c;
          }
          if ((float)10 <
              SQRT(local_74 * local_74 + local_7c * local_7c + local_78 * local_78)) {
            in_stack_fffffb70 = (CPathMap *)0x459ac5;
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0();
            local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
            if (ABS(local_14) < (float)0.39269908168750001) {
              local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
              in_stack_fffffb70 = (CPathMap *)(param_1->height_cache[0] + 0x48);
              param_1->height_cache[0][1] = (int)(local_14 + (float)param_1->height_cache[0][1]);
              in_stack_fffffb6c = (CPathMap *)0x459b21;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        ((CMotionController *)in_stack_fffffb70,3,1);
            }
          }
        }
        else if ((float)param_1->height_cache_tags[0x14][0x3c] <= 0.0) {
          in_stack_fffffb6c = (CPathMap *)0x4599f5;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    ((CMotionController *)pCVar6,2,1);
          in_stack_fffffb70 = (CPathMap *)0x459a07;
          (**(code **)(param_1->height_cache[0][0x47] + 0x24))
                    ((CDemonActor *)param_1,"hotbride-bite?.wav");
          param_1->height_cache_tags[0x14][0x3c] = 0x3f800000;
        }
      }
      else {
        local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
        in_stack_fffffb70 = (CPathMap *)0x0;
        param_1->height_cache_tags[0x15][0x1f] = (int)local_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  ((CMotionController *)pCVar6,0,1);
        in_stack_fffffb6c = pCVar6;
      }
      break;
    }
    in_stack_fffffb6c = (CPathMap *)0x45996d;
    in_stack_fffffb70 = param_1;
    iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030((CEnemy *)param_1,param_2);
    if (iVar4 == 0) break;
LAB_00459978:
    in_stack_fffffb6c = (CPathMap *)(param_1->height_cache[0] + 0x48);
    in_stack_fffffb70 = (CPathMap *)0xe;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              ((CMotionController *)in_stack_fffffb6c,0xe,1);
    break;
  case 0xc:
    iVar4 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    iVar4 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0x104))(iVar4);
    if ((iVar4 == 0) &&
       (iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                          (0x01C03A10,(char *)(param_1->height_cache_tags[0x15] + 2)), iVar4 != 0)
       ) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                ((CMotionController *)(param_1->height_cache[0] + 0x48),0xd,1);
    }
    break;
  case 0xe:
    if ((float)param_1->height_cache_tags[0x15][0x1e] <= 0.0) {
      _sprintf(local_368,"bride-%d?.wav",param_1->height_cache_tags[0x15][0x1b]);
      core_dracbrid_cpp_FUN_0045ab40(param_1,local_368,0x3f800000);
      iVar4 = core_actor_cpp_randomChance_FUN_0040dea0(0.2);
      if (iVar4 != 0) {
        core_dracbrid_cpp_FUN_0045ab40(param_1,local_368,0x3f800000);
      }
    }
    (**(code **)(param_1->height_cache[0][0x47] + 0x13c))
              ((CCharacter *)param_1,(int)param_2,&in_stack_fffffb6c->current_position);
    fVar13 = 1.5f;
    pCVar15 = (CPathMap *)param_1->height_cache_tags[0x14][0x3d];
    pCVar6 = (CPathMap *)(param_1->height_cache[0] + 0x48);
    if (pCVar15 == (CPathMap *)0x0) {
      in_stack_fffffb6c = (CPathMap *)0x459df6;
      in_stack_fffffb70 = param_1;
      iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030((CEnemy *)param_1,param_2);
      if (iVar4 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  ((CMotionController *)pCVar6,0,1);
        in_stack_fffffb6c = pCVar6;
        in_stack_fffffb70 = pCVar15;
      }
    }
    else {
      local_34 = 1.5f;
      param_1->height_cache[0x16][0x47] = 0;
      param_1->height_cache[0x16][0x46] = param_1->height_cache[0x16][0x47];
      param_1->height_cache[0x16][0x45] = param_1->height_cache[0x16][0x46];
      local_1a8 = 0;
      local_1a4 = 0;
      fVar16 = 0.08726646;
      local_1a0 = fVar13;
      in_stack_fffffb70 = (CPathMap *)0x3f000000;
      pCVar10 = (CDemonActor *)param_1->height_cache_tags[0x14][0x3d];
      in_stack_fffffb6c = (*((pCVar10->vtable)._ub)->getPathMap)(pCVar10);
      iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                        ((CCharacter *)param_1,
                         (CVector3f *)(param_1->height_cache_tags[0x14][0x3d] + 0x20),
                         in_stack_fffffb6c,&in_stack_fffffb70->current_position,fVar16,
                         in_stack_fffffb78);
      if (iVar4 < 0) {
        engine_console_cpp_CConsole_printf_FUN_0043ac60();
        in_stack_fffffb6c = (CPathMap *)0x459f2a;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  ((CMotionController *)pCVar6,0,1);
        in_stack_fffffb70 = pCVar6;
      }
      else if ((0 < iVar4) && ((float)param_1->height_cache_tags[0x14][0x3c] <= 0.0)) {
        in_stack_fffffb70 = (CPathMap *)0x459eae;
        iVar4 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2);
        if (iVar4 == 0) {
          in_stack_fffffb6c = (CPathMap *)0x459f3c;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    ((CMotionController *)pCVar6,0x13,1);
          in_stack_fffffb70 = pCVar6;
        }
        if (iVar4 == 1) {
          in_stack_fffffb70 = (CPathMap *)(param_1->height_cache[0] + 0x48);
          in_stack_fffffb6c = (CPathMap *)0x459ecf;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    ((CMotionController *)in_stack_fffffb70,0x14,1);
        }
        if (iVar4 == 2) {
          in_stack_fffffb6c = (CPathMap *)0x459ee7;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    ((CMotionController *)(param_1->height_cache[0] + 0x48),0x15,1);
          in_stack_fffffb70 = (CPathMap *)0x459ef9;
          (**(code **)(param_1->height_cache[0][0x47] + 0x24))
                    ((CDemonActor *)param_1,"hotbride-swipe?.wav");
        }
        param_1->height_cache_tags[0x14][0x3c] = 0x3f800000;
      }
    }
    break;
  case 0xf:
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,(char *)(param_1->height_cache_tags[0x15] + 2));
    if (iVar4 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                ((CMotionController *)(param_1->height_cache[0] + 0x48),0xb,1);
    }
    break;
  case 0x10:
    goto switchD_00459f4d_caseD_10;
  case 0x11:
    if ((param_1->height_cache_tags[0x14][0x38] != 0) || (param_1->height_cache[0][0x2b] != 0))
    break;
    pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                       ((CDeformableModelInstance *)(param_1->height_cache[0] + 0x48),&local_1b4,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              ((CDemonActor *)param_1,&local_1cc,pCVar9);
    core_gore_cpp_CGore_createBloodPool_FUN_004b0480((CGore *)INT_005b96c4,&local_1cc,0);
    goto switchD_00459f4d_caseD_10;
  case 0x12:
    iVar4 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    iVar4 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0x104))(iVar4);
    if ((iVar4 == 0) &&
       (iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                          (0x01C03A10,(char *)(param_1->height_cache_tags[0x15] + 2)), iVar4 != 0)
       ) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                ((CMotionController *)(param_1->height_cache[0] + 0x48),0xd,1);
    }
    break;
  case 0x13:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_2c8);
    local_2c8.damage_amount =
         (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40e00000,0x41700000);
    pSVar14 = &local_2c8;
    local_2c8.attacker = (CDemonActor *)param_1;
    local_2c8.wielder = (CDemonActor *)param_1;
    fVar13 = 0.4;
    local_14 = local_2c8.damage_amount;
    pCVar9 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                       (&local_13c,(CVector3f *)&DAT_02dd1184,
                        (CMatrix3x4f *)(param_1->height_cache[10] + _DAT_01b4d260 * 0xc));
    pCVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                       ((CDemonActor *)param_1,&local_94,pCVar9);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0((CEnemy *)param_1,pCVar9,fVar13,pSVar14);
    param_1->height_cache_tags[0x15][0x23] = 1;
    break;
  case 0x14:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_214);
    local_214.damage_amount =
         (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40e00000,0x41700000);
    pSVar14 = &local_214;
    local_214.attacker = (CDemonActor *)param_1;
    local_214.wielder = (CDemonActor *)param_1;
    fVar13 = 0.4;
    local_14 = local_214.damage_amount;
    pCVar9 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                       (&local_88,(CVector3f *)&DAT_02dd1184,
                        (CMatrix3x4f *)(param_1->height_cache[10] + _DAT_01b4d260 * 0xc));
    pCVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                       ((CDemonActor *)param_1,&local_16c,pCVar9);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0((CEnemy *)param_1,pCVar9,fVar13,pSVar14);
    param_1->height_cache_tags[0x15][0x23] = 1;
    break;
  case 0x15:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_250);
    local_250.damage_amount =
         (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40e00000,0x41700000);
    pSVar14 = &local_250;
    local_250.attacker = (CDemonActor *)param_1;
    local_250.wielder = (CDemonActor *)param_1;
    fVar13 = 0.4;
    local_14 = local_250.damage_amount;
    pCVar9 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                       (&local_1c0,(CVector3f *)&DAT_02dd1184,
                        (CMatrix3x4f *)(param_1->height_cache[10] + _DAT_01b4d268 * 0xc));
    pCVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                       ((CDemonActor *)param_1,&local_154,pCVar9);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0((CEnemy *)param_1,pCVar9,fVar13,pSVar14);
    break;
  case 0x17:
    if ((float)param_1->height_cache_tags[0x15][0x1e] <= 0.0) {
      _sprintf(&stack0xfffffb6c,"bride-%d?.wav",param_1->height_cache_tags[0x15][0x1b]);
      core_dracbrid_cpp_FUN_0045ab40(param_1,&stack0xfffffb6c,0x3f800000);
      iVar4 = core_actor_cpp_randomChance_FUN_0040dea0(0.2);
      if (iVar4 != 0) {
        core_dracbrid_cpp_FUN_0045ab40(param_1,&stack0xfffffb6c,0x3f800000);
      }
    }
    switch(param_1->height_cache_tags[0x15][0x1c]) {
    case 0:
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                ((CMotionController *)(param_1->height_cache[0] + 0x48),0,1);
      break;
    case 1:
      fVar13 = (float)param_1->height_cache_tags[0x15][0x1d] + param_2;
      param_1->height_cache_tags[0x15][0x1d] = (int)fVar13;
      if (1.0f < fVar13) {
        param_1->height_cache_tags[0x15][0x1c] = 2;
        param_1->height_cache_tags[0x15][0x1d] = (int)1.0f;
      }
      local_2c = (CDeformableModelInstance *)(param_1->height_cache[0] + 0x48);
      iVar4 = 0;
      local_148.x = 0.0;
      local_148.y = 3.0;
      local_148.z = 0.0;
      pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(local_2c);
      if (0 < pCVar7->bone_count) {
        local_24 = local_2c;
        do {
          pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                             (local_24,&local_64,iVar4);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                    ((CDemonActor *)param_1,&local_118,pCVar9);
          iVar4 = iVar4 + 1;
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
                    (0x01C08D04,&local_118,0.5,&local_148,0xffff);
        } while (iVar4 < pCVar7->bone_count);
      }
      break;
    case 2:
      local_30 = 1;
      local_1c = 0;
      piVar8 = param_1->height_cache_tags[0x15] + 0x20;
      for (local_18 = 0; fVar13 = 1.0f, local_18 < (int)0x01E57284->actors[0x6d6];
          local_18 = local_18 + 1) {
        pCVar6 = *(CPathMap **)((int)0x01E57284->actors + local_1c + 0x1b5c);
        if (((pCVar6 != (CPathMap *)0x0) && (pCVar6 != param_1)) &&
           (iVar4 = (**(code **)((int)(&((UOrientationVector *)pCVar6->height_cache)->vec)[0x17].z +
                                0x104))((CCharacter *)pCVar6), iVar4 < 1)) {
          local_19c = (((CLocation *)&(pCVar6->dest_voxel_coords).z)->position).x - (float)*piVar8;
          local_198 = (float)(pCVar6->grid_origin).x - (float)param_1->height_cache_tags[0x15][0x21]
          ;
          local_194 = (float)(pCVar6->grid_origin).y - (float)param_1->height_cache_tags[0x15][0x22]
          ;
          if (SQRT(local_194 * local_194 + local_19c * local_19c + local_198 * local_198) <
              (float)5) goto switchD_00458fa0_default;
        }
        local_1c = local_1c + 4;
      }
      if (local_30 != 0) {
        param_1->height_cache_tags[0x15][0x1c] = 3;
        piVar1 = &(param_1->dest_voxel_coords).z;
        param_1->height_cache_tags[0x15][0x1d] = (int)fVar13;
        *piVar1 = *piVar8;
        (param_1->grid_origin).x = param_1->height_cache_tags[0x15][0x21];
        (param_1->grid_origin).y = param_1->height_cache_tags[0x15][0x22];
        iVar4 = param_1->height_cache_tags[0x14][0x3d];
        if (iVar4 != 0) {
          local_dc = *(float *)(iVar4 + 0x20) - (float)*piVar1;
          local_d8 = *(float *)(iVar4 + 0x24) - (float)(param_1->grid_origin).x;
          local_d4 = *(float *)(iVar4 + 0x28) - (float)(param_1->grid_origin).y;
          piVar8 = (int *)core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                                    (local_190,&local_dc);
          if (param_1->height_cache != (int (*) [100])piVar8) {
            param_1->height_cache[0][0] = *piVar8;
            param_1->height_cache[0][1] = piVar8[1];
            param_1->height_cache[0][2] = piVar8[2];
          }
          param_1->height_cache[0][2] = 0;
          param_1->height_cache[0][0] = 0;
        }
        (**(code **)(param_1->height_cache[0][0x47] + 0x24))
                  ((CDemonActor *)param_1,"hotbride-disappear.wav");
      }
      break;
    case 3:
      local_c4.x = 0.0;
      local_c4.z = 0.0;
      this_ptr_00 = (CDeformableModelInstance *)(param_1->height_cache[0] + 0x48);
      iVar4 = 0;
      local_c4.y = 3.0;
      local_20 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr_00)
      ;
      if (0 < local_20->bone_count) {
        do {
          pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                             (this_ptr_00,&local_10c,iVar4);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                    ((CDemonActor *)param_1,&local_130,pCVar9);
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
                    (0x01C08D04,&local_130,0.5,&local_c4,0xffff);
          iVar4 = iVar4 + 1;
        } while (iVar4 < local_20->bone_count);
      }
      fVar13 = (float)param_1->height_cache_tags[0x15][0x1d] - param_2;
      param_1->height_cache_tags[0x15][0x1d] = (int)fVar13;
      if (fVar13 < 0.0) {
        param_1->height_cache_tags[0x15][0x1d] = 0;
        param_1->height_cache_tags[0x15][0x1c] = 0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  ((CMotionController *)this_ptr_00,0xe,1);
        local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40000000,0x41a00000)
        ;
        param_1->height_cache_tags[0x15][0x1f] = (int)local_14;
      }
    }
    break;
  case 0x1a:
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,(char *)(param_1->height_cache_tags[0x15] + 2));
    if (iVar4 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                ((CMotionController *)(param_1->height_cache[0] + 0x48),0,1);
    }
  }
switchD_00458fa0_default:
  if (0.0 < (float)param_1->height_cache_tags[0x14][0x3c]) {
    param_1->height_cache_tags[0x14][0x3c] =
         (int)((float)param_1->height_cache_tags[0x14][0x3c] - param_2);
  }
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     ((CMotionController *)(param_1->height_cache[0] + 0x48));
  local_28 = pSVar5->state_index;
  if ((((local_28 != 0x11) && (local_28 != 0x10)) && (local_28 != 0xf)) ||
     (param_1->height_cache[0][0x2b] != 0)) {
    if (local_28 == 3) {
      param_1->height_cache[0x16][0x47] =
           (int)((float)param_1->height_cache[0x16][0x47] * (float)2);
    }
    pCVar11 = (CCharacter *)param_1->height_cache_tags[0x14][0x3d];
    if ((pCVar11 != (CCharacter *)0x0) &&
       (pCVar6 = (CPathMap *)
                 (*(((pCVar11->base).vtable._uc)->_uc).applyDamage)
                           (pCVar11,(int)in_stack_fffffb6c,(float)in_stack_fffffb70),
       pCVar6 == param_1)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                (0x01E57284,(CDemonActor *)param_1->height_cache_tags[0x14][0x3d]);
    }
    param_1->height_cache[0x17][1] =
         (int)((float)param_1->height_cache[0x17][1] - param_2 * (float)32);
    local_160 = (float)param_1->height_cache[0x17][0] * param_2;
    local_15c = (float)param_1->height_cache[0x17][1] * param_2;
    piVar8 = param_1->height_cache[0x16] + 0x61;
    local_158 = param_2 * (float)param_1->height_cache[0x17][2];
    piVar1 = param_1->height_cache[0x16] + 0x45;
    local_1d8 = local_160 + (float)*piVar8;
    local_1d4 = local_15c + (float)param_1->height_cache[0x16][0x62];
    local_1d0 = local_158 + (float)param_1->height_cache[0x16][99];
    local_e8.x = local_1d8 + (float)*piVar1;
    local_e8.y = local_1d4 + (float)param_1->height_cache[0x16][0x46];
    local_e8.z = local_1d0 + (float)param_1->height_cache[0x16][0x47];
    param_1->height_cache[0x16][99] = 0;
    param_1->height_cache[0x16][0x62] = param_1->height_cache[0x16][99];
    *piVar8 = param_1->height_cache[0x16][0x62];
    param_1->height_cache[0x16][0x47] = 0;
    fVar13 = (float)param_1->height_cache[0x16][0x47];
    param_1->height_cache[0x16][0x46] = (int)fVar13;
    *piVar1 = (int)fVar13;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)param_1,&local_e8);
  }
  if (local_28 != 0x17) {
    param_1->height_cache_tags[0x15][0x1c] = 0;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
            ((CDeformableModelInstance *)(param_1->height_cache[0] + 0x48));
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  return;
switchD_00459f4d_caseD_10:
  param_1->height_cache_tags[0x14][0x38] = 1;
  goto switchD_00458fa0_default;
}

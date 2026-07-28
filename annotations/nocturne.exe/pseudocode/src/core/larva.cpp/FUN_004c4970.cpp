// Name: core_larva.cpp_FUN_004c4970
// Address: 004c4970
// Address Range: [[004c4970, 004c5241]]
// Convention: unknown
// Signature: void core_larva_cpp_FUN_004c4970(CPathMap *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004c518e) */

void core_larva_cpp_FUN_004c4970(CPathMap *param_1,float param_2)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  CCharacter *this_ptr;
  CDemonActor *this_ptr_00;
  float fVar4;
  int iVar5;
  SMotion *pSVar6;
  CPathMap *pCVar7;
  CVector3f *input_local_point;
  float *pfVar8;
  uint uVar9;
  unkbyte10 Var10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  CPathMap *in_stack_fffffe10;
  CPathMap *in_stack_fffffe14;
  CPathMap *pCVar16;
  float fVar17;
  float in_stack_fffffe1c;
  CVector3f local_11c;
  uint local_110;
  uint local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  CVector3f local_e0;
  float local_d4;
  float local_d0;
  float local_cc;
  CVector3f local_c8;
  CVector3f local_bc;
  CVector3f local_b0 [2];
  float local_98;
  float local_94;
  float local_90;
  CVector3f local_8c [2];
  CVector3f local_74;
  double local_68;
  double local_60;
  float local_54;
  float local_44;
  float local_40;
  uint local_3c;
  float local_38;
  uint local_30;
  float local_2c;
  uint local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar5 = core_charactr_cpp_FUN_004259f0(param_1);
  if (iVar5 == 0) {
    return;
  }
  param_1->height_cache[0x16][0x47] = 0;
  piVar1 = &(param_1->dest_voxel_coords).z;
  param_1->height_cache[0x16][0x46] = param_1->height_cache[0x16][0x47];
  param_1->height_cache[0x16][0x45] = param_1->height_cache[0x16][0x46];
  local_18 = param_2 * (float)param_1->height_cache_tags[0x14][0x37];
  pCVar7 = (CPathMap *)(param_1->height_cache[0] + 0x48);
  while (0.0 < local_18) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      ((CMotionController *)pCVar7,&local_18);
    if ((iVar5 == 100) && (iVar5 = param_1->height_cache_tags[0x14][0x3d], iVar5 != 0)) {
      local_d4 = *(float *)(iVar5 + 0x20) - (float)*piVar1;
      local_d0 = *(float *)(iVar5 + 0x24) - (float)(param_1->grid_origin).x;
      local_cc = *(float *)(iVar5 + 0x28) - (float)(param_1->grid_origin).y;
      if (&local_ec != &local_d4) {
        local_ec = local_d4;
        local_e8 = local_d0;
        local_e4 = local_cc;
      }
      local_e8 = local_e8 + 2.0f;
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xc0000000);
      local_ec = local_14 + local_ec;
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xc0000000);
      Var10 = fsin((float10)-0.52359877558333301);
      fVar15 = (float10)fptan((float10)0.52359877558333301);
      fVar13 = (float10)local_14 + (float10)local_e4;
      local_e4 = (float)fVar13;
      fVar14 = atan2((float10)local_ec,fVar13);
      fVar3 = SQRT(local_ec * local_ec + local_e4 * local_e4);
      fVar11 = (float10)fcos(Var10);
      fVar12 = (float10)fsin(fVar14);
      fVar14 = (float10)fcos(fVar14);
      local_60 = (double)fVar3;
      local_24 = fVar3 * (float)32 * fVar3;
      fVar13 = fVar11 * (float10)2.0f * fVar11 *
               (fVar13 * (float10)fVar3 - (float10)local_e8);
      local_b0[0].y = (float)-fVar15;
      local_20 = (float)fVar13;
      local_b0[0].x = (float)(fVar12 * fVar11);
      local_b0[0].z = (float)(fVar14 * fVar11);
      if ((float10)0 < fVar13) {
        local_1c = SQRT(local_24 / local_20);
        local_8c[0].x = local_b0[0].x * local_1c;
        local_8c[0].y = local_b0[0].y * local_1c;
        local_8c[0].z = local_b0[0].z * local_1c;
        if (local_b0 != local_8c) {
          local_b0[0].x = local_8c[0].x;
          local_b0[0].y = local_8c[0].y;
          local_b0[0].z = local_8c[0].z;
        }
        local_11c.z = 1.0;
        local_11c.x = 0.0;
        local_11c.y = 0.5;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)param_1,&local_74,&local_11c);
        core_fire_cpp_CFireEffect_createFireball_FUN_0048b270(0x01C08D04,&local_74,local_b0,2,0);
        (**(code **)(param_1->height_cache[0][0x47] + 0x24))
                  ((CDemonActor *)param_1,"larva-blow1.wav");
      }
    }
  }
  fVar3 = (float)param_1->height_cache_tags[0x14][0x37];
  fVar4 = (float)0.39269908168750001;
  fVar17 = (float)3;
  param_1->height_cache[0x17][3] = param_1->height_cache[0x16][0x47];
  param_1->height_cache[0x17][4] = (int)(param_2 * fVar4 * fVar3 * fVar17);
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     ((CMotionController *)pCVar7);
  local_30 = pSVar6->state_index;
  local_28 = local_30;
  iVar5 = core_charactr_cpp_FUN_00428c00(param_1);
  if (iVar5 == 0) {
    if (local_28 == 0) {
      (**(code **)(param_1->height_cache[0][0x47] + 0x13c))
                ((CCharacter *)param_1,(int)param_2,&in_stack_fffffe10->current_position);
      iVar5 = param_1->height_cache_tags[0x14][0x3d];
      if (iVar5 == 0) {
        in_stack_fffffe10 = (CPathMap *)0x4c4e81;
        in_stack_fffffe14 = param_1;
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030((CEnemy *)param_1,param_2);
        if (iVar5 != 0) {
          in_stack_fffffe14 = (CPathMap *)0x1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    ((CMotionController *)pCVar7,1,1);
          in_stack_fffffe10 = pCVar7;
        }
      }
      else {
        fVar3 = *(float *)(iVar5 + 0x20) - (float)*piVar1;
        fVar17 = *(float *)(iVar5 + 0x24) - (float)(param_1->grid_origin).x;
        fVar4 = *(float *)(iVar5 + 0x28) - (float)(param_1->grid_origin).y;
        local_54 = fVar4 * fVar4 + fVar3 * fVar3 + fVar17 * fVar17;
        local_2c = (float)(((int)local_54 >> 1) + (int)CVector3f_01c70708.y);
        in_stack_fffffe10 = (CPathMap *)0x4c4f00;
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0();
        in_stack_fffffe14 = (CPathMap *)0x4c4f14;
        local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
        if (((float)0.39269908168750001 <= ABS(local_14)) || ((float)12 < local_2c)) {
          in_stack_fffffe14 = (CPathMap *)0x1;
          in_stack_fffffe10 = (CPathMap *)(param_1->height_cache[0] + 0x48);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    ((CMotionController *)in_stack_fffffe10,1,1);
        }
        else if ((float)param_1->height_cache_tags[0x14][0x3c] <= 0.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    ((CMotionController *)pCVar7,2,1);
          in_stack_fffffe14 = (CPathMap *)0x41700000;
          in_stack_fffffe10 = (CPathMap *)0x4c4f67;
          local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
          param_1->height_cache_tags[0x14][0x3c] = (int)local_14;
        }
      }
    }
    else if (local_28 < 2) {
      (**(code **)(param_1->height_cache[0][0x47] + 0x13c))
                ((CCharacter *)param_1,(int)param_2,&in_stack_fffffe10->current_position);
      fVar3 = 20.0f;
      pCVar16 = (CPathMap *)param_1->height_cache_tags[0x14][0x3d];
      if (pCVar16 == (CPathMap *)0x0) {
        in_stack_fffffe10 = (CPathMap *)0x4c4fbf;
        in_stack_fffffe14 = param_1;
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030((CEnemy *)param_1,param_2);
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    ((CMotionController *)pCVar7,0,1);
          in_stack_fffffe10 = pCVar7;
          in_stack_fffffe14 = pCVar16;
        }
      }
      else {
        local_38 = 20.0f;
        param_1->height_cache[0x16][0x47] = 0;
        param_1->height_cache[0x16][0x46] = param_1->height_cache[0x16][0x47];
        param_1->height_cache[0x16][0x45] = param_1->height_cache[0x16][0x46];
        local_110 = 0;
        local_10c = 0;
        fVar17 = 0.17453292;
        local_108 = fVar3;
        in_stack_fffffe14 = (CPathMap *)0x3f000000;
        this_ptr_00 = (CDemonActor *)param_1->height_cache_tags[0x14][0x3d];
        in_stack_fffffe10 = (*((this_ptr_00->vtable)._ub)->getPathMap)(this_ptr_00);
        iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                          ((CCharacter *)param_1,
                           (CVector3f *)(param_1->height_cache_tags[0x14][0x3d] + 0x20),
                           in_stack_fffffe10,&in_stack_fffffe14->current_position,fVar17,
                           in_stack_fffffe1c);
        if (iVar5 < 0) {
          engine_console_cpp_CConsole_printf_FUN_0043ac60();
          in_stack_fffffe10 = (CPathMap *)0x4c5176;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    ((CMotionController *)pCVar7,0,1);
          in_stack_fffffe14 = pCVar7;
        }
        if ((float)param_1->height_cache_tags[0x14][0x3c] <= 0.0) {
          iVar5 = param_1->height_cache_tags[0x14][0x3d];
          local_f8 = *(float *)(iVar5 + 0x20) - (float)(param_1->dest_voxel_coords).z;
          local_f4 = *(float *)(iVar5 + 0x24) - (float)(param_1->grid_origin).x;
          local_f0 = *(float *)(iVar5 + 0x28) - (float)(param_1->grid_origin).y;
          local_44 = local_f0 * local_f0 + local_f8 * local_f8 + local_f4 * local_f4;
          local_40 = (float)(((int)local_44 >> 1) + (int)CVector3f_01c70708.y);
          if (local_40 < (float)param_1->height_cache_tags[0x14][0x3b]) {
            in_stack_fffffe14 = (CPathMap *)0x4c50cb;
            pfVar8 = (float *)core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0();
            if (&local_f8 != pfVar8) {
              local_f8 = *pfVar8;
              local_f4 = pfVar8[1];
              local_f0 = pfVar8[2];
            }
            local_3c = core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
            local_14 = (float)local_3c;
            local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
            local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
            if (ABS(local_14) < (float)0.39269908168750001) {
              in_stack_fffffe14 = (CPathMap *)(param_1->height_cache[0] + 0x48);
              in_stack_fffffe10 = (CPathMap *)0x4c5145;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        ((CMotionController *)in_stack_fffffe14,2,1);
              param_1->height_cache_tags[0x14][0x3c] = 0x40c00000;
            }
          }
        }
      }
    }
    else if (((local_28 == 5) && (param_1->height_cache_tags[0x14][0x38] == 0)) &&
            (param_1->height_cache[0][0x2b] == 0)) {
      input_local_point =
           core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                     ((CDeformableModelInstance *)pCVar7,&local_c8,0);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                ((CDemonActor *)param_1,&local_e0,input_local_point);
      core_gore_cpp_CGore_createBloodPool_FUN_004b0480((CGore *)INT_005b96c4,&local_e0,1);
      param_1->height_cache_tags[0x14][0x38] = 1;
    }
    goto LAB_004c4a74;
  }
  uVar9 = param_1->height_cache[0x17][0x62];
  if (uVar9 < 2) {
    if (uVar9 == 1) {
LAB_004c4a49:
      iVar5 = 1;
    }
    else {
LAB_004c4df1:
      iVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              ((CMotionController *)(param_1->height_cache[0] + 0x48),iVar5,1);
  }
  else {
    if (uVar9 < 3) goto LAB_004c4a49;
    if (uVar9 != 3) goto LAB_004c4df1;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0((CMotionController *)pCVar7,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60();
  }
  param_1->height_cache[0x16][0x47] = 0;
  param_1->height_cache[0x16][0x46] = param_1->height_cache[0x16][0x47];
  param_1->height_cache[0x16][0x45] = param_1->height_cache[0x16][0x46];
LAB_004c4a74:
  if (0.0 < (float)param_1->height_cache_tags[0x14][0x3c]) {
    param_1->height_cache_tags[0x14][0x3c] =
         (int)((float)param_1->height_cache_tags[0x14][0x3c] - param_2);
  }
  if (local_30 == 1) {
    iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->height_cache_tags[0x14][0x5f]);
    if (iVar5 == 0) {
      fVar15 = (float10)1;
      fVar13 = (float10)1.4426950408889634 *
               (float10)0.6931471805599453 * (float10)(float)param_1->height_cache[0x18][0x19] *
               (float10)-0.20000000000000001;
      fVar14 = (float10)f2xm1(fVar13 - (fVar13 / fVar15) * fVar15);
      fVar15 = (float10)fscale(fVar14 + fVar15,fVar13);
      local_68 = (double)fVar15;
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3f7d70a4,0x3f8147ae);
      _sprintf(&stack0xfffffe10,"slime.wav @%f *%f",
                 (double)(float)param_1->height_cache[0x18][0x19],
                 (double)(local_14 * (float)local_68));
      uVar9 = (**(code **)(param_1->height_cache[0][0x47] + 0x28))
                        ((CDemonActor *)param_1,&stack0xfffffe10);
      param_1->height_cache_tags[0x14][0x5f] = uVar9;
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00527230(param_1->height_cache_tags[0x14][0x5f]);
  }
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960((CCharacter *)param_1);
  if (iVar5 != 0) {
    this_ptr = (CCharacter *)param_1->height_cache_tags[0x14][0x3d];
    if ((this_ptr != (CCharacter *)0x0) &&
       (pCVar7 = (CPathMap *)
                 (*(((this_ptr->base).vtable._uc)->_uc).applyDamage)
                           (this_ptr,(int)in_stack_fffffe10,(float)in_stack_fffffe14),
       pCVar7 == param_1)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                (0x01E57284,(CDemonActor *)param_1->height_cache_tags[0x14][0x3d]);
    }
    param_1->height_cache[0x17][1] =
         (int)((float)param_1->height_cache[0x17][1] - param_2 * (float)32);
    local_104 = (float)param_1->height_cache[0x17][0] * param_2;
    local_100 = (float)param_1->height_cache[0x17][1] * param_2;
    piVar1 = param_1->height_cache[0x16] + 0x61;
    local_fc = param_2 * (float)param_1->height_cache[0x17][2];
    piVar2 = param_1->height_cache[0x16] + 0x45;
    local_98 = local_104 + (float)*piVar1;
    local_94 = local_100 + (float)param_1->height_cache[0x16][0x62];
    local_90 = local_fc + (float)param_1->height_cache[0x16][99];
    local_bc.x = local_98 + (float)*piVar2;
    local_bc.y = local_94 + (float)param_1->height_cache[0x16][0x46];
    local_bc.z = local_90 + (float)param_1->height_cache[0x16][0x47];
    param_1->height_cache[0x16][99] = 0;
    param_1->height_cache[0x16][0x62] = param_1->height_cache[0x16][99];
    *piVar1 = param_1->height_cache[0x16][0x62];
    param_1->height_cache[0x16][0x47] = 0;
    fVar3 = (float)param_1->height_cache[0x16][0x47];
    param_1->height_cache[0x16][0x46] = (int)fVar3;
    *piVar2 = (int)fVar3;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)param_1,&local_bc);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
            ((CDeformableModelInstance *)(param_1->height_cache[0] + 0x48));
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  return;
}

// Name: core_mobster.cpp_FUN_004da790
// Address: 004da790
// Address Range: [[004da790, 004db6e3]]
// Convention: unknown
// Signature: void core_mobster_cpp_FUN_004da790(CPathMap *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mobster_cpp_FUN_004da790(CPathMap *param_1,float param_2)

{
  int *piVar1;
  int *piVar2;
  CCharacter *this_ptr;
  CDemonActor_vtable *pCVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  SMotion *pSVar7;
  int iVar8;
  CPathMap *pCVar9;
  CDemonActor *pCVar10;
  CVector3f *pCVar11;
  int in_stack_fffffe64;
  float fVar12;
  SDamageInfo *pSVar13;
  CPathMap *in_stack_fffffe70;
  CPathMap *in_stack_fffffe74;
  _FILE *in_stack_fffffe7c;
  int *in_stack_fffffe84;
  _FILE *in_stack_fffffe8c;
  uint in_stack_fffffe94;
  SDamageInfo local_160;
  float local_124;
  float local_120;
  float local_11c;
  CVector3f local_118;
  float local_10c;
  float local_108;
  float local_104;
  CVector3f local_100 [2];
  float local_e8;
  float local_e4;
  float local_e0;
  CVector3f local_dc;
  float local_d0;
  float local_cc;
  float local_c8;
  CVector3f local_c4;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  int local_a0;
  int local_9c;
  float local_98;
  CVector3f local_94;
  int local_88;
  uint local_84;
  char local_80 [4];
  CVector3f local_7c [2];
  uint local_64;
  uint local_60;
  float local_5c;
  CVector3f local_4c;
  float local_38;
  float local_34;
  float local_30;
  CDemonActor *local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar5 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar5 == 0) {
    if (param_1->height_cache_tags[0x15][2] != 0) {
      core_mobster_cpp_CMobster_positionOnVehicle_FUN_004da5a0((CMobster *)param_1);
      core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_00429220((CCharacter *)param_1,param_2);
    }
    return;
  }
  if (param_1->height_cache[0x16][param_1->height_cache_tags[0x15][0x2c]] == 0) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xfffffe64);
    (**(code **)(param_1->height_cache[0][0x47] + 0x100))
              ((CCharacter *)param_1,(CDemonActor *)&stack0xfffffe64,in_stack_fffffe64);
  }
  if (param_1->height_cache_tags[0x10][0x34] != 0) {
    param_1->height_cache_tags[0x10][0x35] = 0;
  }
  if (0 < param_1->height_cache[0x1d][0x62]) {
    (**(code **)(param_1->height_cache[0][0x47] + 0x120))((CCharacter *)param_1);
    (**(code **)(param_1->height_cache[0][0x47] + 0x120))((CCharacter *)param_1);
    sound_sndmain_cpp_killSfx_FUN_00527230(param_1->height_cache_tags[0x15][0x1f]);
    in_stack_fffffe70 = (CPathMap *)0x4da857;
    in_stack_fffffe74 = param_1;
    iVar5 = (**(code **)(param_1->height_cache[0][0x47] + 0x104))((CCharacter *)param_1);
    if (iVar5 == 0) {
      in_stack_fffffe74 = (CPathMap *)0x4da86a;
      iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->height_cache_tags[0x15][0x21]);
      if (iVar5 == 0) {
        in_stack_fffffe74 = (CPathMap *)0x4da9a3;
        iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->height_cache_tags[0x15][0x1e]);
        if (iVar5 == 0) {
          in_stack_fffffe70 = (CPathMap *)0x4da9bd;
          in_stack_fffffe74 = param_1;
          uVar6 = (**(code **)(param_1->height_cache[0][0x47] + 0x24))
                            ((CDemonActor *)param_1,"mob-scream?.wav");
          param_1->height_cache_tags[0x15][0x21] = uVar6;
        }
      }
    }
  }
  fVar12 = (float)param_1->height_cache_tags[0x15][0x2e] - param_2;
  param_1->height_cache_tags[0x15][0x2e] = (int)fVar12;
  if (fVar12 < 0.0) {
    param_1->height_cache_tags[0x15][0x2e] = 0;
  }
  fVar12 = (float)param_1->height_cache_tags[0x14][99] - param_2;
  param_1->height_cache_tags[0x14][99] = (int)fVar12;
  if (fVar12 < 0.0) {
    param_1->height_cache_tags[0x14][99] = 0;
  }
  if (param_1->height_cache[0x16][param_1->height_cache_tags[0x15][0x25]] == 0) {
    (**(code **)(param_1->height_cache[0][0x47] + 0x120))((CCharacter *)param_1);
  }
  if (param_1->height_cache[0x16][param_1->height_cache_tags[0x15][0x23]] == 0) {
    (**(code **)(param_1->height_cache[0][0x47] + 0x120))((CCharacter *)param_1);
  }
  if ((param_1->height_cache_tags[0x15][4] == 0) &&
     (iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                        (0x01C03A10,(char *)(param_1->height_cache_tags[0x15] + 5)), iVar5 != 0))
  {
    param_1->height_cache_tags[0x15][4] = 1;
  }
  param_1->height_cache[0x16][0x47] = 0;
  param_1->height_cache[0x16][0x46] = param_1->height_cache[0x16][0x47];
  param_1->height_cache[0x16][0x45] = param_1->height_cache[0x16][0x46];
  local_38 = param_2 * (float)param_1->height_cache_tags[0x14][0x37];
  pCVar9 = (CPathMap *)(param_1->height_cache[0] + 0x48);
  while (0.0 < local_38) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      ((CMotionController *)pCVar9,&local_38);
    if (iVar5 == 100) {
      pCVar10 = (CDemonActor *)param_1->height_cache_tags[0x14][0x60];
      if (pCVar10 != (CDemonActor *)0x0) {
        param_1->height_cache_tags[0x14][0x60] = 0;
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428f40
                  ((CCharacter *)param_1,1,pCVar10,0.2);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)param_1,iVar5);
    }
  }
  fVar12 = (float)param_1->height_cache_tags[0x14][0x37];
  fVar4 = (float)3.1415926535000001;
  param_1->height_cache[0x17][3] = param_1->height_cache[0x16][0x47];
  param_1->height_cache[0x17][4] = (int)(param_2 * fVar4 * fVar12);
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     ((CMotionController *)pCVar9);
  iVar5 = pSVar7->state_index;
  iVar8 = core_charactr_cpp_FUN_00428c00();
  if (iVar8 == 0) {
    switch(iVar5) {
    case 0:
      if (param_1->height_cache_tags[0x15][4] == 0) {
        (**(code **)(param_1->height_cache[0][0x47] + 0x13c))
                  ((CCharacter *)param_1,(int)param_2,&in_stack_fffffe70->current_position);
        if (param_1->height_cache_tags[0x14][0x3d] == 0) {
          in_stack_fffffe70 = (CPathMap *)0x4db15d;
          in_stack_fffffe74 = param_1;
          iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030((CEnemy *)param_1,param_2);
          if (iVar5 != 0) {
            in_stack_fffffe74 = (CPathMap *)0x1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      ((CMotionController *)pCVar9,1,1);
            in_stack_fffffe70 = pCVar9;
          }
          break;
        }
        iVar5 = param_1->height_cache_tags[0x15][1];
        if (iVar5 != 0) {
          if (param_1->height_cache_tags[0x15][0] == 0) {
            local_d0 = (float)(param_1->dest_voxel_coords).z - *(float *)(iVar5 + 0x20);
            local_cc = (float)(param_1->grid_origin).x - *(float *)(iVar5 + 0x24);
            local_c8 = (float)(param_1->grid_origin).y - *(float *)(iVar5 + 0x28);
            if ((float)2 <
                SQRT(local_c8 * local_c8 + local_d0 * local_d0 + local_cc * local_cc)) {
              in_stack_fffffe74 = (CPathMap *)0x8;
              param_1->height_cache_tags[0x15][0] = 1;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        ((CMotionController *)pCVar9,8,1);
              in_stack_fffffe70 = pCVar9;
              break;
            }
          }
          else {
            param_1->height_cache_tags[0x15][0] = 0;
          }
        }
        if (param_1->height_cache_tags[0x15][2] == 0) {
          iVar5 = param_1->height_cache_tags[0x14][0x3d];
          local_10c = *(float *)(iVar5 + 0x20) - (float)(param_1->dest_voxel_coords).z;
          local_108 = *(float *)(iVar5 + 0x24) - (float)(param_1->grid_origin).x;
          local_104 = *(float *)(iVar5 + 0x28) - (float)(param_1->grid_origin).y;
          local_20 = SQRT(local_104 * local_104 + local_10c * local_10c + local_108 * local_108);
          local_18 = local_20;
          if (local_20 < 3.0f + 1.0) {
            in_stack_fffffe70 = (CPathMap *)0x4db210;
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0();
            in_stack_fffffe74 = (CPathMap *)0x4db224;
            local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
            if ((ABS(local_14) < (float)0.52359877558333301) &&
               ((float)param_1->height_cache_tags[0x14][0x3c] <= 0.0)) {
              in_stack_fffffe74 = (CPathMap *)0x9;
              in_stack_fffffe70 = (CPathMap *)(param_1->height_cache[0] + 0x48);
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        ((CMotionController *)in_stack_fffffe70,9,1);
              param_1->height_cache_tags[0x14][0x3c] = 0x40000000;
            }
          }
          if (local_20 < (float)param_1->height_cache_tags[0x14][0x3b]) {
            in_stack_fffffe70 = (CPathMap *)(param_1->height_cache[0] + 0x48);
            if (20.0f <= local_20) {
              in_stack_fffffe74 = (CPathMap *)0x8;
            }
            else {
              in_stack_fffffe74 = (CPathMap *)0x1;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      ((CMotionController *)in_stack_fffffe70,(int)in_stack_fffffe74,1);
          }
          if (param_1->height_cache_tags[0x14][0x61] == 0) {
            in_stack_fffffe74 = (CPathMap *)0x4db2bd;
            iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0.7);
            if (iVar5 != 0) {
              in_stack_fffffe70 = (CPathMap *)0x4db2cc;
              in_stack_fffffe74 = param_1;
              core_mobster_cpp_CMobster_playTaunt_FUN_004dc940((CMobster *)param_1,1);
              param_1->height_cache_tags[0x14][0x61] = 1;
              break;
            }
          }
          param_1->height_cache_tags[0x14][0x61] = 1;
          break;
        }
        if ((float)param_1->height_cache_tags[0x15][0x2d] <= (float)0.5) break;
        in_stack_fffffe74 = (CPathMap *)0x4db138;
        iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0.25);
        if (iVar5 != 0) {
          in_stack_fffffe74 = (CPathMap *)0x4db149;
          core_mobster_cpp_CMobster_dismountVehicle_FUN_004da670((CMobster *)param_1);
          break;
        }
      }
      else {
        fVar12 = (float)param_1->height_cache_tags[0x15][0x2d];
        param_1->height_cache_tags[0x14][0x3d] = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
        if (fVar12 <= (float)0.5) break;
      }
      core_mobster_cpp_CMobster_startFiringAttack_FUN_004dc110((CMobster *)param_1);
      break;
    case 1:
    case 8:
      (**(code **)(param_1->height_cache[0][0x47] + 0x13c))
                ((CCharacter *)param_1,(int)param_2,&in_stack_fffffe70->current_position);
      pCVar9 = (CPathMap *)(param_1->height_cache[0] + 0x48);
      if (param_1->height_cache_tags[0x14][0x3d] == 0) {
        in_stack_fffffe74 =
             (CPathMap *)core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030((CEnemy *)param_1,param_2);
        if (in_stack_fffffe74 == (CPathMap *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    ((CMotionController *)pCVar9,0,1);
          in_stack_fffffe70 = pCVar9;
        }
        else {
          in_stack_fffffe74 = (CPathMap *)0x1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    ((CMotionController *)pCVar9,1,1);
          in_stack_fffffe70 = pCVar9;
        }
      }
      else if (param_1->height_cache_tags[0x15][0] == 0) {
        in_stack_fffffe70 = (CPathMap *)0x4db3ef;
        in_stack_fffffe74 = param_1;
        iVar5 = core_mobster_cpp_CMobster_processWeaponPickup_FUN_004dbce0
                          ((CMobster *)param_1,param_2);
        if (iVar5 == 0) {
          local_24 = 3.0f + 1.0;
          if (param_1->height_cache[0x17][0x34] != 0) {
            local_24 = 30.0f;
          }
          fVar12 = 0.17453292;
          in_stack_fffffe74 = (CPathMap *)0x3f000000;
          param_1->height_cache[0x16][0x47] = 0;
          param_1->height_cache[0x16][0x46] = param_1->height_cache[0x16][0x47];
          param_1->height_cache[0x16][0x45] = param_1->height_cache[0x16][0x46];
          local_a0 = 0;
          local_28 = 3.0f;
          local_98 = 3.0f;
          local_9c = 0;
          pCVar10 = (CDemonActor *)param_1->height_cache_tags[0x14][0x3d];
          in_stack_fffffe70 = (*((pCVar10->vtable)._ub)->getPathMap)(pCVar10);
          iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                            ((CCharacter *)param_1,
                             (CVector3f *)(param_1->height_cache_tags[0x14][0x3d] + 0x20),
                             in_stack_fffffe70,&in_stack_fffffe74->current_position,fVar12,
                             (float)in_stack_fffffe7c);
          if (-1 < iVar5) {
            piVar1 = &(param_1->dest_voxel_coords).z;
            iVar5 = param_1->height_cache_tags[0x14][0x3d];
            local_64 = (float)*piVar1 - *(float *)(iVar5 + 0x20);
            local_5c = (float)(param_1->grid_origin).y - *(float *)(iVar5 + 0x28);
            local_30 = SQRT(local_5c * local_5c + (float)local_64 * (float)local_64);
            local_60 = 0.0;
            local_1c = local_30;
            if ((local_30 <= local_24) && ((float)param_1->height_cache_tags[0x14][0x3c] <= 0.0)) {
              pCVar9 = (CPathMap *)(param_1->height_cache[0] + 0x48);
              if (param_1->height_cache[0x17][0x34] == 0) {
                iVar5 = param_1->height_cache_tags[0x14][0x3d];
                local_b8 = *(float *)(iVar5 + 0x20) - (float)*piVar1;
                local_b4 = *(float *)(iVar5 + 0x24) - (float)(param_1->grid_origin).x;
                local_b0 = *(float *)(iVar5 + 0x28) - (float)(param_1->grid_origin).y;
                in_stack_fffffe74 = (CPathMap *)0x4db686;
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0();
                local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
                if (ABS(local_14) < (float)0.52359877558333301) {
                  in_stack_fffffe70 = (CPathMap *)0x4db6be;
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                            ((CMotionController *)pCVar9,9,1);
                  in_stack_fffffe74 = pCVar9;
                }
              }
              else if (local_28 + 1.0 <= local_30) {
                if (((float)0.5 < (float)param_1->height_cache_tags[0x15][0x2d]) &&
                   ((float)param_1->height_cache_tags[0x15][0x2e] <= 0.0)) {
                  param_1->height_cache_tags[0x14][99] = 0;
                  iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0.3);
                  if (iVar5 != 0) {
                    in_stack_fffffe74 = (CPathMap *)0x4db605;
                    core_mobster_cpp_CMobster_playTaunt_FUN_004dc940((CMobster *)param_1,2);
                  }
                  if ((float)param_1->height_cache_tags[0x14][99] <= 0.0) {
                    core_mobster_cpp_CMobster_startFiringAttack_FUN_004dc110((CMobster *)param_1);
                  }
                  else {
                    in_stack_fffffe74 = (CPathMap *)(param_1->height_cache[0] + 0x48);
                    if (param_1->height_cache[0x17][0x23] == 0) {
                      in_stack_fffffe70 = (CPathMap *)0x4db643;
                      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                                ((CMotionController *)in_stack_fffffe74,10,1);
                    }
                    else {
                      in_stack_fffffe70 = (CPathMap *)0x4db631;
                      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                                ((CMotionController *)in_stack_fffffe74,0xb,1);
                    }
                  }
                }
              }
              else {
                iVar5 = param_1->height_cache_tags[0x14][0x3d];
                local_e8 = *(float *)(iVar5 + 0x20) - (float)*piVar1;
                local_e4 = *(float *)(iVar5 + 0x24) - (float)(param_1->grid_origin).x;
                local_e0 = *(float *)(iVar5 + 0x28) - (float)(param_1->grid_origin).y;
                in_stack_fffffe74 = (CPathMap *)0x4db53e;
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0();
                local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
                if ((ABS(local_14) < (float)0.52359877558333301) &&
                   ((float)param_1->height_cache_tags[0x14][0x3c] <= 0.0)) {
                  in_stack_fffffe70 = (CPathMap *)0x4db581;
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                            ((CMotionController *)pCVar9,9,1);
                  param_1->height_cache_tags[0x14][0x3c] = 0x40000000;
                  in_stack_fffffe74 = pCVar9;
                }
              }
              param_1->height_cache_tags[0x14][0x3c] = 0x3f800000;
            }
            if ((float)param_1->height_cache_tags[0x14][0x3b] < local_30) {
              in_stack_fffffe74 = (CPathMap *)(param_1->height_cache[0] + 0x48);
              in_stack_fffffe70 = (CPathMap *)0x4db5ba;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        ((CMotionController *)in_stack_fffffe74,0,1);
            }
          }
        }
      }
      else {
        fVar12 = 0.17453292;
        in_stack_fffffe74 = (CPathMap *)0x3f000000;
        param_1->height_cache[0x16][0x47] = 0;
        param_1->height_cache[0x16][0x46] = param_1->height_cache[0x16][0x47];
        param_1->height_cache[0x16][0x45] = param_1->height_cache[0x16][0x46];
        local_88 = 0;
        local_80 = (char  [4])3.0f;
        local_84 = 0;
        pCVar10 = (CDemonActor *)param_1->height_cache_tags[0x15][1];
        in_stack_fffffe70 = (*((pCVar10->vtable)._ub)->getPathMap)(pCVar10);
        iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                          ((CCharacter *)param_1,
                           (CVector3f *)(param_1->height_cache_tags[0x15][1] + 0x20),
                           in_stack_fffffe70,&in_stack_fffffe74->current_position,fVar12,
                           (float)in_stack_fffffe7c);
        if (iVar5 < 1) {
          if (iVar5 < 0) {
            in_stack_fffffe70 = (CPathMap *)0x4db389;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      ((CMotionController *)pCVar9,0,1);
            param_1->height_cache_tags[0x15][1] = 0;
            in_stack_fffffe74 = pCVar9;
          }
        }
        else {
          in_stack_fffffe70 = (CPathMap *)0x4db3db;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    ((CMotionController *)pCVar9,0,1);
          in_stack_fffffe74 = pCVar9;
        }
      }
      break;
    case 2:
    case 6:
      (**(code **)(param_1->height_cache[0][0x47] + 0x13c))
                ((CCharacter *)param_1,(int)param_2,&in_stack_fffffe70->current_position);
      if (param_1->height_cache_tags[0x14][0x3d] != 0) {
        in_stack_fffffe74 = (CPathMap *)param_1->height_cache[0x17][0x34];
        in_stack_fffffe70 = (CPathMap *)0x4daefa;
        pCVar10 = core_actor_cpp_castToClassHash_FUN_0040d890
                            ((CDemonActor *)in_stack_fffffe74,g_CWeaponActorType_02ddf970.name_hash)
        ;
        if (pCVar10 != (CDemonActor *)0x0) {
          core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
          local_34 = pCVar10[4].location.position.x;
          pCVar3 = (pCVar10->vtable)._ub;
          pCVar10[4].location.position.x = 1.4013e-43;
          in_stack_fffffe74 = (CPathMap *)0x4daf34;
          iVar5 = (*pCVar3->addFilesToExtract)(pCVar10,in_stack_fffffe7c);
          if (iVar5 != 0) {
            (*((pCVar10->vtable)._ub)->showEditorHelp)(pCVar10,in_stack_fffffe84);
          }
          pCVar10[4].location.position.x = local_34;
        }
        pCVar10 = core_actor_cpp_castToClassHash_FUN_0040d890
                            ((CDemonActor *)param_1->height_cache[0x17][0x23],
                             g_CWeaponActorType_02ddf970.name_hash);
        local_2c = pCVar10;
        if (pCVar10 != (CDemonActor *)0x0) {
          core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
          pCVar3 = (pCVar10->vtable)._ub;
          fVar12 = pCVar10[4].location.position.x;
          pCVar10[4].location.position.x = 1.4013e-43;
          iVar5 = (*pCVar3->addFilesToExtract)(pCVar10,in_stack_fffffe8c);
          if (iVar5 == 0) {
            local_2c[4].location.position.x = fVar12;
          }
          else {
            (*((pCVar10->vtable)._ub)->showEditorHelp)(pCVar10,(int *)in_stack_fffffe94);
            local_2c[4].location.position.x = fVar12;
          }
        }
      }
      if (((float)param_1->height_cache_tags[0x15][0x2d] < (float)0.5) ||
         ((float)param_1->height_cache_tags[0x15][0x2e] <= 0.0)) {
        local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
        param_1->height_cache_tags[0x15][0x2e] = (int)local_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  ((CMotionController *)(param_1->height_cache[0] + 0x48),0,1);
        iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0.3);
        if (iVar5 != 0) {
          core_mobster_cpp_CMobster_playTaunt_FUN_004dc940((CMobster *)param_1,3);
        }
      }
      break;
    case 5:
      if ((param_1->height_cache_tags[0x14][0x38] == 0) && (param_1->height_cache[0][0x2b] == 0)) {
        pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                            ((CDeformableModelInstance *)pCVar9,&local_4c,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)param_1,&local_c4,pCVar11);
        core_gore_cpp_CGore_createBloodPool_FUN_004b0480((CGore *)INT_005b96c4,&local_c4,0);
        param_1->height_cache_tags[0x14][0x38] = 1;
      }
      break;
    case 9:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_160);
      local_160.damage_amount = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
      local_160.attacker = (CDemonActor *)param_1;
      local_160.wielder = (CDemonActor *)param_1;
      local_14 = local_160.damage_amount;
      if (param_1->height_cache[0x16][param_1->height_cache_tags[0x15][0x23]] != 0) {
        pSVar13 = &local_160;
        fVar12 = 0.4;
        pCVar11 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                            (&local_118,(CVector3f *)&DAT_02dd1184,
                             (CMatrix3x4f *)(param_1->height_cache[10] + _DAT_01ccdbac * 0xc));
        pCVar11 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                            ((CDemonActor *)param_1,local_100,pCVar11);
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0
                  ((CEnemy *)param_1,pCVar11,fVar12,pSVar13);
      }
      local_160.damage_amount = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
      local_14 = local_160.damage_amount;
      if (param_1->height_cache[0x16][param_1->height_cache_tags[0x15][0x25]] != 0) {
        pSVar13 = &local_160;
        fVar12 = 0.4;
        pCVar11 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                            (&local_94,(CVector3f *)&DAT_02dd1184,
                             (CMatrix3x4f *)(param_1->height_cache[10] + _DAT_01ccdbb0 * 0xc));
        pCVar11 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                            ((CDemonActor *)param_1,&local_dc,pCVar11);
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0
                  ((CEnemy *)param_1,pCVar11,fVar12,pSVar13);
      }
      break;
    case 10:
    case 0xb:
      if ((float)param_1->height_cache_tags[0x14][99] <= 0.0) {
        core_mobster_cpp_CMobster_startFiringAttack_FUN_004dc110((CMobster *)param_1);
      }
    }
    goto switchD_004db6cf_caseD_3;
  }
  uVar6 = param_1->height_cache[0x17][0x62];
  if (uVar6 < 2) {
    if (uVar6 == 1) {
LAB_004daabc:
      fVar12 = 1.4013e-45;
    }
    else {
LAB_004dacfc:
      fVar12 = 0.0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              ((CMotionController *)(param_1->height_cache[0] + 0x48),(int)fVar12,1);
  }
  else {
    if (uVar6 < 3) goto LAB_004daabc;
    if (uVar6 != 3) goto LAB_004dacfc;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0((CMotionController *)pCVar9,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60();
  }
  param_1->height_cache[0x16][0x47] = 0;
  param_1->height_cache[0x16][0x46] = param_1->height_cache[0x16][0x47];
  param_1->height_cache[0x16][0x45] = param_1->height_cache[0x16][0x46];
switchD_004db6cf_caseD_3:
  if (0.0 < (float)param_1->height_cache_tags[0x14][0x3c]) {
    param_1->height_cache_tags[0x14][0x3c] =
         (int)((float)param_1->height_cache_tags[0x14][0x3c] - param_2);
  }
  if (param_1->height_cache_tags[0x15][2] == 0) {
    iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960((CCharacter *)param_1);
    if (iVar5 != 0) {
      this_ptr = (CCharacter *)param_1->height_cache_tags[0x14][0x3d];
      if ((this_ptr != (CCharacter *)0x0) &&
         (pCVar9 = (CPathMap *)
                   (*(((this_ptr->base).vtable._uc)->_uc).applyDamage)
                             (this_ptr,(int)in_stack_fffffe70,(float)in_stack_fffffe74),
         pCVar9 == param_1)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                  (0x01E57284,(CDemonActor *)param_1->height_cache_tags[0x14][0x3d]);
      }
      param_1->height_cache[0x17][1] =
           (int)((float)param_1->height_cache[0x17][1] - param_2 * (float)32);
      local_ac = (float)param_1->height_cache[0x17][0] * param_2;
      local_a8 = (float)param_1->height_cache[0x17][1] * param_2;
      piVar1 = param_1->height_cache[0x16] + 0x61;
      local_a4 = param_2 * (float)param_1->height_cache[0x17][2];
      piVar2 = param_1->height_cache[0x16] + 0x45;
      local_124 = local_ac + (float)*piVar1;
      local_120 = local_a8 + (float)param_1->height_cache[0x16][0x62];
      local_11c = local_a4 + (float)param_1->height_cache[0x16][99];
      local_7c[0].x = local_124 + (float)*piVar2;
      local_7c[0].y = local_120 + (float)param_1->height_cache[0x16][0x46];
      local_7c[0].z = local_11c + (float)param_1->height_cache[0x16][0x47];
      param_1->height_cache[0x16][99] = 0;
      param_1->height_cache[0x16][0x62] = param_1->height_cache[0x16][99];
      *piVar1 = param_1->height_cache[0x16][0x62];
      param_1->height_cache[0x16][0x47] = 0;
      fVar12 = (float)param_1->height_cache[0x16][0x47];
      param_1->height_cache[0x16][0x46] = (int)fVar12;
      *piVar2 = (int)fVar12;
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)param_1,local_7c);
    }
  }
  else {
    core_mobster_cpp_CMobster_positionOnVehicle_FUN_004da5a0((CMobster *)param_1);
  }
  pCVar10 = core_actor_cpp_castToClassHash_FUN_0040d890
                      ((CDemonActor *)param_1->height_cache[0x17][0x34],
                       g_CWeaponActorType_02ddf970.name_hash);
  if (pCVar10 != (CDemonActor *)0x0) {
    (*((pCVar10->vtable)._ub)->process)(pCVar10,param_2);
  }
  pCVar10 = core_actor_cpp_castToClassHash_FUN_0040d890
                      ((CDemonActor *)param_1->height_cache[0x17][0x23],
                       g_CWeaponActorType_02ddf970.name_hash);
  if (pCVar10 != (CDemonActor *)0x0) {
    (*((pCVar10->vtable)._ub)->process)(pCVar10,param_2);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
            ((CDeformableModelInstance *)(param_1->height_cache[0] + 0x48));
  iVar5 = (**(code **)(param_1->height_cache[0][0x47] + 0x104))((CCharacter *)param_1);
  if (iVar5 == 0) {
    core_mobster_cpp_CMobster_aimTommyGun_FUN_004db6f0((CMobster *)param_1,param_2);
  }
  core_charactr_cpp_FUN_0042a150();
  return;
}

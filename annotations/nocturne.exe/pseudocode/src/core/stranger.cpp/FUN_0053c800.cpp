// Name: core_stranger.cpp_FUN_0053c800
// Address: 0053c800
// Address Range: [[0053c800, 0053cf8b]]
// Convention: unknown
// Signature: undefined4 core_stranger_cpp_FUN_0053c800(CDemonActor *param_1)

#include "nocturne.h"

uint core_stranger_cpp_FUN_0053c800(CDemonActor *param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CActorDestination *pCVar5;
  UOrientationVector *pUVar6;
  int iVar7;
  CVector3f *pCVar8;
  CVector3f *pCVar9;
  float *pfVar10;
  CDemonActor *pCVar11;
  CLocation *pCVar12;
  int iVar13;
  CVector3f local_c8;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  CVector3f aCStack_b0 [2];
  float fStack_98;
  float fStack_94;
  float fStack_90;
  CVector3f local_8c;
  uint local_80;
  uint local_78;
  float local_74;
  float local_70;
  float local_6c;
  CVector3f CStack_68;
  uint local_5c;
  uint local_58;
  uint local_54;
  float local_50;
  float local_4c;
  float local_48;
  CVector3f CStack_44;
  CActorDestination *local_38;
  CActorDestination *pCStack_34;
  float local_30;
  int iStack_2c;
  int local_28;
  int local_24;
  int iStack_20;
  float fStack_1c;
  float local_18;
  
  if (*(int *)(param_1[0x181].create_event + 0x40) != 0) {
    return 0;
  }
  if (param_1[0x1c].orient.vec.x == 0.0) {
    return 0;
  }
  if ((*(int *)(param_1[0x20].create_event + 0xc) != 0xe) &&
     (local_18 = (float)core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0(param_1)
     , local_18 < (float)0.98999999999999999)) {
    return 0;
  }
  local_18 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(param_1 + 1);
  if (local_18 < 1.0) {
    return 0;
  }
  fVar2 = param_1[0x1c].orient.vec.x;
  if ((fVar2 == 0.0) ||
     (iVar7 = (**(code **)(*(int *)((int)fVar2 + 0x14c) + 0x7c))(fVar2), iVar7 != 4)) {
    local_24 = 0;
    for (local_28 = 0; local_28 < *(int *)0x01E57284->lights[199].filter_names[0x14];
        local_28 = local_28 + 1) {
      pCVar5 = (CActorDestination *)
               core_actor_cpp_castToClassHash_FUN_0040d890
                         (*(CDemonActor **)
                           (0x01E57284->lights[199].filter_names[0x14] + local_24 + 4),
                          g_CActorDestinationActorType_014b8a1c.name_hash);
      local_38 = pCVar5;
      if ((pCVar5 != (CActorDestination *)0x0) &&
         (iVar7 = core_dest_cpp_CActorDestination_acceptsActor_FUN_0044bab0
                            (pCVar5,(CDemonActor *)param_1[0x1c].orient.vec.x), iVar7 != 0)) {
        pCVar8 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                           (param_1,&local_c8,(CVector3f *)((int)param_1[0x1c].orient.vec.x + 0x20))
        ;
        pCVar12 = &(pCVar5->base).location;
        pCVar9 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                           (param_1,&local_8c,&pCVar12->position);
        fVar2 = pCVar9->x - pCVar8->x;
        fVar3 = pCVar9->y - pCVar8->y;
        fVar4 = pCVar9->z - pCVar8->z;
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (PTR_DAT_005ad350,"Delta to dest : %3.2f,%3.2f,%3.2f\n",(double)fVar2,(double)fVar3,
                   (double)fVar4);
        if ((((0.0 < fVar4) &&
             ((fVar4 < (float)3 && (ABS(fVar2) < (float)2)))) &&
            (dVar1 = (double)fVar3, 0.0 < dVar1)) && (dVar1 < 4)) {
          param_1[0x182].actor_name[0] = '\x02';
          param_1[0x182].actor_name[1] = '\0';
          param_1[0x182].actor_name[2] = '\0';
          param_1[0x182].actor_name[3] = '\0';
          if ((CLocation *)(param_1[0x181].create_event + 0x58) != pCVar12) {
            *(float *)(param_1[0x181].create_event + 0x58) = (pCVar12->position).x;
            *(float *)(param_1[0x181].create_event + 0x5c) = (pCVar5->base).location.position.y;
            *(float *)(param_1[0x181].create_event + 0x60) = (pCVar5->base).location.position.z;
          }
          pUVar6 = &(local_38->base).orient;
          if ((UOrientationVector *)&param_1[0x181].standing_platform != pUVar6) {
            param_1[0x181].standing_platform = (CPlatform *)(pUVar6->vec).x;
            param_1[0x181].platform_position_delta.x = (local_38->base).orient.vec.y;
            param_1[0x181].platform_position_delta.y = (local_38->base).orient.vec.z;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    ((CMotionController *)(param_1 + 1),0x16,1);
          return 1;
        }
      }
      local_24 = local_24 + 4;
    }
  }
  else {
    iStack_20 = 0;
    for (iStack_2c = 0; iStack_2c < *(int *)0x01E57284->lights[199].filter_names[0x14];
        iStack_2c = iStack_2c + 1) {
      pCVar5 = (CActorDestination *)
               core_actor_cpp_castToClassHash_FUN_0040d890
                         (*(CDemonActor **)
                           (0x01E57284->lights[199].filter_names[0x14] + iStack_20 + 4),
                          g_CActorDestinationActorType_014b8a1c.name_hash);
      pCStack_34 = pCVar5;
      if ((pCVar5 != (CActorDestination *)0x0) &&
         (iVar7 = core_dest_cpp_CActorDestination_acceptsActor_FUN_0044bab0
                            (pCVar5,(CDemonActor *)param_1[0x1c].orient.vec.x), iVar7 != 0)) {
        pCVar8 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                           (param_1,aCStack_b0,(CVector3f *)((int)param_1[0x1c].orient.vec.x + 0x20)
                           );
        pCVar12 = &(pCVar5->base).location;
        pCVar9 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                           (param_1,&CStack_44,&pCVar12->position);
        fStack_98 = pCVar9->x - pCVar8->x;
        fStack_94 = pCVar9->y - pCVar8->y;
        fStack_90 = pCVar9->z - pCVar8->z;
        if ((0.0 < fStack_90) &&
           ((((fStack_90 < (float)3 && (ABS(fStack_98) < (float)2)) &&
             (0.0 < (double)fStack_94)) && ((double)fStack_94 < 4)))) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    ((CMotionController *)(param_1 + 1),0x1a,1);
          pCVar8 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                             (param_1,&CStack_68,&pCVar12->position);
          if ((CVector3f *)&param_1[0x182].runtime_state != pCVar8) {
            param_1[0x182].runtime_state = (int)pCVar8->x;
            param_1[0x182].health = (int)pCVar8->y;
            param_1[0x182].validation_magic = (uintptr_t)pCVar8->z;
          }
          fStack_1c = *(float *)(param_1[0x182].create_event + 4) -
                      (float)param_1[0x182].lifecycle_state;
          local_18 = (float)core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_00534fc0();
          param_1[0x182].health = (int)((fStack_1c - local_18) + (float)param_1[0x182].health);
          if (*(int *)param_1[0x182].actor_name != 0) {
            shape_edittool_cpp_FUN_0046fb40
                      (0x01BCD074,"actionPending = %d\nstranger.cpp line %d",
                       *(int *)param_1[0x182].actor_name,0xe6f);
          }
          pCVar12 = &(pCStack_34->base).location;
          param_1[0x182].actor_name[0] = '\x02';
          param_1[0x182].actor_name[1] = '\0';
          param_1[0x182].actor_name[2] = '\0';
          param_1[0x182].actor_name[3] = '\0';
          if ((CLocation *)(param_1[0x181].create_event + 0x58) != pCVar12) {
            *(float *)(param_1[0x181].create_event + 0x58) = (pCVar12->position).x;
            *(float *)(param_1[0x181].create_event + 0x5c) = (pCStack_34->base).location.position.y;
            *(float *)(param_1[0x181].create_event + 0x60) = (pCStack_34->base).location.position.z;
          }
          pUVar6 = &(pCStack_34->base).orient;
          if ((UOrientationVector *)&param_1[0x181].standing_platform != pUVar6) {
            param_1[0x181].standing_platform = (CPlatform *)(pUVar6->vec).x;
            param_1[0x181].platform_position_delta.x = (pCStack_34->base).orient.vec.y;
            param_1[0x181].platform_position_delta.y = (pCStack_34->base).orient.vec.z;
          }
          return 1;
        }
      }
      iStack_20 = iStack_20 + 4;
    }
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
            (0x01E57284,(CDemonActor *)param_1[0x1c].orient.vec.x);
  iVar7 = *(int *)&param_1[0x1c].orient;
  local_74 = *(float *)(iVar7 + 0x20);
  local_70 = *(float *)(iVar7 + 0x24);
  local_6c = *(float *)(iVar7 + 0x28);
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0x3f800000;
  pfVar10 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200();
  local_74 = local_74 + *pfVar10;
  local_6c = local_6c + pfVar10[2];
  local_70 = (param_1->location).position.y;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0x3fc00000;
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200();
  local_18 = (float)core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00510a40
                              (0x01E57284,local_74,local_6c,local_80,local_78,0x3f800000,
                               0x3dcccccd);
  if (local_18 < 1.0) {
    core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
    return 0;
  }
  local_30 = (float)core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80();
  local_18 = local_30;
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  if (ABS(local_30 - (param_1->location).position.y) <= 1.0) {
    iVar7 = 0;
    iVar13 = 0;
    do {
      if (*(int *)0x01E57284->lights[199].filter_names[0x14] <= iVar7) {
        fVar2 = param_1[0x1c].orient.vec.x;
        param_1[0x182].actor_name[0] = '\x06';
        param_1[0x182].actor_name[1] = '\0';
        param_1[0x182].actor_name[2] = '\0';
        param_1[0x182].actor_name[3] = '\0';
        if ((fVar2 == 0.0) ||
           (iVar7 = (**(code **)(*(int *)((int)fVar2 + 0x14c) + 0x7c))(fVar2), iVar7 != 4)) {
          iVar7 = 0x14;
        }
        else {
          iVar7 = 0x19;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  ((CMotionController *)(param_1 + 1),iVar7,1);
        param_1[0x182].actor_name[8] = '\0';
        param_1[0x182].actor_name[9] = '\0';
        param_1[0x182].actor_name[10] = -0x80;
        param_1[0x182].actor_name[0xb] = '@';
        return 1;
      }
      pCVar11 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(CDemonActor **)
                            (0x01E57284->lights[199].filter_names[0x14] + iVar13 + 4),
                           g_CCrateActorType_0077bd40.name_hash);
      if (pCVar11 != (CDemonActor *)0x0) {
        local_50 = (pCVar11->location).position.x - local_74;
        local_4c = (pCVar11->location).position.y - local_70;
        local_48 = (pCVar11->location).position.z - local_6c;
        if (SQRT(local_48 * local_48 + local_50 * local_50 + local_4c * local_4c) <
            (float)2) {
          return 0;
        }
      }
      iVar7 = iVar7 + 1;
      iVar13 = iVar13 + 4;
    } while( true );
  }
  return 0;
}

// Name: core_stranger.cpp_CStranger_FUN_005c2850
// Address: 005c2850
// Address Range: [[005c2850, 005c2fdb]]
// Convention: unknown
// Signature: undefined4 core_stranger_cpp_CStranger_FUN_005c2850(void)

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005c2850(CStranger* param_1) */

uint core_stranger_cpp_CStranger_FUN_005c2850(void)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CDemonActor *pCVar5;
  int iVar6;
  CVector3f *pCVar7;
  CVector3f *pCVar8;
  float *pfVar9;
  CLocation *input_world_point;
  int iVar10;
  CDemonActor *in_stack_00000004;
  CVector3f local_d4;
  CVector3f local_c8;
  CVector3f local_bc;
  CVector3f CStack_b0;
  CVector3f local_a4;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  CVector3f local_8c;
  CVector3f local_80;
  float local_74;
  float local_70;
  float local_6c;
  CVector3f CStack_68;
  CVector3f local_5c;
  float local_50;
  float local_4c;
  float local_48;
  CVector3f CStack_44;
  CDemonActor *local_38;
  CDemonActor *pCStack_34;
  float local_30;
  int iStack_2c;
  int local_28;
  int local_24;
  int iStack_20;
  float fStack_1c;
  float local_18;
  
  if (in_stack_00000004[0x179].scale.x != 0) {
    return 0;
  }
  if (*(int *)(in_stack_00000004[0x1b].create_event + 0x38) == 0) {
    return 0;
  }
  if ((in_stack_00000004[0x1f].unk3.y != 1.96182e-44) &&
     (local_18 = (float)core_charactr_cpp_CCharacter_FUN_0042e840(),
     local_18 < (float)0.98999999999999999)) {
    return 0;
  }
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       ((CMotionController *)(in_stack_00000004 + 1),0);
  if (local_18 < 1.0) {
    return 0;
  }
  if ((*(int *)(in_stack_00000004[0x1b].create_event + 0x38) == 0) ||
     (iVar6 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[0x1b].create_event + 0x38) + 0x154) +
                          0x7c))(), iVar6 != 4)) {
    local_24 = 0;
    for (local_28 = 0; local_28 < (int)g_CDemonSetPtr->actor_list_ptr; local_28 = local_28 + 1) {
      pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + local_24),
                          g_CActorDestinationClassInfo.name_hash);
      local_38 = pCVar5;
      if ((pCVar5 != (CDemonActor *)0x0) && (iVar6 = core_dest_cpp_FUN_0046fd50(), iVar6 != 0)) {
        pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (in_stack_00000004,&local_c8,
                            (CVector3f *)
                            (*(int *)(in_stack_00000004[0x1b].create_event + 0x38) + 0x20));
        input_world_point = &pCVar5->location;
        pCVar8 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (in_stack_00000004,&local_8c,&input_world_point->position);
        fVar2 = pCVar8->x - pCVar7->x;
        fVar3 = pCVar8->y - pCVar7->y;
        fVar4 = pCVar8->z - pCVar7->z;
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"Delta to dest : %3.2f,%3.2f,%3.2f\n",(double)fVar2,(double)fVar3,
                   (double)fVar4);
        if ((((0.0 < fVar4) &&
             ((fVar4 < (float)3 && (ABS(fVar2) < (float)2)))) &&
            (dVar1 = (double)fVar3, 0.0 < dVar1)) && (dVar1 < 4)) {
          in_stack_00000004[0x17a].orient_matrix.m[1].x = 2.8026e-45;
          if ((CLocation *)&in_stack_00000004[0x179].unk11 != input_world_point) {
            in_stack_00000004[0x179].unk11 = (int)(input_world_point->position).x;
            in_stack_00000004[0x179].unk12 = (int)(pCVar5->location).position.y;
            in_stack_00000004[0x179].previous_transform_state.position.x =
                 (pCVar5->location).position.z;
          }
          pfVar9 = &in_stack_00000004[0x179].previous_transform_state.position.y;
          if ((COrientation *)pfVar9 != &local_38->orient) {
            *pfVar9 = (local_38->orient).pitch;
            in_stack_00000004[0x179].previous_transform_state.position.z = (local_38->orient).bank;
            in_stack_00000004[0x179].previous_transform_state.orientation.x =
                 (local_38->orient).heading;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    ((CMotionController *)(in_stack_00000004 + 1),0x16,1);
          return 1;
        }
      }
      local_24 = local_24 + 4;
    }
  }
  else {
    iStack_20 = 0;
    for (iStack_2c = 0; iStack_2c < (int)g_CDemonSetPtr->actor_list_ptr; iStack_2c = iStack_2c + 1)
    {
      pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iStack_20),
                          g_CActorDestinationClassInfo.name_hash);
      pCStack_34 = pCVar5;
      if ((pCVar5 != (CDemonActor *)0x0) && (iVar6 = core_dest_cpp_FUN_0046fd50(), iVar6 != 0)) {
        pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (in_stack_00000004,&CStack_b0,
                            (CVector3f *)
                            (*(int *)(in_stack_00000004[0x1b].create_event + 0x38) + 0x20));
        pCVar8 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (in_stack_00000004,&CStack_44,&(pCVar5->location).position);
        fStack_98 = pCVar8->x - pCVar7->x;
        fStack_94 = pCVar8->y - pCVar7->y;
        fStack_90 = pCVar8->z - pCVar7->z;
        if ((0.0 < fStack_90) &&
           ((((fStack_90 < (float)3 && (ABS(fStack_98) < (float)2)) &&
             (0.0 < (double)fStack_94)) && ((double)fStack_94 < 4)))) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    ((CMotionController *)(in_stack_00000004 + 1),0x1a,1);
          pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             (in_stack_00000004,&CStack_68,&(pCVar5->location).position);
          if ((CVector3f *)(in_stack_00000004[0x17a].create_event + 0x30) != pCVar7) {
            ((CVector3f *)(in_stack_00000004[0x17a].create_event + 0x30))->x = pCVar7->x;
            *(float *)(in_stack_00000004[0x17a].create_event + 0x34) = pCVar7->y;
            *(float *)(in_stack_00000004[0x17a].create_event + 0x38) = pCVar7->z;
          }
          fStack_1c = *(float *)(in_stack_00000004[0x17a].create_event + 0x4c) -
                      *(float *)(in_stack_00000004[0x17a].create_event + 0x40);
          local_18 = (float)core_stranger_cpp_FUN_005bb010();
          fVar2 = in_stack_00000004[0x17a].orient_matrix.m[1].x;
          *(float *)(in_stack_00000004[0x17a].create_event + 0x34) =
               (fStack_1c - local_18) + *(float *)(in_stack_00000004[0x17a].create_event + 0x34);
          if (fVar2 != 0.0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",fVar2,0xe78);
          }
          in_stack_00000004[0x17a].orient_matrix.m[1].x = 2.8026e-45;
          if ((CLocation *)&in_stack_00000004[0x179].unk11 != &pCStack_34->location) {
            in_stack_00000004[0x179].unk11 = (int)(pCStack_34->location).position.x;
            in_stack_00000004[0x179].unk12 = (int)(pCStack_34->location).position.y;
            in_stack_00000004[0x179].previous_transform_state.position.x =
                 (pCStack_34->location).position.z;
          }
          pfVar9 = &in_stack_00000004[0x179].previous_transform_state.position.y;
          if ((COrientation *)pfVar9 != &pCStack_34->orient) {
            *pfVar9 = (pCStack_34->orient).pitch;
            in_stack_00000004[0x179].previous_transform_state.position.z = (pCStack_34->orient).bank
            ;
            in_stack_00000004[0x179].previous_transform_state.orientation.x =
                 (pCStack_34->orient).heading;
          }
          return 1;
        }
      }
      iStack_20 = iStack_20 + 4;
    }
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
            (g_CDemonSetPtr,*(CDemonActor **)(in_stack_00000004[0x1b].create_event + 0x38));
  iVar6 = *(int *)(in_stack_00000004[0x1b].create_event + 0x38);
  local_74 = *(float *)(iVar6 + 0x20);
  local_70 = *(float *)(iVar6 + 0x24);
  local_6c = *(float *)(iVar6 + 0x28);
  local_bc.x = 0.0;
  local_bc.y = 0.0;
  local_bc.z = 1.0;
  pCVar7 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     (in_stack_00000004,&local_a4,&local_bc);
  local_74 = local_74 + pCVar7->x;
  local_6c = local_6c + pCVar7->z;
  local_70 = (in_stack_00000004->location).position.y;
  local_5c.x = 0.0;
  local_5c.y = 0.0;
  local_5c.z = 1.5;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(in_stack_00000004,&local_80,&local_5c);
  local_18 = core_setcolid_cpp_CDemonSet_testCapsuleCollision_FUN_00573470
                       (g_CDemonSetPtr,local_74,local_6c,local_80.x,local_80.z,1.0,
                        (void *)0x3dcccccd,(void *)0x40400000);
  if (local_18 < 1.0) {
    core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
    return 0;
  }
  local_d4.x = local_74 + local_80.x;
  local_d4.y = local_70 + local_80.y;
  local_d4.z = local_6c + local_80.z;
  local_30 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                       (g_CDemonSetPtr,&local_d4,0.5);
  local_18 = local_30;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  if (ABS(local_30 - (in_stack_00000004->location).position.y) <= 1.0) {
    iVar6 = 0;
    iVar10 = 0;
    do {
      if ((int)g_CDemonSetPtr->actor_list_ptr <= iVar6) {
        iVar6 = *(int *)(in_stack_00000004[0x1b].create_event + 0x38);
        in_stack_00000004[0x17a].orient_matrix.m[1].x = 8.40779e-45;
        if ((iVar6 == 0) || (iVar6 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x7c))(), iVar6 != 4)) {
          iVar6 = 0x14;
        }
        else {
          iVar6 = 0x19;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)(in_stack_00000004 + 1),iVar6,1);
        in_stack_00000004[0x17a].orient_matrix.m[1].z = 4.0;
        return 1;
      }
      pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar10),
                          g_CCrateClassInfo.name_hash);
      if (pCVar5 != (CDemonActor *)0x0) {
        local_50 = (pCVar5->location).position.x - local_74;
        local_4c = (pCVar5->location).position.y - local_70;
        local_48 = (pCVar5->location).position.z - local_6c;
        if (SQRT(local_48 * local_48 + local_50 * local_50 + local_4c * local_4c) <
            (float)2) {
          return 0;
        }
      }
      iVar6 = iVar6 + 1;
      iVar10 = iVar10 + 4;
    } while( true );
  }
  return 0;
}

// Name: core_stranger.cpp_CStranger_FUN_005c2850
// Address: 005c2850
// Address Range: [[005c2850, 005c2fdb]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c2850()

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
  BADSPACEBASE *in_ESP;
  CLocation *input_world_point;
  int iVar10;
  CDemonActor *in_stack_00000004;
  CVector3f local_d0;
  CVector3f CStack_c4;
  CVector3f local_b8;
  CVector3f CStack_ac;
  CVector3f CStack_a0;
  float fStack_94;
  float fStack_90;
  float local_8c;
  CVector3f CStack_88;
  CVector3f local_7c;
  float local_70;
  float local_6c;
  float fStack_68;
  CVector3f CStack_64;
  CVector3f local_58;
  float local_4c;
  float local_48;
  float fStack_44;
  CVector3f CStack_40;
  CDemonActor *pCStack_34;
  CDemonActor *local_30;
  float fStack_2c;
  int local_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  float local_18;
  float fStack_14;
  
  if (in_stack_00000004[0x179].scale.x != 0) {
    return 0;
  }
  if (*(int *)(in_stack_00000004[0x1b].create_event + 0x38) == 0) {
    return 0;
  }
  if ((in_stack_00000004[0x1f].field12_0xe0.y != 1.96182e-44) &&
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
    iStack_20 = 0;
    for (local_24 = 0; local_24 < (int)g_CDemonSetPtr->actor_list_ptr; local_24 = local_24 + 1) {
      pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iStack_20),
                          g_CActorDestinationClassInfo.name_hash);
      pCStack_34 = pCVar5;
      if ((pCVar5 != (CDemonActor *)0x0) && (iVar6 = core_dest_cpp_FUN_0046fd50(), iVar6 != 0)) {
        pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (in_stack_00000004,&CStack_c4,
                            (CVector3f *)
                            (*(int *)(in_stack_00000004[0x1b].create_event + 0x38) + 0x20));
        input_world_point = &pCVar5->location;
        pCVar8 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (in_stack_00000004,&CStack_88,&input_world_point->position);
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
          if ((CLocation *)&in_stack_00000004[0x179].field22_0x120 != input_world_point) {
            in_stack_00000004[0x179].field22_0x120 = (int)(input_world_point->position).x;
            in_stack_00000004[0x179].field23_0x124 = (int)(pCVar5->location).position.y;
            in_stack_00000004[0x179].previous_transform_state.position.x =
                 (pCVar5->location).position.z;
          }
          pfVar9 = &in_stack_00000004[0x179].previous_transform_state.position.y;
          if ((COrientation *)pfVar9 != &pCStack_34->orient) {
            *pfVar9 = (pCStack_34->orient).pitch;
            in_stack_00000004[0x179].previous_transform_state.position.z = (pCStack_34->orient).bank
            ;
            in_stack_00000004[0x179].previous_transform_state.orientation.x =
                 (pCStack_34->orient).heading;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    ((CMotionController *)(in_stack_00000004 + 1),0x16,1);
          return 1;
        }
      }
      iStack_20 = iStack_20 + 4;
    }
  }
  else {
    iStack_1c = 0;
    for (local_28 = 0; local_28 < (int)g_CDemonSetPtr->actor_list_ptr; local_28 = local_28 + 1) {
      pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iStack_1c),
                          g_CActorDestinationClassInfo.name_hash);
      local_30 = pCVar5;
      if ((pCVar5 != (CDemonActor *)0x0) && (iVar6 = core_dest_cpp_FUN_0046fd50(), iVar6 != 0)) {
        pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (in_stack_00000004,&CStack_ac,
                            (CVector3f *)
                            (*(int *)(in_stack_00000004[0x1b].create_event + 0x38) + 0x20));
        pCVar8 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (in_stack_00000004,&CStack_40,&(pCVar5->location).position);
        fStack_94 = pCVar8->x - pCVar7->x;
        fStack_90 = pCVar8->y - pCVar7->y;
        local_8c = pCVar8->z - pCVar7->z;
        if ((0.0 < local_8c) &&
           ((((local_8c < (float)3 && (ABS(fStack_94) < (float)2)) &&
             (0.0 < (double)fStack_90)) && ((double)fStack_90 < 4)))) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    ((CMotionController *)(in_stack_00000004 + 1),0x1a,1);
          pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             (in_stack_00000004,&CStack_64,&(pCVar5->location).position);
          if ((CVector3f *)(in_stack_00000004[0x17a].create_event + 0x30) != pCVar7) {
            ((CVector3f *)(in_stack_00000004[0x17a].create_event + 0x30))->x = pCVar7->x;
            *(float *)(in_stack_00000004[0x17a].create_event + 0x34) = pCVar7->y;
            *(float *)(in_stack_00000004[0x17a].create_event + 0x38) = pCVar7->z;
          }
          local_18 = *(float *)(in_stack_00000004[0x17a].create_event + 0x4c) -
                     *(float *)(in_stack_00000004[0x17a].create_event + 0x40);
          fStack_14 = (float)core_stranger_cpp_FUN_005bb010();
          fVar2 = in_stack_00000004[0x17a].orient_matrix.m[1].x;
          *(float *)(in_stack_00000004[0x17a].create_event + 0x34) =
               (local_18 - fStack_14) + *(float *)(in_stack_00000004[0x17a].create_event + 0x34);
          if (fVar2 != 0.0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",fVar2,0xe78);
          }
          in_stack_00000004[0x17a].orient_matrix.m[1].x = 2.8026e-45;
          if ((CLocation *)&in_stack_00000004[0x179].field22_0x120 != &local_30->location) {
            in_stack_00000004[0x179].field22_0x120 = (int)(local_30->location).position.x;
            in_stack_00000004[0x179].field23_0x124 = (int)(local_30->location).position.y;
            in_stack_00000004[0x179].previous_transform_state.position.x =
                 (local_30->location).position.z;
          }
          pfVar9 = &in_stack_00000004[0x179].previous_transform_state.position.y;
          if ((COrientation *)pfVar9 != &local_30->orient) {
            *pfVar9 = (local_30->orient).pitch;
            in_stack_00000004[0x179].previous_transform_state.position.z = (local_30->orient).bank;
            in_stack_00000004[0x179].previous_transform_state.orientation.x =
                 (local_30->orient).heading;
          }
          return 1;
        }
      }
      iStack_1c = iStack_1c + 4;
    }
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
            (g_CDemonSetPtr,*(CDemonActor **)(in_stack_00000004[0x1b].create_event + 0x38));
  iVar6 = *(int *)(in_stack_00000004[0x1b].create_event + 0x38);
  local_70 = *(float *)(iVar6 + 0x20);
  local_6c = *(float *)(iVar6 + 0x24);
  fStack_68 = *(float *)(iVar6 + 0x28);
  local_b8.x = 0.0;
  local_b8.y = 0.0;
  local_b8.z = 1.0;
  pCVar7 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     (in_stack_00000004,&CStack_a0,&local_b8);
  local_70 = local_70 + pCVar7->x;
  fStack_68 = fStack_68 + pCVar7->z;
  local_6c = (in_stack_00000004->location).position.y;
  local_58.x = 0.0;
  local_58.y = 0.0;
  local_58.z = 1.5;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(in_stack_00000004,&local_7c,&local_58);
  fStack_14 = core_setcolid_cpp_CDemonSet_testCapsuleCollision_FUN_00573470
                        (g_CDemonSetPtr,local_70,fStack_68,local_7c.x,local_7c.z,1.0,
                         (void *)0x3dcccccd,(void *)0x40400000);
  if (fStack_14 < 1.0) {
    core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
    return 0;
  }
  local_d0.x = local_70 + local_7c.x;
  local_d0.y = local_6c + local_7c.y;
  local_d0.z = fStack_68 + local_7c.z;
  fStack_2c = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                        (g_CDemonSetPtr,&local_d0,0.5);
  fStack_14 = fStack_2c;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  if (ABS(fStack_2c - (in_stack_00000004->location).position.y) <= 1.0) {
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
        local_4c = (pCVar5->location).position.x - local_70;
        local_48 = (pCVar5->location).position.y - local_6c;
        fStack_44 = (pCVar5->location).position.z - fStack_68;
        if (SQRT(fStack_44 * fStack_44 + local_4c * local_4c + local_48 * local_48) <
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

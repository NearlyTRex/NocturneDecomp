// Name: core_stranger.cpp_CStranger_FUN_005c2850
// Address: 005c2850
// Address Range: [[005c2850, 005c2fdb]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_FUN_005c2850(CStranger *this_ptr)

#include "nocturne.h"

int __cdecl core_stranger_cpp_CStranger_FUN_005c2850(CStranger *this_ptr)

{
  double dVar1;
  float fVar2;
  float fVar3;
  CActorDestination *pCVar4;
  UOrientationVector *pUVar5;
  int iVar6;
  CVector3f *pCVar7;
  CVector3f *pCVar8;
  float fVar9;
  CDemonActor *pCVar10;
  UOrientationVector *pUVar11;
  CLocation *pCVar12;
  int iVar13;
  double in_stack_ffffff18;
  int force_immediate;
  CVector3f local_cc;
  CVector3f CStack_c0;
  CVector3f local_b4;
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  float fStack_90;
  float local_8c;
  float fStack_88;
  CVector3f CStack_84;
  CVector3f local_78;
  float local_6c;
  float fStack_68;
  float fStack_64;
  CVector3f CStack_60;
  CVector3f local_54;
  float local_48;
  float fStack_44;
  float fStack_40;
  CVector3f CStack_3c;
  CActorDestination *local_30;
  CActorDestination *pCStack_2c;
  float local_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  float local_18;
  float fStack_14;
  
  if ((this_ptr->base).object_to_pick_up != (CDemonActor *)0x0) {
    return 0;
  }
  if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
    return 0;
  }
  if (((this_ptr->base).base.layer_action_index != 0xe) &&
     (local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                           ((CCharacter *)this_ptr,0), local_18 < (float)0.98999999999999999)) {
    return 0;
  }
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(this_ptr->base).base.model.motion_controller,0);
  if (local_18 < 1.0) {
    return 0;
  }
  pCVar10 = (this_ptr->base).base.carry_hands[1].carry_actor;
  if ((pCVar10 == (CDemonActor *)0x0) ||
     (iVar6 = (*((pCVar10->vtable)._ub)->canPickup)(pCVar10,(CDemonActor *)this_ptr), iVar6 != 4)) {
    iStack_1c = 0;
    for (iStack_20 = 0; iStack_20 < g_CDemonSetPtr->actor_count; iStack_20 = iStack_20 + 1) {
      pCVar4 = (CActorDestination *)
               core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iStack_1c),
                          g_CActorDestinationClassInfo.name_hash);
      local_30 = pCVar4;
      if ((pCVar4 != (CActorDestination *)0x0) &&
         (iVar6 = core_dest_cpp_CActorDestination_FUN_0046fd50(pCVar4), iVar6 != 0)) {
        pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           ((CDemonActor *)this_ptr,&CStack_c0,
                            &(((this_ptr->base).base.carry_hands[1].carry_actor)->location).position
                           );
        pCVar12 = &(pCVar4->base).location;
        pCVar8 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           ((CDemonActor *)this_ptr,&CStack_84,&pCVar12->position);
        fVar9 = pCVar8->x - pCVar7->x;
        fVar2 = pCVar8->y - pCVar7->y;
        fVar3 = pCVar8->z - pCVar7->z;
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"Delta to dest : %3.2f,%3.2f,%3.2f\n",(double)fVar9,(double)fVar2,
                   (double)fVar3);
        if ((((0.0 < fVar3) &&
             ((fVar3 < (float)3 && (ABS(fVar9) < (float)2)))) &&
            (dVar1 = (double)fVar2, 0.0 < dVar1)) && (dVar1 < 4)) {
          pCVar7 = &(this_ptr->base).target_position;
          this_ptr->action_pending = 2;
          if ((CLocation *)pCVar7 != pCVar12) {
            pCVar7->x = (pCVar12->position).x;
            (this_ptr->base).target_position.y = (pCVar4->base).location.position.y;
            (this_ptr->base).target_position.z = (pCVar4->base).location.position.z;
          }
          pUVar5 = &(this_ptr->base).target_orientation;
          pUVar11 = &(local_30->base).orient;
          if (pUVar5 != pUVar11) {
            (pUVar5->vec).x = (pUVar11->vec).x;
            (this_ptr->base).target_orientation.vec.y = (local_30->base).orient.vec.y;
            (this_ptr->base).target_orientation.vec.z = (local_30->base).orient.vec.z;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0x16,1);
          return 1;
        }
      }
      iStack_1c = iStack_1c + 4;
    }
  }
  else {
    local_18 = 0.0;
    for (local_24 = 0; local_24 < g_CDemonSetPtr->actor_count; local_24 = local_24 + 1) {
      pCVar4 = (CActorDestination *)
               core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)((int)g_CDemonSetPtr->actors + (int)local_18),
                          g_CActorDestinationClassInfo.name_hash);
      pCStack_2c = pCVar4;
      if ((pCVar4 != (CActorDestination *)0x0) &&
         (iVar6 = core_dest_cpp_CActorDestination_FUN_0046fd50(pCVar4), iVar6 != 0)) {
        pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           ((CDemonActor *)this_ptr,&CStack_a8,
                            &(((this_ptr->base).base.carry_hands[1].carry_actor)->location).position
                           );
        pCVar12 = &(pCVar4->base).location;
        pCVar8 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           ((CDemonActor *)this_ptr,&CStack_3c,&pCVar12->position);
        fStack_90 = pCVar8->x - pCVar7->x;
        local_8c = pCVar8->y - pCVar7->y;
        fStack_88 = pCVar8->z - pCVar7->z;
        if ((0.0 < fStack_88) &&
           ((((fStack_88 < (float)3 && (ABS(fStack_90) < (float)2)) &&
             (in_stack_ffffff18 = (double)local_8c, 0.0 < in_stack_ffffff18)) &&
            (in_stack_ffffff18 < 4)))) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0x1a,1);
          pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             ((CDemonActor *)this_ptr,&CStack_60,&pCVar12->position);
          if (&this_ptr->carry_object_world_center != pCVar7) {
            (this_ptr->carry_object_world_center).x = pCVar7->x;
            (this_ptr->carry_object_world_center).y = pCVar7->y;
            (this_ptr->carry_object_world_center).z = pCVar7->z;
          }
          fStack_14 = (this_ptr->carry_object_bbox).max.y - (this_ptr->carry_object_bbox).min.y;
          fVar9 = core_stranger_cpp_FUN_005bb010();
          iVar6 = this_ptr->action_pending;
          (this_ptr->carry_object_world_center).y =
               (fStack_14 - fVar9) + (this_ptr->carry_object_world_center).y;
          if (iVar6 != 0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",iVar6,0xe78);
          }
          pCVar7 = &(this_ptr->base).target_position;
          pCVar12 = &(pCStack_2c->base).location;
          this_ptr->action_pending = 2;
          if ((CLocation *)pCVar7 != pCVar12) {
            pCVar7->x = (pCVar12->position).x;
            (this_ptr->base).target_position.y = (pCStack_2c->base).location.position.y;
            (this_ptr->base).target_position.z = (pCStack_2c->base).location.position.z;
          }
          pUVar11 = &(this_ptr->base).target_orientation;
          pUVar5 = &(pCStack_2c->base).orient;
          if (pUVar11 != pUVar5) {
            (pUVar11->vec).x = (pUVar5->vec).x;
            (this_ptr->base).target_orientation.vec.y = (pCStack_2c->base).orient.vec.y;
            (this_ptr->base).target_orientation.vec.z = (pCStack_2c->base).orient.vec.z;
          }
          return 1;
        }
      }
      local_18 = (float)((int)local_18 + 4);
    }
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
            (g_CDemonSetPtr,(this_ptr->base).base.carry_hands[1].carry_actor);
  pCVar10 = (this_ptr->base).base.carry_hands[1].carry_actor;
  local_6c = (pCVar10->location).position.x;
  fStack_68 = (pCVar10->location).position.y;
  fStack_64 = (pCVar10->location).position.z;
  local_b4.x = 0.0;
  local_b4.y = 0.0;
  local_b4.z = 1.0;
  pCVar7 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     ((CDemonActor *)this_ptr,&CStack_9c,&local_b4);
  local_6c = local_6c + pCVar7->x;
  fStack_64 = fStack_64 + pCVar7->z;
  fStack_68 = (this_ptr->base).base.base.location.position.y;
  local_54.x = 0.0;
  local_54.y = 0.0;
  local_54.z = 1.5;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            ((CDemonActor *)this_ptr,&local_78,&local_54);
  fVar9 = core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00573470
                    (g_CDemonSetPtr,local_6c,fStack_64,local_78.x,local_78.z,1.0,0.1,3.0);
  if (fVar9 < 1.0) {
    core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
    return 0;
  }
  local_cc.x = local_6c + local_78.x;
  local_cc.y = fStack_68 + local_78.y;
  local_cc.z = fStack_64 + local_78.z;
  local_28 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                       (g_CDemonSetPtr,&local_cc,0.5);
  core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
  if (ABS(local_28 - (this_ptr->base).base.base.location.position.y) <= 1.0) {
    iVar6 = 0;
    iVar13 = 0;
    do {
      force_immediate = (int)((ulonglong)in_stack_ffffff18 >> 0x20);
      if (g_CDemonSetPtr->actor_count <= iVar6) {
        pCVar10 = (this_ptr->base).base.carry_hands[1].carry_actor;
        this_ptr->action_pending = 6;
        if ((pCVar10 == (CDemonActor *)0x0) ||
           (iVar6 = (*((pCVar10->vtable)._ub)->canPickup)(pCVar10,(CDemonActor *)this_ptr),
           iVar6 != 4)) {
          iVar6 = 0x14;
        }
        else {
          force_immediate = 1;
          iVar6 = 0x19;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,iVar6,force_immediate);
        this_ptr->action_timer = 4.0;
        return 1;
      }
      pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c790
                          (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar13),
                           g_CCrateClassInfo.name_hash);
      if (pCVar10 != (CDemonActor *)0x0) {
        local_48 = (pCVar10->location).position.x - local_6c;
        fStack_44 = (pCVar10->location).position.y - fStack_68;
        fStack_40 = (pCVar10->location).position.z - fStack_64;
        if (SQRT(fStack_40 * fStack_40 + local_48 * local_48 + fStack_44 * fStack_44) <
            (float)2) {
          return 0;
        }
      }
      iVar6 = iVar6 + 1;
      iVar13 = iVar13 + 4;
    } while( true );
  }
  return 0;
}

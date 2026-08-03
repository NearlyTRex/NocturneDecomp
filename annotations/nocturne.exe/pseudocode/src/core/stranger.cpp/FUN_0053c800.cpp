// Name: core_stranger.cpp_FUN_0053c800
// Address: 0053c800
// Address Range: [[0053c800, 0053cf8b]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_FUN_0053c800(CStranger *this_ptr)

#include "nocturne.h"

int __cdecl core_stranger_cpp_FUN_0053c800(CStranger *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  CActorDestination *pCVar6;
  UOrientationVector *pUVar7;
  int iVar8;
  CVector3f *pCVar9;
  CVector3f *pCVar10;
  float fVar11;
  CDemonActor *pCVar12;
  UOrientationVector *pUVar13;
  CLocation *pCVar14;
  int iVar15;
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
     (local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
                           ((CCharacter *)this_ptr,0), local_18 < (float)0.98999999999999999)) {
    return 0;
  }
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                       (&(this_ptr->base).base.model.motion_controller,0);
  if (local_18 < 1.0) {
    return 0;
  }
  pCVar12 = (this_ptr->base).base.carry_hands[1].carry_actor;
  if ((pCVar12 == (CDemonActor *)0x0) ||
     (iVar8 = (*((pCVar12->vtable)._ub)->canPickup)(pCVar12,(CDemonActor *)this_ptr), iVar8 != 4)) {
    iStack_1c = 0;
    for (iStack_20 = 0; iStack_20 < g_CDemonSet_PTR_005be368->actor_count; iStack_20 = iStack_20 + 1
        ) {
      pCVar6 = (CActorDestination *)
               core_actor_cpp_castToClassHash_FUN_0040d890
                         (*(CDemonActor **)((int)g_CDemonSet_PTR_005be368->actors + iStack_1c),
                          g_CActorDestinationActorType_014b8a1c.name_hash);
      local_30 = pCVar6;
      if ((pCVar6 != (CActorDestination *)0x0) &&
         (iVar8 = core_dest_cpp_CActorDestination_acceptsActor_FUN_0044bab0
                            (pCVar6,(this_ptr->base).base.carry_hands[1].carry_actor), iVar8 != 0))
      {
        pCVar9 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                           ((CDemonActor *)this_ptr,&CStack_c0,
                            &(((this_ptr->base).base.carry_hands[1].carry_actor)->location).position
                           );
        pCVar14 = &(pCVar6->base).location;
        pCVar10 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                            ((CDemonActor *)this_ptr,&CStack_84,&pCVar14->position);
        fVar11 = pCVar10->x;
        fVar1 = pCVar9->x;
        fVar2 = pCVar10->y;
        fVar3 = pCVar9->y;
        fVar5 = pCVar10->z - pCVar9->z;
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (g_CConsole_PTR_005ad350,"Delta to dest : %3.2f,%3.2f,%3.2f\n");
        if ((((0.0 < fVar5) &&
             ((fVar5 < (float)3 && (ABS(fVar11 - fVar1) < (float)2))))
            && (dVar4 = (double)(fVar2 - fVar3), 0.0 < dVar4)) && (dVar4 < 4)) {
          pCVar9 = &(this_ptr->base).target_position;
          this_ptr->action_pending = 2;
          if ((CLocation *)pCVar9 != pCVar14) {
            pCVar9->x = (pCVar14->position).x;
            (this_ptr->base).target_position.y = (pCVar6->base).location.position.y;
            (this_ptr->base).target_position.z = (pCVar6->base).location.position.z;
          }
          pUVar7 = &(this_ptr->base).target_orientation;
          pUVar13 = &(local_30->base).orient;
          if (pUVar7 != pUVar13) {
            (pUVar7->vec).x = (pUVar13->vec).x;
            (this_ptr->base).target_orientation.vec.y = (local_30->base).orient.vec.y;
            (this_ptr->base).target_orientation.vec.z = (local_30->base).orient.vec.z;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(this_ptr->base).base.model.motion_controller,0x16,1);
          return 1;
        }
      }
      iStack_1c = iStack_1c + 4;
    }
  }
  else {
    local_18 = 0.0;
    for (local_24 = 0; local_24 < g_CDemonSet_PTR_005be368->actor_count; local_24 = local_24 + 1) {
      pCVar6 = (CActorDestination *)
               core_actor_cpp_castToClassHash_FUN_0040d890
                         (*(CDemonActor **)((int)g_CDemonSet_PTR_005be368->actors + (int)local_18),
                          g_CActorDestinationActorType_014b8a1c.name_hash);
      pCStack_2c = pCVar6;
      if ((pCVar6 != (CActorDestination *)0x0) &&
         (iVar8 = core_dest_cpp_CActorDestination_acceptsActor_FUN_0044bab0
                            (pCVar6,(this_ptr->base).base.carry_hands[1].carry_actor), iVar8 != 0))
      {
        pCVar9 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                           ((CDemonActor *)this_ptr,&CStack_a8,
                            &(((this_ptr->base).base.carry_hands[1].carry_actor)->location).position
                           );
        pCVar14 = &(pCVar6->base).location;
        pCVar10 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                            ((CDemonActor *)this_ptr,&CStack_3c,&pCVar14->position);
        fStack_90 = pCVar10->x - pCVar9->x;
        local_8c = pCVar10->y - pCVar9->y;
        fStack_88 = pCVar10->z - pCVar9->z;
        if ((0.0 < fStack_88) &&
           ((((fStack_88 < (float)3 && (ABS(fStack_90) < (float)2)) &&
             (in_stack_ffffff18 = (double)local_8c, 0.0 < in_stack_ffffff18)) &&
            (in_stack_ffffff18 < 4)))) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(this_ptr->base).base.model.motion_controller,0x1a,1);
          pCVar9 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                             ((CDemonActor *)this_ptr,&CStack_60,&pCVar14->position);
          if (&this_ptr->carry_object_world_center != pCVar9) {
            (this_ptr->carry_object_world_center).x = pCVar9->x;
            (this_ptr->carry_object_world_center).y = pCVar9->y;
            (this_ptr->carry_object_world_center).z = pCVar9->z;
          }
          fStack_14 = (this_ptr->carry_object_bbox).max.y - (this_ptr->carry_object_bbox).min.y;
          fVar11 = core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_00534fc0
                             ((this_ptr->base).base.carry_hands[1].carry_actor);
          iVar8 = this_ptr->action_pending;
          (this_ptr->carry_object_world_center).y =
               (fStack_14 - fVar11) + (this_ptr->carry_object_world_center).y;
          if (iVar8 != 0) {
            shape_edittool_cpp_FUN_0046fb40
                      (g_CEditorTools_PTR_005b6d50,"actionPending = %d\nstranger.cpp line %d",iVar8,0xe6f);
          }
          pCVar9 = &(this_ptr->base).target_position;
          pCVar14 = &(pCStack_2c->base).location;
          this_ptr->action_pending = 2;
          if ((CLocation *)pCVar9 != pCVar14) {
            pCVar9->x = (pCVar14->position).x;
            (this_ptr->base).target_position.y = (pCStack_2c->base).location.position.y;
            (this_ptr->base).target_position.z = (pCStack_2c->base).location.position.z;
          }
          pUVar13 = &(this_ptr->base).target_orientation;
          pUVar7 = &(pCStack_2c->base).orient;
          if (pUVar13 != pUVar7) {
            (pUVar13->vec).x = (pUVar7->vec).x;
            (this_ptr->base).target_orientation.vec.y = (pCStack_2c->base).orient.vec.y;
            (this_ptr->base).target_orientation.vec.z = (pCStack_2c->base).orient.vec.z;
          }
          return 1;
        }
      }
      local_18 = (float)((int)local_18 + 4);
    }
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(g_CDemonSet_PTR_005be368,(CDemonActor *)this_ptr);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
            (g_CDemonSet_PTR_005be368,(this_ptr->base).base.carry_hands[1].carry_actor);
  pCVar12 = (this_ptr->base).base.carry_hands[1].carry_actor;
  local_6c = (pCVar12->location).position.x;
  fStack_68 = (pCVar12->location).position.y;
  fStack_64 = (pCVar12->location).position.z;
  local_b4.x = 0.0;
  local_b4.y = 0.0;
  local_b4.z = 1.0;
  pCVar9 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                     ((CDemonActor *)this_ptr,&CStack_9c,&local_b4);
  local_6c = local_6c + pCVar9->x;
  fStack_64 = fStack_64 + pCVar9->z;
  fStack_68 = (this_ptr->base).base.base.location.position.y;
  local_54.x = 0.0;
  local_54.y = 0.0;
  local_54.z = 1.5;
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
            ((CDemonActor *)this_ptr,&local_78,&local_54);
  fVar11 = core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00510a40
                     (g_CDemonSet_PTR_005be368,local_6c,fStack_64,local_78.x,local_78.z,1.0,0.1,3.0)
  ;
  if (fVar11 < 1.0) {
    core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
    return 0;
  }
  local_cc.x = local_6c + local_78.x;
  local_cc.y = fStack_68 + local_78.y;
  local_cc.z = fStack_64 + local_78.z;
  local_28 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
                       (g_CDemonSet_PTR_005be368,&local_cc,0.5);
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
  if (ABS(local_28 - (this_ptr->base).base.base.location.position.y) <= 1.0) {
    iVar8 = 0;
    iVar15 = 0;
    do {
      force_immediate = (int)((ulonglong)in_stack_ffffff18 >> 0x20);
      if (g_CDemonSet_PTR_005be368->actor_count <= iVar8) {
        pCVar12 = (this_ptr->base).base.carry_hands[1].carry_actor;
        this_ptr->action_pending = 6;
        if ((pCVar12 == (CDemonActor *)0x0) ||
           (iVar8 = (*((pCVar12->vtable)._ub)->canPickup)(pCVar12,(CDemonActor *)this_ptr),
           iVar8 != 4)) {
          iVar8 = 0x14;
        }
        else {
          force_immediate = 1;
          iVar8 = 0x19;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(this_ptr->base).base.model.motion_controller,iVar8,force_immediate);
        this_ptr->action_timer = 4.0;
        return 1;
      }
      pCVar12 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(CDemonActor **)((int)g_CDemonSet_PTR_005be368->actors + iVar15),
                           g_CCrateActorType_0077bd40.name_hash);
      if (pCVar12 != (CDemonActor *)0x0) {
        local_48 = (pCVar12->location).position.x - local_6c;
        fStack_44 = (pCVar12->location).position.y - fStack_68;
        fStack_40 = (pCVar12->location).position.z - fStack_64;
        if (SQRT(fStack_40 * fStack_40 + local_48 * local_48 + fStack_44 * fStack_44) <
            (float)2) {
          return 0;
        }
      }
      iVar8 = iVar8 + 1;
      iVar15 = iVar15 + 4;
    } while( true );
  }
  return 0;
}

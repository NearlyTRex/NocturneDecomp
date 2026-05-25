// Name: core_stranger.cpp_CStranger_tryPlaceObject_FUN_005c2850
// Address: 005c2850
// MANUAL RECONSTRUCTION
// Address Range: [[005c2850, 005c2fdb]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_tryPlaceObject_FUN_005c2850(CStranger *this_ptr)

#include "nocturne.h"

int __cdecl core_stranger_cpp_CStranger_tryPlaceObject_FUN_005c2850(CStranger *this_ptr)

{
  UOrientationVector *pUVar1;
  CDemonActor *pCVar2;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  CActorDestination *pCVar4;
  CActorDestination *this_ptr_00;
  int iVar8;
  CVector3f *pCVar9;
  float fVar10;
  CLocation *pCVar11;
  UOrientationVector *pUVar5;
  int iVar6;
  CVector3f *pCVar7;
  CVector3f *pCVar8;
  CVector3f *pCVar13;
  float fVar9;
  float fVar14;
  CCrate *pCVar10;
  UOrientationVector *pUVar11;
  CLocation *pCVar12;
  UOrientationVector *pUVar15;
  int iVar16;
  CVector3f local_cc;
  CVector3f CStack_c0;
  CVector3f local_b4;
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  CVector3f CStack_84;
  CVector3f local_78;
  CVector3f CStack_60;
  CVector3f local_54;
  CVector3f CStack_3c;
  int local_24;
  int iStack_20;
  float fVar2;
  float fVar3;
  
  if ((this_ptr->base).object_to_pick_up != (CDemonActor *)0x0) {
    return 0;
  }
  if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
    return 0;
  }
  if (((this_ptr->base).base.layer_action_index != 0xe) &&
     (fVar7 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                        ((CCharacter *)this_ptr,0), fVar7 < (float)0.98999999999999999)) {
    return 0;
  }
  fVar7 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&(this_ptr->base).base.model.motion_controller,0);
  if (fVar7 < 1.0) {
    return 0;
  }
  pCVar2 = (this_ptr->base).base.carry_hands[1].carry_actor;
  if ((pCVar2 == (CDemonActor *)0x0) ||
     (iVar16 = (*((pCVar2->vtable)._ub)->canPickup)(pCVar2,(CDemonActor *)this_ptr), iVar16 != 4)) {
    for (iStack_20 = 0; iStack_20 < g_CDemonSetPtr->actor_count; iStack_20 = iStack_20 + 1) {
      pCVar4 = (CActorDestination *)
               core_actor_cpp_castToClassHash_FUN_0040c790
                         (g_CDemonSetPtr->actors[iStack_20],
                          g_CActorDestinationClassInfo.name_hash);
      if ((pCVar4 != (CActorDestination *)0x0) &&
         (iVar6 = core_dest_cpp_CActorDestination_acceptsActor_FUN_0046fd50
                            (pCVar4,(this_ptr->base).base.carry_hands[1].carry_actor), iVar6 != 0))
      {
        pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           ((CDemonActor *)this_ptr,&CStack_c0,
                            &(((this_ptr->base).base.carry_hands[1].carry_actor)->location).position
                           );
        pCVar11 = &(pCVar4->base).location;
        pCVar8 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           ((CDemonActor *)this_ptr,&CStack_84,&pCVar11->position);
        fVar7 = pCVar8->x - pCVar7->x;
        fVar2 = pCVar8->y - pCVar7->y;
        fVar3 = pCVar8->z - pCVar7->z;
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"Delta to dest : %3.2f,%3.2f,%3.2f\n",(double)fVar7,(double)fVar2,
                   (double)fVar3);
        if ((0.0 < fVar3) &&
            (fVar3 < (float)3) && (ABS(fVar7) < (float)2) &&
            (0.0 < fVar2) && (fVar2 < (float)4)) {
          pCVar13 = &(this_ptr->base).target_position;
          this_ptr->action_pending = 2;
          if ((CLocation *)pCVar13 != pCVar11) {
            (this_ptr->base).target_position = pCVar11->position;
          }
          pUVar1 = &(this_ptr->base).target_orientation;
          pUVar15 = &(pCVar4->base).orient;
          if (pUVar1 != pUVar15) {
            (this_ptr->base).target_orientation.vec = pUVar15->vec;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0x16,1);
          return 1;
        }
      }
    }
  }
  else {
    for (local_24 = 0; local_24 < g_CDemonSetPtr->actor_count; local_24 = local_24 + 1) {
      this_ptr_00 = (CActorDestination *)
                    core_actor_cpp_castToClassHash_FUN_0040c790
                              (g_CDemonSetPtr->actors[local_24],
                               g_CActorDestinationClassInfo.name_hash);
      if ((this_ptr_00 != (CActorDestination *)0x0) &&
         (iVar8 = core_dest_cpp_CActorDestination_acceptsActor_FUN_0046fd50
                            (this_ptr_00,(this_ptr->base).base.carry_hands[1].carry_actor),
         iVar8 != 0)) {
        pCVar13 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                            ((CDemonActor *)this_ptr,&CStack_a8,
                             &(((this_ptr->base).base.carry_hands[1].carry_actor)->location).
                              position);
        pCVar12 = &(this_ptr_00->base).location;
        pCVar9 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           ((CDemonActor *)this_ptr,&CStack_3c,&pCVar12->position);
        fVar7 = pCVar9->z - pCVar13->z;
        fVar2 = pCVar9->y - pCVar13->y;
        if ((0.0 < fVar7) &&
           (fVar7 < (float)3 &&
            (ABS(pCVar9->x - pCVar13->x) < (float)2) &&
            (0.0 < fVar2) && (fVar2 < (float)4))) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0x1a,1);
          pCVar13 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                              ((CDemonActor *)this_ptr,&CStack_60,&pCVar12->position);
          if (&this_ptr->carry_object_world_center != pCVar13) {
            this_ptr->carry_object_world_center = *pCVar13;
          }
          fVar7 = (this_ptr->carry_object_bbox).max.y;
          fVar4 = (this_ptr->carry_object_bbox).min.y;
          fVar10 = core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_005bb010
                             ((this_ptr->base).base.carry_hands[1].carry_actor);
          iVar16 = this_ptr->action_pending;
          (this_ptr->carry_object_world_center).y =
               ((fVar7 - fVar4) - fVar10) + (this_ptr->carry_object_world_center).y;
          if (iVar16 != 0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",iVar16,0xe78);
          }
          pCVar13 = &(this_ptr->base).target_position;
          pCVar11 = &(this_ptr_00->base).location;
          this_ptr->action_pending = 2;
          if ((CLocation *)pCVar13 != pCVar11) {
            (this_ptr->base).target_position = pCVar11->position;
          }
          pUVar11 = &(this_ptr->base).target_orientation;
          pUVar5 = &(this_ptr_00->base).orient;
          if (pUVar11 != pUVar5) {
            (this_ptr->base).target_orientation.vec = pUVar5->vec;
          }
          return 1;
        }
      }
    }
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
            (g_CDemonSetPtr,(this_ptr->base).base.carry_hands[1].carry_actor);
  pCVar2 = (this_ptr->base).base.carry_hands[1].carry_actor;
  fVar7 = (pCVar2->location).position.x;
  fVar4 = (pCVar2->location).position.z;
  local_b4.x = 0.0;
  local_b4.y = 0.0;
  local_b4.z = 1.0;
  pCVar13 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                      ((CDemonActor *)this_ptr,&CStack_9c,&local_b4);
  fVar7 = fVar7 + pCVar13->x;
  fVar4 = fVar4 + pCVar13->z;
  fVar10 = (this_ptr->base).base.base.location.position.y;
  local_54.x = 0.0;
  local_54.y = 0.0;
  local_54.z = 1.5;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            ((CDemonActor *)this_ptr,&local_78,&local_54);
  fVar9 = core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00573470
                    (g_CDemonSetPtr,fVar7,fVar4,local_78.x,local_78.z,1.0,0.1,3.0);
  if (fVar9 < 1.0) {
    core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
    return 0;
  }
  local_cc.x = fVar7 + local_78.x;
  local_cc.y = fVar10 + local_78.y;
  local_cc.z = fVar4 + local_78.z;
  fVar14 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                     (g_CDemonSetPtr,&local_cc,0.5);
  core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
  if (ABS(fVar14 - (this_ptr->base).base.base.location.position.y) <= 1.0) {
    for (iVar16 = 0; iVar16 < g_CDemonSetPtr->actor_count; iVar16 = iVar16 + 1) {
      pCVar10 = (CCrate *)
                core_actor_cpp_castToClassHash_FUN_0040c790
                          (g_CDemonSetPtr->actors[iVar16],
                           g_CCrateClassInfo.name_hash);
      if ((pCVar10 != (CCrate *)0x0) &&
         (fVar14 = (pCVar10->base).location.position.x - fVar7,
         fVar5 = (pCVar10->base).location.position.y - fVar10,
         fVar6 = (pCVar10->base).location.position.z - fVar4,
         SQRT(fVar6 * fVar6 + fVar14 * fVar14 + fVar5 * fVar5) < (float)2)) {
        return 0;
      }
    }
    pCVar2 = (this_ptr->base).base.carry_hands[1].carry_actor;
    this_ptr->action_pending = 6;
    if ((pCVar2 == (CDemonActor *)0x0) ||
       (iVar16 = (*((pCVar2->vtable)._ub)->canPickup)(pCVar2,(CDemonActor *)this_ptr),
       iVar16 != 4)) {
      iVar16 = 0x14;
    }
    else {
      iVar16 = 0x19;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar16,1);
    this_ptr->action_timer = 4.0;
    return 1;
  }
  return 0;
}

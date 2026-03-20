// Name: core_stranger.cpp_CStranger_tryPickupObject_FUN_005c1680
// Address: 005c1680
// Address Range: [[005c1680, 005c1ef9]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_tryPickupObject_FUN_005c1680(CStranger *this_ptr,char *class_name)

#include "nocturne.h"

int __cdecl core_stranger_cpp_CStranger_tryPickupObject_FUN_005c1680(CStranger *this_ptr,char *class_name)

{
  CLocation *input_world_point;
  CDeformableModelInstance *pCVar2;
  CDemonActor *pCVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  CDemonActor *pCVar3;
  CBoundingBox3D *pCVar9;
  CVector3f *pCVar4;
  int iVar10;
  int iVar5;
  int iVar11;
  CBoundingBox3D *pCVar6;
  CVector3f *pCVar7;
  CVector3f *pCVar12;
  CBoundingBox3D local_16c;
  CBoundingBox3D CStack_154;
  CVector3f CStack_13c;
  CVector3f CStack_130;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  CVector3f CStack_118;
  CVector3f CStack_10c;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  CVector3f CStack_f4;
  CVector3f CStack_e8;
  CVector3f CStack_dc;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  CVector3f CStack_c4;
  CVector3f CStack_b8;
  CVector3f CStack_ac;
  CVector3f CStack_a0;
  CVector3f CStack_94;
  CVector3f CStack_88;
  CVector3f CStack_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  int iStack_30;
  int iStack_2c;
  float local_28;
  CVector3f *local_24;
  float fStack_20;
  int local_1c;
  int local_18;
  float local_14;
  char *format;
  CDemonActor *pCVar8;
  float fVar2;
  CDeformableModelInstance *pCVar1;
  
  if ((((0.0 < this_ptr->action_timer) || ((this_ptr->base).object_to_pick_up != (CDemonActor *)0x0)
       ) || (fVar8 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                               ((CCharacter *)this_ptr,0), fVar8 < (float)0.98999999999999999)) ||
     (((fVar8 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                          (&(this_ptr->base).base.model.motion_controller,0), fVar8 < 1.0 ||
       ((this_ptr->base).base.carry_hands[0].carry_actor != (CDemonActor *)0x0)) ||
      ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0)))) {
    return 0;
  }
  input_world_point = &(this_ptr->base).base.base.location;
  local_28 = 4.0;
  local_18 = 0;
  for (local_1c = 0; local_1c < g_CDemonSetPtr->actor_count; local_1c = local_1c + 1) {
    pCVar5 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + local_18);
    pCVar3 = (*((pCVar5->vtable)._ub)->getCarrier)(pCVar5);
    if (pCVar3 == (CDemonActor *)0x0) {
      iVar11 = (*((pCVar5->vtable)._ub)->canPickup)(pCVar5,(CDemonActor *)this_ptr);
      switch(iVar11) {
      case 1:
        if ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (pCVar5,&CStack_7c,&input_world_point->position);
          fVar8 = SQRT(CStack_7c.z * CStack_7c.z +
                       CStack_7c.x * CStack_7c.x + CStack_7c.y * CStack_7c.y);
          if (fVar8 <= 0.0) {
            CStack_7c.y = 0.0;
            CStack_7c.x = 0.0;
            CStack_7c.z = 0.0;
          }
          else {
            fVar8 = 1.0 / fVar8;
            CStack_7c.x = CStack_7c.x * fVar8;
            CStack_7c.y = CStack_7c.y * fVar8;
            CStack_7c.z = CStack_7c.z * fVar8;
          }
          if (CStack_7c.z <= 0.0) {
            CStack_c4.y = 3.0;
            CStack_c4.z = 2.0;
            CStack_c4.x = 0.0;
            if (&CStack_13c != &CStack_c4) {
              CStack_13c.x = 0.0;
              CStack_13c.z = 2.0;
              CStack_13c.y = 3.0;
            }
            goto LAB_005c17d2;
          }
        }
        break;
      case 2:
        if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
          CStack_10c.y = 3.0;
          CStack_10c.z = 2.0;
          CStack_10c.x = 0.0;
          if (&CStack_13c != &CStack_10c) {
            CStack_13c.z = 2.0;
            CStack_13c.y = 3.0;
            CStack_13c.x = 0.0;
          }
LAB_005c17d2:
          pCVar12 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                              ((CDemonActor *)this_ptr,&CStack_94,&CStack_13c);
          pCVar9 = (*((pCVar5->vtable)._ub)->getBoundingBox)(pCVar5,&CStack_154);
          CStack_58.x = ((pCVar9->min).x + (pCVar9->max).x) * 0.5f;
          CStack_58.y = ((pCVar9->min).y + (pCVar9->max).y) * 0.5f;
          CStack_58.z = ((pCVar9->min).z + (pCVar9->max).z) * 0.5f;
          pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (pCVar5,&CStack_130,&CStack_58);
          fVar8 = pCVar4->x - pCVar12->x;
          fVar6 = pCVar4->z - pCVar12->z;
          if (((ABS(pCVar4->y - pCVar12->y) <= (float)5) &&
              (fVar8 = fVar8 * fVar8 + fVar6 * fVar6, fVar8 <= local_28)) &&
             (iVar10 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar5,class_name), iVar10 != 0)) {
            (this_ptr->base).object_to_pick_up = pCVar5;
            iStack_30 = iVar11;
            local_28 = fVar8;
          }
        }
        break;
      case 3:
      case 4:
        if (((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) &&
           ((iVar5 = (*((pCVar5->vtable)._ub)->canPickup)(pCVar5,(CDemonActor *)this_ptr),
            iVar5 != 4 ||
            ((core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        (pCVar5,&CStack_a0,&input_world_point->position), ABS(CStack_a0.x) <= 1.0 &&
             (pCVar12 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                  (&CStack_88,&CStack_a0), ABS(pCVar12->y) <= (float)20
             )))))) {
          CStack_4c.x = 0.0;
          CStack_4c.y = 3.0;
          CStack_4c.z = 2.0;
          if (&CStack_13c != &CStack_4c) {
            CStack_13c.y = 3.0;
            CStack_13c.z = 2.0;
            CStack_13c.x = 0.0;
          }
          goto LAB_005c17d2;
        }
      }
    }
    local_18 = local_18 + 4;
  }
  pCVar5 = (this_ptr->base).object_to_pick_up;
  if (pCVar5 == (CDemonActor *)0x0) {
    return 0;
  }
  pCVar6 = (*((pCVar5->vtable)._ub)->getBoundingBox)(pCVar5,&local_16c);
  if (&this_ptr->carry_object_bbox != pCVar6) {
    (this_ptr->carry_object_bbox).min.x = (pCVar6->min).x;
    (this_ptr->carry_object_bbox).min.y = (pCVar6->min).y;
    (this_ptr->carry_object_bbox).min.z = (pCVar6->min).z;
  }
  pCVar12 = &(this_ptr->carry_object_bbox).max;
  if (pCVar12 != &pCVar6->max) {
    pCVar12->x = (pCVar6->max).x;
    (this_ptr->carry_object_bbox).max.y = (pCVar6->max).y;
    (this_ptr->carry_object_bbox).max.z = (pCVar6->max).z;
  }
  CStack_40.x = ((this_ptr->carry_object_bbox).min.x + (this_ptr->carry_object_bbox).max.x) *
                0.5f;
  CStack_40.y = ((this_ptr->carry_object_bbox).min.y + (this_ptr->carry_object_bbox).max.y) *
                0.5f;
  CStack_40.z = ((this_ptr->carry_object_bbox).min.z + (this_ptr->carry_object_bbox).max.z) *
                0.5f;
  pCVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     ((this_ptr->base).object_to_pick_up,&CStack_e8,&CStack_40);
  pCVar12 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                      ((CDemonActor *)this_ptr,&CStack_dc,pCVar7);
  if (&this_ptr->carry_object_world_center != pCVar12) {
    (this_ptr->carry_object_world_center).x = pCVar12->x;
    (this_ptr->carry_object_world_center).y = pCVar12->y;
    (this_ptr->carry_object_world_center).z = pCVar12->z;
  }
  switch(iStack_30) {
  case 1:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,0x1b,1);
    pCVar8 = (this_ptr->base).object_to_pick_up;
    format = "Rummaging %s\n";
    break;
  case 2:
  case 3:
  case 4:
    pCVar5 = (this_ptr->base).object_to_pick_up;
    if ((pCVar5 == (CDemonActor *)0x0) ||
       (iVar11 = (*((pCVar5->vtable)._ub)->canPickup)(pCVar5,(CDemonActor *)this_ptr), iVar11 != 4))
    {
      pCVar2 = &(this_ptr->base).base.model;
      if ((this_ptr->carry_object_world_center).y <= (float)2) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar2->motion_controller,0x13,1);
        pCVar8 = (this_ptr->base).object_to_pick_up;
        format = "Picking up %s off ground\n";
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                  (pCVar2,&CStack_b8,g_StrangerIndices[0xe]);
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                  (pCVar2,&CStack_ac,g_StrangerIndices[4]);
        fVar8 = CStack_ac.x - (this_ptr->carry_object_world_center).x;
        fVar6 = CStack_ac.y - (this_ptr->carry_object_world_center).y;
        fVar7 = CStack_ac.z - (this_ptr->carry_object_world_center).z;
        if ((float)2 <
            ABS(SQRT((CStack_b8.z - CStack_ac.z) * (CStack_b8.z - CStack_ac.z) +
                     (CStack_b8.x - CStack_ac.x) * (CStack_b8.x - CStack_ac.x) +
                     (CStack_b8.y - CStack_ac.y) * (CStack_b8.y - CStack_ac.y)) -
                SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6))) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s out of reach - canceling pickup\n",
                     (this_ptr->base).object_to_pick_up);
          (this_ptr->base).object_to_pick_up = (CDemonActor *)0x0;
          return 0;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar2->motion_controller,0x15,1);
        pCVar8 = (this_ptr->base).object_to_pick_up;
        format = "Picking up %s waist level\n";
      }
    }
    else {
      pCVar12 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                          ((this_ptr->base).object_to_pick_up,&CStack_f4,
                           &(this_ptr->base).base.base.location.position);
      fVar2 = (this_ptr->carry_object_world_center).y;
      pCVar2 = &(this_ptr->base).base.model;
      this_ptr->pickup_facing_reversed = (uint)(0.0 < pCVar12->z);
      if ((float)2.5 < fVar2) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar2->motion_controller,0x18,1);
        pCVar12 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                            ((CDemonActor *)this_ptr,&CStack_118,
                             &(((this_ptr->base).object_to_pick_up)->location).position);
        if (&this_ptr->carry_object_world_center != pCVar12) {
          (this_ptr->carry_object_world_center).x = pCVar12->x;
          (this_ptr->carry_object_world_center).y = pCVar12->y;
          (this_ptr->carry_object_world_center).z = pCVar12->z;
        }
        pCVar8 = (this_ptr->base).object_to_pick_up;
        format = "Picking up heavy %s shelf\n";
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar2->motion_controller,0x17,1);
        pCVar8 = (this_ptr->base).object_to_pick_up;
        format = "Picking up heavy %s crate\n";
      }
    }
    break;
  default:
    g_CurrentFilename = "..\\core\\stranger.cpp";
    g_CurrentLineNumber = 0xd3a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze - invalid pickUpType: %d",iStack_30);
    goto LAB_005c1c40;
  }
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,format,pCVar8);
LAB_005c1c40:
  this_ptr->action_timer = 4.0;
  this_ptr->action_pending = 4;
  return 1;
}

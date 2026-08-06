// Name: core_stranger.cpp_CStranger_tryPickupObject_FUN_0053b630
// Address: 0053b630
// Address Range: [[0053b630, 0053bea9]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_tryPickupObject_FUN_0053b630(CStranger *this_ptr,char *class_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_stranger_cpp_CStranger_tryPickupObject_FUN_0053b630(CStranger *this_ptr,char *class_name)

{
  CDeformableModelInstance *pCVar1;
  float fVar2;
  CDemonActor *pCVar3;
  CDemonActor *pCVar4;
  CVector3f *pCVar5;
  int iVar6;
  CBoundingBox3D *pCVar7;
  CVector3f *pCVar8;
  char *format;
  CBoundingBox3D CStack_16c;
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
  
  if ((((0.0 < this_ptr->action_timer) || ((this_ptr->base).object_to_pick_up != (CDemonActor *)0x0)
       ) || (local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
                                  ((CCharacter *)this_ptr,0), local_14 < (float)0.98999999999999999)) ||
     (((local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                             (&(this_ptr->base).base.model.motion_controller,0), local_14 < 1.0 ||
       ((this_ptr->base).base.carry_hands[0].carry_actor != (CDemonActor *)0x0)) ||
      ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0)))) {
    return 0;
  }
  local_24 = &(this_ptr->base).base.base.location.position;
  local_28 = 4.0;
  local_18 = 0;
  for (local_1c = 0; local_1c < g_CDemonSet_PTR_005be368->actor_count; local_1c = local_1c + 1) {
    pCVar3 = *(CDemonActor **)((int)g_CDemonSet_PTR_005be368->actors + local_18);
    pCVar4 = (*((pCVar3->vtable)._ub)->getCarrier)(pCVar3);
    if (pCVar4 == (CDemonActor *)0x0) {
      iStack_2c = (*((pCVar3->vtable)._ub)->canPickup)(pCVar3,(CDemonActor *)this_ptr);
      switch(iStack_2c) {
      case 1:
        if ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(pCVar3,&CStack_7c,local_24);
          fVar2 = SQRT(CStack_7c.z * CStack_7c.z +
                       CStack_7c.x * CStack_7c.x + CStack_7c.y * CStack_7c.y);
          if (fVar2 <= 0.0) {
            CStack_7c.y = 0.0;
            CStack_7c.x = 0.0;
            CStack_7c.z = 0.0;
          }
          else {
            fVar2 = 1.0 / fVar2;
            CStack_7c.x = CStack_7c.x * fVar2;
            CStack_7c.y = CStack_7c.y * fVar2;
            CStack_7c.z = CStack_7c.z * fVar2;
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
            goto LAB_0053b782;
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
LAB_0053b782:
          pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                             ((CDemonActor *)this_ptr,&CStack_94,&CStack_13c);
          pCVar7 = (*((pCVar3->vtable)._ub)->getBoundingBox)(pCVar3,&CStack_154);
          fStack_d0 = (pCVar7->min).x + (pCVar7->max).x;
          fStack_cc = (pCVar7->min).y + (pCVar7->max).y;
          CStack_58.x = fStack_d0 * 0.5f;
          CStack_58.y = fStack_cc * 0.5f;
          fStack_c8 = (pCVar7->min).z + (pCVar7->max).z;
          CStack_58.z = fStack_c8 * 0.5f;
          pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                             (pCVar3,&CStack_130,&CStack_58);
          fStack_100 = pCVar5->x - pCVar8->x;
          fStack_fc = pCVar5->y - pCVar8->y;
          fStack_f8 = pCVar5->z - pCVar8->z;
          if (((ABS(fStack_fc) <= (float)5) &&
              (fStack_20 = fStack_100 * fStack_100 + fStack_f8 * fStack_f8, fStack_20 <= local_28))
             && (iVar6 = core_actor_cpp_isOfClass_FUN_0040d7e0(pCVar3,class_name), iVar6 != 0)) {
            local_28 = fStack_20;
            iStack_30 = iStack_2c;
            (this_ptr->base).object_to_pick_up = pCVar3;
          }
        }
        break;
      case 3:
      case 4:
        if (((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) &&
           ((iVar6 = (*((pCVar3->vtable)._ub)->canPickup)(pCVar3,(CDemonActor *)this_ptr),
            iVar6 != 4 ||
            ((core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(pCVar3,&CStack_a0,local_24),
             ABS(CStack_a0.x) <= 1.0 &&
             (pCVar8 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                                 (&CStack_88,&CStack_a0), ABS(pCVar8->y) <= (float)20))
            )))) {
          CStack_4c.x = 0.0;
          CStack_4c.y = 3.0;
          CStack_4c.z = 2.0;
          if (&CStack_13c != &CStack_4c) {
            CStack_13c.y = 3.0;
            CStack_13c.z = 2.0;
            CStack_13c.x = 0.0;
          }
          goto LAB_0053b782;
        }
      }
    }
    local_18 = local_18 + 4;
  }
  pCVar3 = (this_ptr->base).object_to_pick_up;
  if (pCVar3 == (CDemonActor *)0x0) {
    return 0;
  }
  pCVar7 = (*((pCVar3->vtable)._ub)->getBoundingBox)(pCVar3,&CStack_16c);
  if (&this_ptr->carry_object_bbox != pCVar7) {
    (this_ptr->carry_object_bbox).min.x = (pCVar7->min).x;
    (this_ptr->carry_object_bbox).min.y = (pCVar7->min).y;
    (this_ptr->carry_object_bbox).min.z = (pCVar7->min).z;
  }
  pCVar8 = &(this_ptr->carry_object_bbox).max;
  if (pCVar8 != &pCVar7->max) {
    pCVar8->x = (pCVar7->max).x;
    (this_ptr->carry_object_bbox).max.y = (pCVar7->max).y;
    (this_ptr->carry_object_bbox).max.z = (pCVar7->max).z;
  }
  fStack_70 = (this_ptr->carry_object_bbox).min.x + (this_ptr->carry_object_bbox).max.x;
  fStack_6c = (this_ptr->carry_object_bbox).min.y + (this_ptr->carry_object_bbox).max.y;
  CStack_40.x = fStack_70 * 0.5f;
  fStack_68 = (this_ptr->carry_object_bbox).min.z + (this_ptr->carry_object_bbox).max.z;
  CStack_40.y = fStack_6c * 0.5f;
  CStack_40.z = fStack_68 * 0.5f;
  pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                     ((this_ptr->base).object_to_pick_up,&CStack_e8,&CStack_40);
  pCVar8 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                     ((CDemonActor *)this_ptr,&CStack_dc,pCVar8);
  if (&this_ptr->carry_object_world_center != pCVar8) {
    (this_ptr->carry_object_world_center).x = pCVar8->x;
    (this_ptr->carry_object_world_center).y = pCVar8->y;
    (this_ptr->carry_object_world_center).z = pCVar8->z;
  }
  switch(iStack_30) {
  case 1:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.motion_controller,0x1b,1);
    format = "Rummaging %s\n";
    break;
  case 2:
  case 3:
  case 4:
    pCVar3 = (this_ptr->base).object_to_pick_up;
    if ((pCVar3 == (CDemonActor *)0x0) ||
       (iVar6 = (*((pCVar3->vtable)._ub)->canPickup)(pCVar3,(CDemonActor *)this_ptr), iVar6 != 4)) {
      pCVar1 = &(this_ptr->base).base.model;
      if ((this_ptr->carry_object_world_center).y <= (float)2) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar1->motion_controller,0x13,1);
        format = "Picking up %s off ground\n";
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                  (pCVar1,&CStack_b8,_DAT_02dc9f88);
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                  (pCVar1,&CStack_ac,_DAT_02dc9f60);
        fStack_60 = CStack_b8.y - CStack_ac.y;
        fStack_64 = CStack_b8.x - CStack_ac.x;
        fStack_5c = CStack_b8.z - CStack_ac.z;
        fStack_124 = CStack_ac.x - (this_ptr->carry_object_world_center).x;
        fStack_120 = CStack_ac.y - (this_ptr->carry_object_world_center).y;
        fStack_11c = CStack_ac.z - (this_ptr->carry_object_world_center).z;
        if ((float)2 <
            ABS(SQRT(fStack_5c * fStack_5c + fStack_64 * fStack_64 + fStack_60 * fStack_60) -
                SQRT(fStack_11c * fStack_11c + fStack_124 * fStack_124 + fStack_120 * fStack_120)))
        {
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (g_CConsole_PTR_005ad350,"%s out of reach - canceling pickup\n");
          (this_ptr->base).object_to_pick_up = (CDemonActor *)0x0;
          return 0;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar1->motion_controller,0x15,1);
        format = "Picking up %s waist level\n";
      }
    }
    else {
      pCVar8 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                         ((this_ptr->base).object_to_pick_up,&CStack_f4,
                          &(this_ptr->base).base.base.location.position);
      fVar2 = (this_ptr->carry_object_world_center).y;
      pCVar1 = &(this_ptr->base).base.model;
      this_ptr->pickup_facing_reversed = (uint)(0.0 < pCVar8->z);
      if ((float)2.5 < fVar2) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar1->motion_controller,0x18,1);
        pCVar8 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                           ((CDemonActor *)this_ptr,&CStack_118,
                            &(((this_ptr->base).object_to_pick_up)->location).position);
        if (&this_ptr->carry_object_world_center != pCVar8) {
          (this_ptr->carry_object_world_center).x = pCVar8->x;
          (this_ptr->carry_object_world_center).y = pCVar8->y;
          (this_ptr->carry_object_world_center).z = pCVar8->z;
        }
        format = "Picking up heavy %s shelf\n";
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar1->motion_controller,0x17,1);
        format = "Picking up heavy %s crate\n";
      }
    }
    break;
  default:
    g_CurrentFilename = "..\\core\\stranger.cpp";
    g_CurrentLineNumber = 3377;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Hell froze - invalid pickUpType: %d");
    goto LAB_0053bbf0;
  }
  engine_console_cpp_CConsole_printf_FUN_0043ac60(g_CConsole_PTR_005ad350,format);
LAB_0053bbf0:
  this_ptr->action_timer = 4.0;
  this_ptr->action_pending = 4;
  return 1;
}

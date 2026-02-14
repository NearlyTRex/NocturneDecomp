// Name: core_stranger.cpp_CStranger_FUN_005c1680
// Address: 005c1680
// Address Range: [[005c1680, 005c1ef9]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_FUN_005c1680(CStranger *this_ptr)

#include "nocturne.h"

int __cdecl core_stranger_cpp_CStranger_FUN_005c1680(CStranger *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  float fVar2;
  CDemonActor *pCVar3;
  CVector3f *pCVar4;
  int iVar5;
  CBoundingBox3D *pCVar6;
  CVector3f *pCVar7;
  char *in_stack_00000008;
  char *format;
  CDemonActor *pCVar8;
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
  
  if ((((0.0 < this_ptr->action_timer) || ((this_ptr->base).object_to_pick_up != (CDemonActor *)0x0)
       ) || (local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                                  ((CCharacter *)this_ptr,0), local_14 < (float)0.98999999999999999)) ||
     (((local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                             (&(this_ptr->base).base.model.motion_controller,0), local_14 < 1.0 ||
       ((this_ptr->base).base.carry_hands[0].carry_actor != (CDemonActor *)0x0)) ||
      ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0)))) {
    return 0;
  }
  local_24 = &(this_ptr->base).base.base.location.position;
  local_28 = 4.0;
  local_18 = 0;
  for (local_1c = 0; local_1c < (int)g_CDemonSetPtr->actor_list_ptr; local_1c = local_1c + 1) {
    pCVar8 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + local_18);
    pCVar3 = (*((pCVar8->vtable)._ub)->getCarrier)(pCVar8);
    if (pCVar3 == (CDemonActor *)0x0) {
      iStack_2c = (*((pCVar8->vtable)._ub)->canPickup)(pCVar8,(CDemonActor *)this_ptr);
      switch(iStack_2c) {
      case 1:
        if ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(pCVar8,&CStack_7c,local_24);
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
          pCVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             ((CDemonActor *)this_ptr,&CStack_94,&CStack_13c);
          pCVar6 = (*((pCVar8->vtable)._ub)->getBoundingBox)(pCVar8,&CStack_154);
          fStack_d0 = (pCVar6->min).x + (pCVar6->max).x;
          fStack_cc = (pCVar6->min).y + (pCVar6->max).y;
          CStack_58.x = fStack_d0 * 0.5f;
          CStack_58.y = fStack_cc * 0.5f;
          fStack_c8 = (pCVar6->min).z + (pCVar6->max).z;
          CStack_58.z = fStack_c8 * 0.5f;
          pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (pCVar8,&CStack_130,&CStack_58);
          fStack_100 = pCVar4->x - pCVar7->x;
          fStack_fc = pCVar4->y - pCVar7->y;
          fStack_f8 = pCVar4->z - pCVar7->z;
          if (((ABS(fStack_fc) <= (float)5) &&
              (fStack_20 = fStack_100 * fStack_100 + fStack_f8 * fStack_f8, fStack_20 <= local_28))
             && (iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar8,in_stack_00000008), iVar5 != 0
                )) {
            local_28 = fStack_20;
            iStack_30 = iStack_2c;
            (this_ptr->base).object_to_pick_up = pCVar8;
          }
        }
        break;
      case 3:
      case 4:
        if (((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) &&
           ((iVar5 = (*((pCVar8->vtable)._ub)->canPickup)(pCVar8,(CDemonActor *)this_ptr),
            iVar5 != 4 ||
            ((core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(pCVar8,&CStack_a0,local_24),
             ABS(CStack_a0.x) <= 1.0 &&
             (pCVar7 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                 (&CStack_88,&CStack_a0), ABS(pCVar7->y) <= (float)20))
            )))) {
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
  pCVar8 = (this_ptr->base).object_to_pick_up;
  if (pCVar8 == (CDemonActor *)0x0) {
    return 0;
  }
  pCVar6 = (*((pCVar8->vtable)._ub)->getBoundingBox)(pCVar8,&local_16c);
  if ((CBoundingBox3D *)(this_ptr->unk9 + 0x60) != pCVar6) {
    (((CBoundingBox3D *)(this_ptr->unk9 + 0x60))->min).x = (pCVar6->min).x;
    *(float *)(this_ptr->unk9 + 100) = (pCVar6->min).y;
    *(float *)(this_ptr->unk9 + 0x68) = (pCVar6->min).z;
  }
  if ((CVector3f *)(this_ptr->unk9 + 0x6c) != &pCVar6->max) {
    *(float *)(this_ptr->unk9 + 0x6c) = (pCVar6->max).x;
    *(float *)(this_ptr->unk9 + 0x70) = (pCVar6->max).y;
    *(float *)(this_ptr->unk9 + 0x74) = (pCVar6->max).z;
  }
  fStack_70 = *(float *)(this_ptr->unk9 + 0x60) + *(float *)(this_ptr->unk9 + 0x6c);
  fStack_6c = *(float *)(this_ptr->unk9 + 100) + *(float *)(this_ptr->unk9 + 0x70);
  CStack_40.x = fStack_70 * 0.5f;
  fStack_68 = *(float *)(this_ptr->unk9 + 0x68) + *(float *)(this_ptr->unk9 + 0x74);
  CStack_40.y = fStack_6c * 0.5f;
  CStack_40.z = fStack_68 * 0.5f;
  pCVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     ((this_ptr->base).object_to_pick_up,&CStack_e8,&CStack_40);
  pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     ((CDemonActor *)this_ptr,&CStack_dc,pCVar7);
  if ((CVector3f *)(this_ptr->unk9 + 0x54) != pCVar7) {
    ((CVector3f *)(this_ptr->unk9 + 0x54))->x = pCVar7->x;
    *(float *)(this_ptr->unk9 + 0x58) = pCVar7->y;
    *(float *)(this_ptr->unk9 + 0x5c) = pCVar7->z;
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
    pCVar8 = (this_ptr->base).object_to_pick_up;
    if ((pCVar8 == (CDemonActor *)0x0) ||
       (iVar5 = (*((pCVar8->vtable)._ub)->canPickup)(pCVar8,(CDemonActor *)this_ptr), iVar5 != 4)) {
      pCVar1 = &(this_ptr->base).base.model;
      if (*(float *)(this_ptr->unk9 + 0x58) <= (float)2) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0x13,1);
        pCVar8 = (this_ptr->base).object_to_pick_up;
        format = "Picking up %s off ground\n";
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                  (pCVar1,&CStack_b8,INT_03f6bb04);
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                  (pCVar1,&CStack_ac,INT_03f6badc);
        fStack_60 = CStack_b8.y - CStack_ac.y;
        fStack_64 = CStack_b8.x - CStack_ac.x;
        fStack_5c = CStack_b8.z - CStack_ac.z;
        fStack_124 = CStack_ac.x - *(float *)(this_ptr->unk9 + 0x54);
        fStack_120 = CStack_ac.y - *(float *)(this_ptr->unk9 + 0x58);
        fStack_11c = CStack_ac.z - *(float *)(this_ptr->unk9 + 0x5c);
        if ((float)2 <
            ABS(SQRT(fStack_5c * fStack_5c + fStack_64 * fStack_64 + fStack_60 * fStack_60) -
                SQRT(fStack_11c * fStack_11c + fStack_124 * fStack_124 + fStack_120 * fStack_120)))
        {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s out of reach - canceling pickup\n",
                     (this_ptr->base).object_to_pick_up);
          (this_ptr->base).object_to_pick_up = (CDemonActor *)0x0;
          return 0;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0x15,1);
        pCVar8 = (this_ptr->base).object_to_pick_up;
        format = "Picking up %s waist level\n";
      }
    }
    else {
      pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         ((this_ptr->base).object_to_pick_up,&CStack_f4,
                          &(this_ptr->base).base.base.location.position);
      pCVar1 = &(this_ptr->base).base.model;
      *(uint *)(this_ptr->unk9 + 0x44) = (uint)(0.0 < pCVar7->z);
      if ((float)2.5 < *(float *)(this_ptr->unk9 + 0x58)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0x18,1);
        pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           ((CDemonActor *)this_ptr,&CStack_118,
                            &(((this_ptr->base).object_to_pick_up)->location).position);
        if ((CVector3f *)(this_ptr->unk9 + 0x54) != pCVar7) {
          ((CVector3f *)(this_ptr->unk9 + 0x54))->x = pCVar7->x;
          *(float *)(this_ptr->unk9 + 0x58) = pCVar7->y;
          *(float *)(this_ptr->unk9 + 0x5c) = pCVar7->z;
        }
        pCVar8 = (this_ptr->base).object_to_pick_up;
        format = "Picking up heavy %s shelf\n";
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0x17,1);
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

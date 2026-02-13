// Name: core_stranger.cpp_CStranger_FUN_005c1680
// Address: 005c1680
// Address Range: [[005c1680, 005c1ef9]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_FUN_005c1680(CStranger *this_ptr)

#include "nocturne.h"

int __cdecl core_stranger_cpp_CStranger_FUN_005c1680(CStranger *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  CDemonActor *pCVar2;
  float fVar3;
  CDemonActor *pCVar4;
  CVector3f *pCVar5;
  int iVar6;
  CBoundingBox3D *pCVar7;
  CVector3f *pCVar8;
  CVector3f *unaff_EBP;
  char *in_stack_00000008;
  char *in_stack_fffffe98;
  CBoundingBox3D CStack_148;
  byte auStack_130 [12];
  uint uStack_124;
  uint uStack_120;
  CVector3f CStack_11c;
  float fStack_110;
  float fStack_10c;
  CVector3f CStack_108;
  uint uStack_fc;
  uint uStack_f8;
  float fStack_ec;
  float fStack_e8;
  byte auStack_e4 [16];
  CVector3f aCStack_d4 [2];
  float fStack_bc;
  CVector3f CStack_b8;
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  byte auStack_8c [24];
  byte auStack_74 [8];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  CVector3f CStack_44;
  CVector3f CStack_38;
  uint local_28;
  CLocation *local_24;
  int iStack_20;
  CDemonActor *local_1c;
  CDemonActor *local_18;
  float local_14;
  
  if (((((0.0 < this_ptr->action_timer) ||
        ((this_ptr->base).object_to_pick_up != (CDemonActor *)0x0)) ||
       (local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                             ((CCharacter *)this_ptr,0), local_14 < (float)0.98999999999999999)) ||
      ((local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                             (&(this_ptr->base).base.model.motion_controller,0), local_14 < 1.0 ||
       ((this_ptr->base).base.carry_hands[0].carry_actor != (CDemonActor *)0x0)))) ||
     ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0)) {
    return 0;
  }
  local_24 = &(this_ptr->base).base.base.location;
  local_28 = 0x40800000;
  local_18 = (CDemonActor *)0x0;
  for (local_1c = (CDemonActor *)0x0; (int)local_1c < (int)g_CDemonSetPtr->actor_list_ptr;
      local_1c = (CDemonActor *)(local_1c->actor_name + 1)) {
    pCVar2 = *(CDemonActor **)
              (local_18[0xf7e].actor_name + (int)(g_CDemonSetPtr->cameras[0].name + 4));
    pCVar4 = (*((pCVar2->vtable)._ub)->getCarrier)(pCVar2);
    if (pCVar4 == (CDemonActor *)0x0) {
      iStack_20 = (*((pCVar2->vtable)._ub)->canPickup)(pCVar2,(CDemonActor *)this_ptr);
      switch(iStack_20) {
      case 1:
        if ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0) {
          in_stack_fffffe98 = local_18->actor_name;
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (pCVar2,(CVector3f *)(auStack_74 + 4),(CVector3f *)local_18);
          fVar3 = SQRT(fStack_68 * fStack_68 +
                       (float)auStack_74._4_4_ * (float)auStack_74._4_4_ + fStack_6c * fStack_6c);
          if (fVar3 <= 0.0) {
            fStack_6c = 0.0;
            auStack_74._4_4_ = 0.0;
            fStack_68 = 0.0;
          }
          else {
            fVar3 = 1.0 / fVar3;
            auStack_74._4_4_ = (float)auStack_74._4_4_ * fVar3;
            fStack_6c = fStack_6c * fVar3;
            fStack_68 = fStack_68 * fVar3;
          }
          if (fStack_68 <= 0.0) {
            CStack_b8.y = 3.0;
            CStack_b8.z = 2.0;
            CStack_b8.x = 0.0;
            if ((CVector3f *)auStack_130 != &CStack_b8) {
              auStack_130._0_4_ = 0.0;
              auStack_130._8_4_ = 2.0;
              auStack_130._4_4_ = 3.0;
            }
            goto LAB_005c17d2;
          }
        }
        break;
      case 2:
        if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
          uStack_fc = 0x40400000;
          uStack_f8 = 0x40000000;
          CStack_108.z = 0.0;
          if ((float *)auStack_130 != &CStack_108.z) {
            auStack_130._8_4_ = 2.0;
            auStack_130._4_4_ = 3.0;
            auStack_130._0_4_ = 0.0;
          }
LAB_005c17d2:
          pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             ((CDemonActor *)this_ptr,(CVector3f *)(auStack_8c + 4),
                              (CVector3f *)auStack_130);
          pCVar7 = (*((pCVar2->vtable)._ub)->getBoundingBox)(pCVar2,&CStack_148);
          fStack_bc = (pCVar7->min).x + (pCVar7->max).x;
          CStack_b8.x = (pCVar7->min).y + (pCVar7->max).y;
          CStack_44.x = fStack_bc * 0.5f;
          CStack_44.y = CStack_b8.x * 0.5f;
          CStack_b8.y = (pCVar7->min).z + (pCVar7->max).z;
          CStack_44.z = CStack_b8.y * 0.5f;
          in_stack_fffffe98 = pCVar2->actor_name;
          pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (pCVar2,&CStack_11c,&CStack_44);
          fStack_ec = pCVar5->x - pCVar8->x;
          fStack_e8 = pCVar5->y - pCVar8->y;
          auStack_e4._0_4_ = pCVar5->z - pCVar8->z;
          if ((ABS(fStack_e8) <= (float)5) &&
             (fVar3 = fStack_ec * fStack_ec + (float)auStack_e4._0_4_ * (float)auStack_e4._0_4_,
             fVar3 <= local_14)) {
            in_stack_fffffe98 = (char *)0x5c18c5;
            iVar6 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,in_stack_00000008);
            if (iVar6 != 0) {
              local_1c = local_18;
              (this_ptr->base).object_to_pick_up = pCVar2;
              local_14 = fVar3;
            }
          }
        }
        break;
      case 3:
      case 4:
        if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
          iVar6 = (*((pCVar2->vtable)._ub)->canPickup)(pCVar2,(CDemonActor *)this_ptr);
          if (iVar6 != 4) {
LAB_005c197a:
            CStack_38.x = 0.0;
            CStack_38.y = 3.0;
            CStack_38.z = 2.0;
            if ((CVector3f *)(auStack_130 + 8) != &CStack_38) {
              uStack_124 = 0x40400000;
              uStack_120 = 0x40000000;
              auStack_130._8_4_ = 0.0;
            }
            goto LAB_005c17d2;
          }
          in_stack_fffffe98 = pCVar2->actor_name;
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (pCVar2,(CVector3f *)auStack_8c,unaff_EBP);
          if (ABS((float)auStack_8c._0_4_) <= 1.0) {
            in_stack_fffffe98 = (char *)0x5c1963;
            pCVar8 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                               ((CVector3f *)auStack_74,(CVector3f *)auStack_8c);
            if (ABS(pCVar8->y) <= (float)20) goto LAB_005c197a;
          }
        }
      }
    }
    local_18 = (CDemonActor *)(local_18->actor_name + 4);
  }
  pCVar2 = (this_ptr->base).object_to_pick_up;
  if (pCVar2 == (CDemonActor *)0x0) {
    return 0;
  }
  pCVar7 = (*((pCVar2->vtable)._ub)->getBoundingBox)(pCVar2,(CBoundingBox3D *)&stack0xfffffe94);
  if ((CBoundingBox3D *)(this_ptr->unk9 + 0x60) != pCVar7) {
    (((CBoundingBox3D *)(this_ptr->unk9 + 0x60))->min).x = (pCVar7->min).x;
    *(float *)(this_ptr->unk9 + 100) = (pCVar7->min).y;
    *(float *)(this_ptr->unk9 + 0x68) = (pCVar7->min).z;
  }
  if ((CVector3f *)(this_ptr->unk9 + 0x6c) != &pCVar7->max) {
    *(float *)(this_ptr->unk9 + 0x6c) = (pCVar7->max).x;
    *(float *)(this_ptr->unk9 + 0x70) = (pCVar7->max).y;
    *(float *)(this_ptr->unk9 + 0x74) = (pCVar7->max).z;
  }
  fStack_68 = *(float *)(this_ptr->unk9 + 0x60) + *(float *)(this_ptr->unk9 + 0x6c);
  fStack_64 = *(float *)(this_ptr->unk9 + 100) + *(float *)(this_ptr->unk9 + 0x70);
  CStack_38.x = fStack_68 * 0.5f;
  fStack_60 = *(float *)(this_ptr->unk9 + 0x68) + *(float *)(this_ptr->unk9 + 0x74);
  CStack_38.y = fStack_64 * 0.5f;
  CStack_38.z = fStack_60 * 0.5f;
  pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     ((this_ptr->base).object_to_pick_up,(CVector3f *)(auStack_e4 + 4),&CStack_38);
  pCVar8 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     ((CDemonActor *)this_ptr,aCStack_d4,pCVar8);
  if ((CVector3f *)(this_ptr->unk9 + 0x54) != pCVar8) {
    ((CVector3f *)(this_ptr->unk9 + 0x54))->x = pCVar8->x;
    *(float *)(this_ptr->unk9 + 0x58) = pCVar8->y;
    *(float *)(this_ptr->unk9 + 0x5c) = pCVar8->z;
  }
  switch(local_28) {
  case 1:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,0x1b,1);
    break;
  case 2:
  case 3:
  case 4:
    pCVar2 = (this_ptr->base).object_to_pick_up;
    if ((pCVar2 == (CDemonActor *)0x0) ||
       (iVar6 = (*((pCVar2->vtable)._ub)->canPickup)(pCVar2,(CDemonActor *)this_ptr), iVar6 != 4)) {
      pCVar1 = &(this_ptr->base).base.model;
      if (*(float *)(this_ptr->unk9 + 0x58) <= (float)2) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0x13,1);
        in_stack_fffffe98 = "Picking up %s off ground\n";
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                  (pCVar1,&CStack_a8,INT_03f6bb04);
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                  (pCVar1,&CStack_9c,INT_03f6badc);
        fStack_50 = CStack_a8.y - CStack_9c.y;
        fStack_54 = CStack_a8.x - CStack_9c.x;
        fStack_4c = CStack_a8.z - CStack_9c.z;
        CStack_11c.z = CStack_9c.x - *(float *)(this_ptr->unk9 + 0x54);
        fStack_110 = CStack_9c.y - *(float *)(this_ptr->unk9 + 0x58);
        fStack_10c = CStack_9c.z - *(float *)(this_ptr->unk9 + 0x5c);
        if ((float)2 <
            ABS(SQRT(fStack_4c * fStack_4c + fStack_54 * fStack_54 + fStack_50 * fStack_50) -
                SQRT(fStack_10c * fStack_10c + CStack_11c.z * CStack_11c.z + fStack_110 * fStack_110
                    ))) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s out of reach - canceling pickup\n");
          (this_ptr->base).object_to_pick_up = (CDemonActor *)0x0;
          return 0;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0x15,1);
        in_stack_fffffe98 = "Picking up %s waist level\n";
      }
    }
    else {
      pCVar8 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         ((this_ptr->base).object_to_pick_up,(CVector3f *)auStack_e4,
                          &(this_ptr->base).base.base.location.position);
      pCVar1 = &(this_ptr->base).base.model;
      *(uint *)(this_ptr->unk9 + 0x44) = (uint)(0.0 < pCVar8->z);
      if ((float)2.5 < *(float *)(this_ptr->unk9 + 0x58)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0x18,1);
        pCVar8 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           ((CDemonActor *)this_ptr,&CStack_108,
                            &(((this_ptr->base).object_to_pick_up)->location).position);
        if ((CVector3f *)(this_ptr->unk9 + 0x54) != pCVar8) {
          ((CVector3f *)(this_ptr->unk9 + 0x54))->x = pCVar8->x;
          *(float *)(this_ptr->unk9 + 0x58) = pCVar8->y;
          *(float *)(this_ptr->unk9 + 0x5c) = pCVar8->z;
        }
        in_stack_fffffe98 = "Picking up heavy %s shelf\n";
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0x17,1);
        in_stack_fffffe98 = "Picking up heavy %s crate\n";
      }
    }
    break;
  default:
    g_CurrentFilename = "..\\core\\stranger.cpp";
    g_CurrentLineNumber = 0xd3a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze - invalid pickUpType: %d");
    goto LAB_005c1c40;
  }
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,in_stack_fffffe98);
LAB_005c1c40:
  this_ptr->action_timer = 4.0;
  this_ptr->action_pending = 4;
  return 1;
}

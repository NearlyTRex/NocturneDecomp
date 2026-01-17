// Name: core_stranger.cpp_CStranger_FUN_005c1680
// Address: 005c1680
// Address Range: [[005c1680, 005c1ef9]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c1680()

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005c1680(CStranger* param_1,
   uint param_2) */

uint core_stranger_cpp_CStranger_FUN_005c1680(void)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  CDemonActor *this_ptr_00;
  CDemonActor *pCVar2;
  CBoundingBox3D *pCVar3;
  CVector3f *pCVar4;
  int iVar5;
  uint *puVar6;
  CVector3f *pCVar7;
  CVector3f *unaff_EBP;
  CDemonActor *in_stack_00000004;
  char *in_stack_00000008;
  char *format;
  CBoundingBox3D CStack_148;
  CVector3f CStack_130;
  float fStack_124;
  float fStack_120;
  byte auStack_11c [28];
  CVector3f CStack_100;
  CVector3f CStack_f4;
  CVector3f CStack_e8;
  CVector3f aCStack_dc [2];
  float fStack_bc;
  CVector3f CStack_b8;
  CVector3f aCStack_ac [2];
  byte auStack_8c [24];
  byte auStack_74 [8];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  byte auStack_44 [8];
  float fStack_3c;
  float afStack_38 [4];
  uint local_28;
  CLocation *local_24;
  int iStack_20;
  CVector3f *local_1c;
  CVector3f *local_18;
  float local_14;
  
  if ((((0.0 < in_stack_00000004[0x17a].orient_matrix.m[1].z) ||
       (in_stack_00000004[0x179].scale.x != 0)) ||
      (local_14 = (float)core_charactr_cpp_CCharacter_FUN_0042e840(),
      local_14 < (float)0.98999999999999999)) ||
     (((local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                             ((CMotionController *)(in_stack_00000004 + 1),0), local_14 < 1.0 ||
       (in_stack_00000004[0x1b].field7_0x6c != 0)) ||
      (*(int *)(in_stack_00000004[0x1b].create_event + 0x38) != 0)))) {
    return 0;
  }
  local_24 = &in_stack_00000004->location;
  local_28 = 0x40800000;
  local_18 = (CVector3f *)0x0;
  for (local_1c = (CVector3f *)0x0; (int)local_1c < (int)g_CDemonSetPtr->actor_list_ptr;
      local_1c = (CVector3f *)((int)&local_1c->x + 1)) {
    this_ptr_00 = *(CDemonActor **)((int)&local_18[0x1bc1c].y + (int)g_CDemonSetPtr->cameras);
    pCVar2 = (*this_ptr_00->vtable->getCarrier)(this_ptr_00);
    if (pCVar2 == (CDemonActor *)0x0) {
      iStack_20 = (*this_ptr_00->vtable->canPickup)(this_ptr_00,in_stack_00000004);
      switch(iStack_20) {
      case 1:
        if (in_stack_00000004[0x1b].field7_0x6c == 0) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (this_ptr_00,(CVector3f *)(auStack_74 + 4),local_18);
          fVar1 = SQRT(fStack_68 * fStack_68 +
                       (float)auStack_74._4_4_ * (float)auStack_74._4_4_ + fStack_6c * fStack_6c);
          if (fVar1 <= 0.0) {
            fStack_6c = 0.0;
            auStack_74._4_4_ = 0.0;
            fStack_68 = 0.0;
          }
          else {
            fVar1 = 1.0 / fVar1;
            auStack_74._4_4_ = (float)auStack_74._4_4_ * fVar1;
            fStack_6c = fStack_6c * fVar1;
            fStack_68 = fStack_68 * fVar1;
          }
          if (fStack_68 <= 0.0) {
            CStack_b8.y = 3.0;
            CStack_b8.z = 2.0;
            CStack_b8.x = 0.0;
            if (&CStack_130 != &CStack_b8) {
              CStack_130.x = 0.0;
              CStack_130.z = 2.0;
              CStack_130.y = 3.0;
            }
            goto LAB_005c17d2;
          }
        }
        break;
      case 2:
        if (*(int *)(in_stack_00000004[0x1b].create_event + 0x38) == 0) {
          CStack_100.y = 3.0;
          CStack_100.z = 2.0;
          CStack_100.x = 0.0;
          if (&CStack_130 != &CStack_100) {
            CStack_130.z = 2.0;
            CStack_130.y = 3.0;
            CStack_130.x = 0.0;
          }
LAB_005c17d2:
          pCVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (in_stack_00000004,(CVector3f *)(auStack_8c + 4),&CStack_130);
          pCVar3 = (*this_ptr_00->vtable->getBoundingBox)(this_ptr_00,&CStack_148);
          fStack_bc = (pCVar3->min).x + (pCVar3->max).x;
          CStack_b8.x = (pCVar3->min).y + (pCVar3->max).y;
          auStack_44._0_4_ = fStack_bc * 0.5f;
          auStack_44._4_4_ = CStack_b8.x * 0.5f;
          CStack_b8.y = (pCVar3->min).z + (pCVar3->max).z;
          fStack_3c = CStack_b8.y * 0.5f;
          pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (this_ptr_00,(CVector3f *)auStack_11c,(CVector3f *)auStack_44);
          CStack_f4.z = pCVar4->x - pCVar7->x;
          CStack_e8.x = pCVar4->y - pCVar7->y;
          CStack_e8.y = pCVar4->z - pCVar7->z;
          if (((ABS(CStack_e8.x) <= (float)5) &&
              (fVar1 = CStack_f4.z * CStack_f4.z + CStack_e8.y * CStack_e8.y, fVar1 <= local_14)) &&
             (iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0(this_ptr_00,in_stack_00000008),
             iVar5 != 0)) {
            local_1c = local_18;
            in_stack_00000004[0x179].scale.x = (int)this_ptr_00;
            local_14 = fVar1;
          }
        }
        break;
      case 3:
      case 4:
        if ((*(int *)(in_stack_00000004[0x1b].create_event + 0x38) == 0) &&
           ((iVar5 = (*this_ptr_00->vtable->canPickup)(this_ptr_00,in_stack_00000004), iVar5 != 4 ||
            ((core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        (this_ptr_00,(CVector3f *)auStack_8c,unaff_EBP),
             ABS((float)auStack_8c._0_4_) <= 1.0 &&
             (pCVar7 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                 ((CVector3f *)auStack_74,(CVector3f *)auStack_8c),
             ABS(pCVar7->y) <= (float)20)))))) {
          afStack_38[0] = 0.0;
          afStack_38[1] = 3.0;
          afStack_38[2] = 2.0;
          if (&CStack_130.z != afStack_38) {
            fStack_124 = 3.0;
            fStack_120 = 2.0;
            CStack_130.z = 0.0;
          }
          goto LAB_005c17d2;
        }
      }
    }
    local_18 = (CVector3f *)&local_18->y;
  }
  iVar5 = in_stack_00000004[0x179].scale.x;
  if (iVar5 == 0) {
    return 0;
  }
  puVar6 = (uint *)(**(code **)(*(int *)(iVar5 + 0x154) + 0x14))();
  if (in_stack_00000004[0x17a].create_event + 0x3c != (char *)puVar6) {
    *(uint *)(in_stack_00000004[0x17a].create_event + 0x3c) = *puVar6;
    *(uint *)(in_stack_00000004[0x17a].create_event + 0x40) = puVar6[1];
    *(uint *)(in_stack_00000004[0x17a].create_event + 0x44) = puVar6[2];
  }
  if (in_stack_00000004[0x17a].create_event + 0x48 != (char *)(puVar6 + 3)) {
    *(uint *)(in_stack_00000004[0x17a].create_event + 0x48) = puVar6[3];
    *(uint *)(in_stack_00000004[0x17a].create_event + 0x4c) = puVar6[4];
    *(uint *)(in_stack_00000004[0x17a].create_event + 0x50) = puVar6[5];
  }
  auStack_74._4_4_ =
       *(float *)(in_stack_00000004[0x17a].create_event + 0x3c) +
       *(float *)(in_stack_00000004[0x17a].create_event + 0x48);
  fStack_6c = *(float *)(in_stack_00000004[0x17a].create_event + 0x40) +
              *(float *)(in_stack_00000004[0x17a].create_event + 0x4c);
  auStack_44._4_4_ = (float)auStack_74._4_4_ * 0.5f;
  fStack_68 = *(float *)(in_stack_00000004[0x17a].create_event + 0x44) +
              *(float *)(in_stack_00000004[0x17a].create_event + 0x50);
  fStack_3c = fStack_6c * 0.5f;
  afStack_38[0] = fStack_68 * 0.5f;
  pCVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     ((CDemonActor *)in_stack_00000004[0x179].scale.x,&CStack_e8,
                      (CVector3f *)(auStack_44 + 4));
  pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     (in_stack_00000004,aCStack_dc,pCVar7);
  if ((CVector3f *)(in_stack_00000004[0x17a].create_event + 0x30) != pCVar7) {
    ((CVector3f *)(in_stack_00000004[0x17a].create_event + 0x30))->x = pCVar7->x;
    *(float *)(in_stack_00000004[0x17a].create_event + 0x34) = pCVar7->y;
    *(float *)(in_stack_00000004[0x17a].create_event + 0x38) = pCVar7->z;
  }
  switch(afStack_38[2]) {
  case 1.4013e-45:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)(in_stack_00000004 + 1),0x1b,1);
    iVar5 = in_stack_00000004[0x179].scale.x;
    format = "Rummaging %s\n";
    break;
  case 2.8026e-45:
  case 4.2039e-45:
  case 5.60519e-45:
    iVar5 = in_stack_00000004[0x179].scale.x;
    if ((iVar5 == 0) || (iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x7c))(), iVar5 != 4)) {
      this_ptr = (CDeformableModelInstance *)(in_stack_00000004 + 1);
      if (*(float *)(in_stack_00000004[0x17a].create_event + 0x34) <= (float)2) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)this_ptr,0x13,1);
        iVar5 = in_stack_00000004[0x179].scale.x;
        format = "Picking up %s off ground\n";
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                  (this_ptr,&CStack_b8,DAT_03f6bb04);
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                  (this_ptr,aCStack_ac,DAT_03f6badc);
        fStack_60 = CStack_b8.y - aCStack_ac[0].y;
        fStack_64 = CStack_b8.x - aCStack_ac[0].x;
        fStack_5c = CStack_b8.z - aCStack_ac[0].z;
        fStack_124 = aCStack_ac[0].x - *(float *)(in_stack_00000004[0x17a].create_event + 0x30);
        fStack_120 = aCStack_ac[0].y - *(float *)(in_stack_00000004[0x17a].create_event + 0x34);
        auStack_11c._0_4_ =
             aCStack_ac[0].z - *(float *)(in_stack_00000004[0x17a].create_event + 0x38);
        if ((float)2 <
            ABS(SQRT(fStack_5c * fStack_5c + fStack_64 * fStack_64 + fStack_60 * fStack_60) -
                SQRT((float)auStack_11c._0_4_ * (float)auStack_11c._0_4_ +
                     fStack_124 * fStack_124 + fStack_120 * fStack_120))) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s out of reach - canceling pickup\n",
                     in_stack_00000004[0x179].scale.x);
          in_stack_00000004[0x179].scale.x = 0;
          return 0;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)this_ptr,0x15,1);
        iVar5 = in_stack_00000004[0x179].scale.x;
        format = "Picking up %s waist level\n";
      }
    }
    else {
      pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         ((CDemonActor *)in_stack_00000004[0x179].scale.x,&CStack_f4,
                          &(in_stack_00000004->location).position);
      fVar1 = *(float *)(in_stack_00000004[0x17a].create_event + 0x34);
      *(uint *)(in_stack_00000004[0x17a].create_event + 0x20) = (uint)(0.0 < pCVar7->z);
      if ((float)2.5 < fVar1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)(in_stack_00000004 + 1),0x18,1);
        pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (in_stack_00000004,(CVector3f *)(auStack_11c + 4),
                            (CVector3f *)(in_stack_00000004[0x179].scale.x + 0x20));
        if ((CVector3f *)(in_stack_00000004[0x17a].create_event + 0x30) != pCVar7) {
          ((CVector3f *)(in_stack_00000004[0x17a].create_event + 0x30))->x = pCVar7->x;
          *(float *)(in_stack_00000004[0x17a].create_event + 0x34) = pCVar7->y;
          *(float *)(in_stack_00000004[0x17a].create_event + 0x38) = pCVar7->z;
        }
        iVar5 = in_stack_00000004[0x179].scale.x;
        format = "Picking up heavy %s shelf\n";
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)(in_stack_00000004 + 1),0x17,1);
        iVar5 = in_stack_00000004[0x179].scale.x;
        format = "Picking up heavy %s crate\n";
      }
    }
    break;
  default:
    g_CurrentFilename = "..\\core\\stranger.cpp";
    g_CurrentLineNumber = 0xd3a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze - invalid pickUpType: %d",afStack_38[2]);
    goto LAB_005c1c40;
  }
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,format,iVar5);
LAB_005c1c40:
  in_stack_00000004[0x17a].orient_matrix.m[1].z = 4.0;
  in_stack_00000004[0x17a].orient_matrix.m[1].x = 5.60519e-45;
  return 1;
}

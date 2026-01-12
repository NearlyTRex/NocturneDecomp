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
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  char *in_stack_00000008;
  char *format;
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
  local_24 = &(in_stack_00000004->location).position;
  local_28 = 4.0;
  local_18 = 0;
  for (local_1c = 0; local_1c < (int)g_CDemonSetPtr->actor_list_ptr; local_1c = local_1c + 1) {
    this_ptr_00 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + local_18);
    pCVar2 = (*this_ptr_00->vtable->getCarrier)(this_ptr_00);
    if (pCVar2 == (CDemonActor *)0x0) {
      iStack_2c = (*this_ptr_00->vtable->canPickup)(this_ptr_00,in_stack_00000004);
      switch(iStack_2c) {
      case 1:
        if (in_stack_00000004[0x1b].field7_0x6c == 0) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(this_ptr_00,&CStack_7c,local_24)
          ;
          fVar1 = SQRT(CStack_7c.z * CStack_7c.z +
                       CStack_7c.x * CStack_7c.x + CStack_7c.y * CStack_7c.y);
          if (fVar1 <= 0.0) {
            CStack_7c.y = 0.0;
            CStack_7c.x = 0.0;
            CStack_7c.z = 0.0;
          }
          else {
            fVar1 = 1.0 / fVar1;
            CStack_7c.x = CStack_7c.x * fVar1;
            CStack_7c.y = CStack_7c.y * fVar1;
            CStack_7c.z = CStack_7c.z * fVar1;
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
        if (*(int *)(in_stack_00000004[0x1b].create_event + 0x38) == 0) {
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
                             (in_stack_00000004,&CStack_94,&CStack_13c);
          pCVar3 = (*this_ptr_00->vtable->getBoundingBox)(this_ptr_00,&CStack_154);
          fStack_d0 = (pCVar3->min).x + (pCVar3->max).x;
          fStack_cc = (pCVar3->min).y + (pCVar3->max).y;
          CStack_58.x = fStack_d0 * 0.5f;
          CStack_58.y = fStack_cc * 0.5f;
          fStack_c8 = (pCVar3->min).z + (pCVar3->max).z;
          CStack_58.z = fStack_c8 * 0.5f;
          pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (this_ptr_00,&CStack_130,&CStack_58);
          fStack_100 = pCVar4->x - pCVar7->x;
          fStack_fc = pCVar4->y - pCVar7->y;
          fStack_f8 = pCVar4->z - pCVar7->z;
          if (((ABS(fStack_fc) <= (float)5) &&
              (fStack_20 = fStack_100 * fStack_100 + fStack_f8 * fStack_f8, fStack_20 <= local_28))
             && (iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0(this_ptr_00,in_stack_00000008),
                iVar5 != 0)) {
            local_28 = fStack_20;
            iStack_30 = iStack_2c;
            in_stack_00000004[0x179].scale.x = (int)this_ptr_00;
          }
        }
        break;
      case 3:
      case 4:
        if ((*(int *)(in_stack_00000004[0x1b].create_event + 0x38) == 0) &&
           ((iVar5 = (*this_ptr_00->vtable->canPickup)(this_ptr_00,in_stack_00000004), iVar5 != 4 ||
            ((core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        (this_ptr_00,&CStack_a0,local_24), ABS(CStack_a0.x) <= 1.0 &&
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
  fStack_70 = *(float *)(in_stack_00000004[0x17a].create_event + 0x3c) +
              *(float *)(in_stack_00000004[0x17a].create_event + 0x48);
  fStack_6c = *(float *)(in_stack_00000004[0x17a].create_event + 0x40) +
              *(float *)(in_stack_00000004[0x17a].create_event + 0x4c);
  CStack_40.x = fStack_70 * 0.5f;
  fStack_68 = *(float *)(in_stack_00000004[0x17a].create_event + 0x44) +
              *(float *)(in_stack_00000004[0x17a].create_event + 0x50);
  CStack_40.y = fStack_6c * 0.5f;
  CStack_40.z = fStack_68 * 0.5f;
  pCVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     ((CDemonActor *)in_stack_00000004[0x179].scale.x,&CStack_e8,&CStack_40);
  pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     (in_stack_00000004,&CStack_dc,pCVar7);
  if ((CVector3f *)(in_stack_00000004[0x17a].create_event + 0x30) != pCVar7) {
    ((CVector3f *)(in_stack_00000004[0x17a].create_event + 0x30))->x = pCVar7->x;
    *(float *)(in_stack_00000004[0x17a].create_event + 0x34) = pCVar7->y;
    *(float *)(in_stack_00000004[0x17a].create_event + 0x38) = pCVar7->z;
  }
  switch(iStack_30) {
  case 1:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)(in_stack_00000004 + 1),0x1b,1);
    iVar5 = in_stack_00000004[0x179].scale.x;
    format = "Rummaging %s\n";
    break;
  case 2:
  case 3:
  case 4:
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
                  (this_ptr,&CStack_ac,DAT_03f6badc);
        fStack_60 = CStack_b8.y - CStack_ac.y;
        fStack_64 = CStack_b8.x - CStack_ac.x;
        fStack_5c = CStack_b8.z - CStack_ac.z;
        fStack_124 = CStack_ac.x - *(float *)(in_stack_00000004[0x17a].create_event + 0x30);
        fStack_120 = CStack_ac.y - *(float *)(in_stack_00000004[0x17a].create_event + 0x34);
        fStack_11c = CStack_ac.z - *(float *)(in_stack_00000004[0x17a].create_event + 0x38);
        if ((float)2 <
            ABS(SQRT(fStack_5c * fStack_5c + fStack_64 * fStack_64 + fStack_60 * fStack_60) -
                SQRT(fStack_11c * fStack_11c + fStack_124 * fStack_124 + fStack_120 * fStack_120)))
        {
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
                           (in_stack_00000004,&CStack_118,
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
    core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze - invalid pickUpType: %d",iStack_30);
    goto LAB_005c1c40;
  }
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,format,iVar5);
LAB_005c1c40:
  in_stack_00000004[0x17a].orient_matrix.m[1].z = 4.0;
  in_stack_00000004[0x17a].orient_matrix.m[1].x = 5.60519e-45;
  return 1;
}

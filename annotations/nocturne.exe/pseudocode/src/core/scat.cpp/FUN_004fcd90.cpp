// Name: core_scat.cpp_FUN_004fcd90
// Address: 004fcd90
// Address Range: [[004fcd90, 004fcfe5]]
// Convention: unknown
// Signature: void core_scat_cpp_FUN_004fcd90(CCharacter *param_1,float param_2)

#include "nocturne.h"

void core_scat_cpp_FUN_004fcd90(CCharacter *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  CFlame *pCVar3;
  SMotion *pSVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  int local_14;
  
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&(param_1->model).motion_controller);
  if ((pSVar4->state_index != 0xc) &&
     (pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                         (&(param_1->model).motion_controller), pSVar4->state_index != 0xd)) {
    fVar7 = param_1[2].flames[0x1d].base.orient_matrix.m[1].x;
    if (*(int *)(param_1[2].flames[0x1d].on_event + 4) == 0) {
      fVar7 = 0.0;
    }
    fVar8 = *(float *)(param_1[2].flames[0x1d].on_event + 0x18);
    if (((fVar8 != 0.0) && (fVar7 != fVar8)) && (*(int *)((int)fVar8 + 0x2d8) == 8)) {
      pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                         (&(param_1->model).motion_controller);
      if (pSVar4->state_index == 0) {
        pCVar3 = param_1[2].flames;
        pCVar3[0x1d].on_event[0x18] = '\0';
        pCVar3[0x1d].on_event[0x19] = '\0';
        pCVar3[0x1d].on_event[0x1a] = '\0';
        pCVar3[0x1d].on_event[0x1b] = '\0';
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->model).motion_controller,0,1);
      }
    }
    local_14 = 0;
    while (0.0 < param_2) {
      fVar8 = *(float *)(param_1[2].flames[0x1d].on_event + 0x18);
      if (fVar7 == fVar8) {
        if (fVar8 != 0.0) {
          switch(*(uint *)((int)fVar8 + 0x2d8)) {
          default:
            fVar8 = 2.8026e-45;
            break;
          case 8:
            fVar8 = 0.0;
          }
        }
      }
      else if (fVar8 == 0.0) {
        if ((fVar7 != 0.0) && (*(int *)((int)fVar7 + 0x2d8) != 8)) {
LAB_004fcf93:
          fVar8 = 1.4013e-45;
        }
      }
      else {
        if (*(int *)((int)fVar8 + 0x2d8) != 8) goto LAB_004fcf93;
        fVar8 = 0.0;
      }
      uVar5 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042a500(param_1,&param_2,fVar8);
      core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                (&(param_1->model).motion_controller);
      if (-1 < (int)uVar5) {
        fVar1 = *(float *)(param_1[2].flames[0x1d].on_event + 0x18);
        if (fVar7 != fVar1) {
          if ((fVar1 != 0.0) && ((*(int *)((int)fVar1 + 0x2d8) != 8) == uVar5)) {
            iVar2 = *(int *)(param_1[2].flames[0x1d].on_event + 0x18);
            (**(code **)(*(int *)(iVar2 + 0x14c) + 0xd4))(iVar2,1);
            pCVar3 = param_1[2].flames;
            pCVar3[0x1d].on_event[0x18] = '\0';
            pCVar3[0x1d].on_event[0x19] = '\0';
            pCVar3[0x1d].on_event[0x1a] = '\0';
            pCVar3[0x1d].on_event[0x1b] = '\0';
          }
          if (*(int *)(param_1[2].flames[0x1d].on_event + 4) != 0) {
            if ((fVar7 == 0.0) || (*(int *)((int)fVar7 + 0x2d8) == 8)) {
              uVar6 = 0;
            }
            else {
              uVar6 = 1;
            }
            if (((uVar6 == uVar5) &&
                (*(float *)(param_1[2].flames[0x1d].on_event + 0x18) = fVar7, fVar7 != 0.0)) &&
               ((**(code **)(*(int *)((int)fVar7 + 0x14c) + 0xd4))(fVar7,2),
               *(int *)(*(int *)(param_1[2].flames[0x1d].on_event + 0x18) + 0x2d8) == 8)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(param_1->model).motion_controller,6,1);
            }
          }
        }
        core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042aa50(param_1,(int)fVar8);
      }
      local_14 = local_14 + 1;
      if (1 < local_14) {
        return;
      }
    }
  }
  return;
}

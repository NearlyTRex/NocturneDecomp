// Name: core_scat.cpp_FUN_00558060
// Address: 00558060
// Address Range: [[00558060, 005582b5]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_00558060()

#include "nocturne.h"

/* Signature: byte actors_hero_scat.cpp_FUN_00558060(uint param_1, uint param_2)
    */

void core_scat_cpp_FUN_00558060(void)

{
  SMotion *pSVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  int local_14;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&(in_stack_00000004->model).motion_controller);
  if ((pSVar1->state_index != 0xc) &&
     (pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(in_stack_00000004->model).motion_controller), pSVar1->state_index != 0xd
     )) {
    iVar4 = *(int *)(in_stack_00000004[2].cloth_data + 0x5388);
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) == 0) {
      iVar4 = 0;
    }
    iVar2 = *(int *)(in_stack_00000004[2].cloth_data + 0x5508);
    if (((iVar2 != 0) && (iVar4 != iVar2)) && (*(int *)(iVar2 + 0x2e0) == 8)) {
      pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(in_stack_00000004->model).motion_controller);
      if (pSVar1->state_index == 0) {
        in_stack_00000004[2].cloth_data[0x5508] = '\0';
        in_stack_00000004[2].cloth_data[0x5509] = '\0';
        in_stack_00000004[2].cloth_data[0x550a] = '\0';
        in_stack_00000004[2].cloth_data[0x550b] = '\0';
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->model).motion_controller,0,1);
      }
    }
    local_14 = 0;
    while (0.0 < in_stack_00000008) {
      iVar2 = *(int *)(in_stack_00000004[2].cloth_data + 0x5508);
      if ((iVar4 == iVar2) && (iVar2 != 0)) {
        switch(*(uint *)(iVar2 + 0x2e0)) {
        default:
          break;
        case 8:
        }
      }
      iVar2 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042e370(in_stack_00000004);
      core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                (&(in_stack_00000004->model).motion_controller);
      if (-1 < iVar2) {
        iVar3 = *(int *)(in_stack_00000004[2].cloth_data + 0x5508);
        if (iVar4 != iVar3) {
          if (iVar3 != 0) {
            if (iVar3 != 0) {
              if (*(int *)(iVar3 + 0x2e0) == 8) {
                iVar3 = 0;
              }
              else {
                iVar3 = 1;
              }
            }
            if (iVar3 == iVar2) {
              (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5508) + 0x154) +
                          0xf0))();
              in_stack_00000004[2].cloth_data[0x5508] = '\0';
              in_stack_00000004[2].cloth_data[0x5509] = '\0';
              in_stack_00000004[2].cloth_data[0x550a] = '\0';
              in_stack_00000004[2].cloth_data[0x550b] = '\0';
            }
          }
          if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0) {
            if ((iVar4 == 0) || (*(int *)(iVar4 + 0x2e0) == 8)) {
              iVar3 = 0;
            }
            else {
              iVar3 = 1;
            }
            if (((iVar3 == iVar2) &&
                (*(int *)(in_stack_00000004[2].cloth_data + 0x5508) = iVar4, iVar4 != 0)) &&
               ((**(code **)(*(int *)(iVar4 + 0x154) + 0xf0))(),
               *(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5508) + 0x2e0) == 8)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(in_stack_00000004->model).motion_controller,6,1);
            }
          }
        }
        core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0(in_stack_00000004);
      }
      local_14 = local_14 + 1;
      if (1 < local_14) {
        return;
      }
    }
  }
  return;
}

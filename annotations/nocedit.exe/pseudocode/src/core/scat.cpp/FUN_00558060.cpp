// Name: core_scat.cpp_FUN_00558060
// Address: 00558060
// Address Range: [[00558060, 005582b5]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_FUN_00558060(void)

#include "nocturne.h"

/* Signature: byte actors_hero_scat.cpp_FUN_00558060(uint param_1, uint param_2)
    */

void __cdecl core_scat_cpp_FUN_00558060(void)

{
  int iVar1;
  SMotion *pSVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  int local_14;
  
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&(in_stack_00000004->model).motion_controller);
  if ((pSVar2->state_index != 0xc) &&
     (pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(in_stack_00000004->model).motion_controller), pSVar2->state_index != 0xd
     )) {
    iVar5 = *(int *)(in_stack_00000004[2].cloth_data + 0x5388);
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) == 0) {
      iVar5 = 0;
    }
    iVar1 = *(int *)(in_stack_00000004[2].cloth_data + 0x5508);
    if (((iVar1 != 0) && (iVar5 != iVar1)) && (*(int *)(iVar1 + 0x2e0) == 8)) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(in_stack_00000004->model).motion_controller);
      if (pSVar2->state_index == 0) {
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
      iVar1 = *(int *)(in_stack_00000004[2].cloth_data + 0x5508);
      if ((iVar5 == iVar1) && (iVar1 != 0)) {
        switch(*(uint *)(iVar1 + 0x2e0)) {
        default:
          break;
        case 8:
        }
      }
      uVar3 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042e370(in_stack_00000004);
      core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                (&(in_stack_00000004->model).motion_controller);
      if (-1 < (int)uVar3) {
        iVar1 = *(int *)(in_stack_00000004[2].cloth_data + 0x5508);
        if (iVar5 != iVar1) {
          if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x2e0) != 8) == uVar3)) {
            (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5508) + 0x154) + 0xf0
                        ))();
            in_stack_00000004[2].cloth_data[0x5508] = '\0';
            in_stack_00000004[2].cloth_data[0x5509] = '\0';
            in_stack_00000004[2].cloth_data[0x550a] = '\0';
            in_stack_00000004[2].cloth_data[0x550b] = '\0';
          }
          if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0) {
            if ((iVar5 == 0) || (*(int *)(iVar5 + 0x2e0) == 8)) {
              uVar4 = 0;
            }
            else {
              uVar4 = 1;
            }
            if (((uVar4 == uVar3) &&
                (*(int *)(in_stack_00000004[2].cloth_data + 0x5508) = iVar5, iVar5 != 0)) &&
               ((**(code **)(*(int *)(iVar5 + 0x154) + 0xf0))(),
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

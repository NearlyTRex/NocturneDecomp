// Name: core_scat.cpp_CScat_FUN_00558060
// Address: 00558060
// Address Range: [[00558060, 005582b5]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_FUN_00558060(CScat *this_ptr)

#include "nocturne.h"

void __cdecl core_scat_cpp_CScat_FUN_00558060(CScat *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  CWeapon *pCVar2;
  SMotion *pSVar3;
  uint uVar4;
  uint uVar5;
  CWeapon *pCVar6;
  float in_stack_00000008;
  int local_14;
  
  pCVar1 = &(this_ptr->base).base.model;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar1->motion_controller);
  if ((pSVar3->state_index != 0xc) &&
     (pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&pCVar1->motion_controller), pSVar3->state_index != 0xd)) {
    pCVar6 = (this_ptr->base).inventory.selected_weapon;
    if (*(int *)this_ptr->unk == 0) {
      pCVar6 = (CWeapon *)0x0;
    }
    pCVar2 = *(CWeapon **)(this_ptr->unk + 0x14);
    if (((pCVar2 != (CWeapon *)0x0) && (pCVar6 != pCVar2)) && (*(int *)(pCVar2->unk1 + 8) == 8)) {
      pCVar1 = &(this_ptr->base).base.model;
      pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&pCVar1->motion_controller);
      if (pSVar3->state_index == 0) {
        this_ptr->unk[0x14] = '\0';
        this_ptr->unk[0x15] = '\0';
        this_ptr->unk[0x16] = '\0';
        this_ptr->unk[0x17] = '\0';
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0,1);
      }
    }
    pCVar1 = &(this_ptr->base).base.model;
    local_14 = 0;
    while (0.0 < in_stack_00000008) {
      pCVar2 = *(CWeapon **)(this_ptr->unk + 0x14);
      if ((pCVar6 == pCVar2) && (pCVar2 != (CWeapon *)0x0)) {
        switch(*(uint *)(pCVar2->unk1 + 8)) {
        default:
          break;
        case 8:
        }
      }
      uVar4 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042e370((CCharacter *)this_ptr);
      core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(&pCVar1->motion_controller);
      if (-1 < (int)uVar4) {
        pCVar2 = *(CWeapon **)(this_ptr->unk + 0x14);
        if (pCVar6 != pCVar2) {
          if ((pCVar2 != (CWeapon *)0x0) && ((*(int *)(pCVar2->unk1 + 8) != 8) == uVar4)) {
            (**(code **)(*(int *)(*(int *)(this_ptr->unk + 0x14) + 0x154) + 0xf0))();
            this_ptr->unk[0x14] = '\0';
            this_ptr->unk[0x15] = '\0';
            this_ptr->unk[0x16] = '\0';
            this_ptr->unk[0x17] = '\0';
          }
          if (*(int *)this_ptr->unk != 0) {
            if ((pCVar6 == (CWeapon *)0x0) || (*(int *)(pCVar6->unk1 + 8) == 8)) {
              uVar5 = 0;
            }
            else {
              uVar5 = 1;
            }
            if (((uVar5 == uVar4) &&
                (*(CWeapon **)(this_ptr->unk + 0x14) = pCVar6, pCVar6 != (CWeapon *)0x0)) &&
               ((*(((pCVar6->base).vtable._uc)->_uc).cfunc2)(),
               *(int *)(*(int *)(this_ptr->unk + 0x14) + 0x2e0) == 8)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,6,1);
            }
          }
        }
        core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0((CCharacter *)this_ptr);
      }
      local_14 = local_14 + 1;
      if (1 < local_14) {
        return;
      }
    }
  }
  return;
}

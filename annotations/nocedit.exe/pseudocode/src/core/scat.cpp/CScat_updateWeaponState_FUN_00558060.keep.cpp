// Name: core_scat.cpp_CScat_updateWeaponState_FUN_00558060
// Address: 00558060
// MANUAL RECONSTRUCTION
// Address Range: [[00558060, 005582b5]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_updateWeaponState_FUN_00558060(CScat *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_scat_cpp_CScat_updateWeaponState_FUN_00558060(CScat *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CWeapon *current_weapon;
  SMotion *pSVar3;
  int layer_result;
  CWeapon *selected_weapon;
  CWeapon *weapon_actor;
  int weapon_action;
  CMotionController *this_ptr_01;
  int iVar7;
  
  pCVar1 = &(this_ptr->base).base.model;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar1->motion_controller);
  if ((pSVar3->state_index != 0xc) &&
     (pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&pCVar1->motion_controller), pSVar3->state_index != 0xd)) {
    selected_weapon = (this_ptr->base).inventory.selected_weapon;
    if (this_ptr->guns_drawn == 0) {
      selected_weapon = (CWeapon *)0x0;
    }
    weapon_actor = this_ptr->weapon_actor;
    if (((weapon_actor != (CWeapon *)0x0) && (selected_weapon != weapon_actor)) &&
       (weapon_actor->weapon_type == 8)) {
      pCVar1 = &(this_ptr->base).base.model;
      pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&pCVar1->motion_controller);
      if (pSVar3->state_index == 0) {
        this_ptr->weapon_actor = (CWeapon *)0x0;
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0,1);
      }
    }
    this_ptr_01 = &(this_ptr->base).base.model.motion_controller;
    iVar7 = 0;
    while (0.0 < delta_time) {
      weapon_actor = this_ptr->weapon_actor;
      if (selected_weapon == weapon_actor) {
        if (weapon_actor != (CWeapon *)0x0) {
          switch(weapon_actor->weapon_type) {
          default:
            weapon_action = 2;
            break;
          case 8:
            weapon_action = 0;
          }
        }
      }
      else if (weapon_actor == (CWeapon *)0x0) {
        if ((selected_weapon != (CWeapon *)0x0) &&
           (selected_weapon->weapon_type != 8)) {
LAB_00558263:
          weapon_action = 1;
        }
      }
      else {
        if (weapon_actor->weapon_type != 8) goto LAB_00558263;
        weapon_action = 0;
      }
      layer_result =
           core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042e370
                     ((CCharacter *)this_ptr,&delta_time,weapon_action);
      core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(this_ptr_01);
      if (0 <= layer_result) {
        current_weapon = this_ptr->weapon_actor;
        if (selected_weapon != current_weapon) {
          if ((current_weapon != (CWeapon *)0x0) &&
             ((int)(current_weapon->weapon_type != 8) == layer_result)) {
            (*(this_ptr->weapon_actor->base.vtable._uw)->_uw.setWeaponState)
                      (this_ptr->weapon_actor, 1);
            this_ptr->weapon_actor = (CWeapon *)0x0;
          }
          if (this_ptr->guns_drawn != 0) {
            int weapon_ready;
            if ((selected_weapon == (CWeapon *)0x0) ||
               (selected_weapon->weapon_type == 8)) {
              weapon_ready = 0;
            }
            else {
              weapon_ready = 1;
            }
            if (((weapon_ready == layer_result) &&
                (this_ptr->weapon_actor = selected_weapon, selected_weapon != (CWeapon *)0x0))
               && ((*(selected_weapon->base.vtable._uw)->_uw.setWeaponState)
                             (selected_weapon, 2),
                  this_ptr->weapon_actor->weapon_type == 8)) {
              iVar7 = 1;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(this_ptr_01,6,1);
            }
          }
        }
        core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0
                  ((CCharacter *)this_ptr,weapon_action);
      }
      iVar7 = iVar7 + 1;
      if (1 < iVar7) {
        return;
      }
    }
  }
  return;
}

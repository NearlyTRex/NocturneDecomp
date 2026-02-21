// Name: core_scat.cpp_CScat_FUN_00558060
// Address: 00558060
// Address Range: [[00558060, 005582b5]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_FUN_00558060(CScat *this_ptr)

#include "nocturne.h"

void __cdecl core_scat_cpp_CScat_FUN_00558060(CScat *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  CCharacter *pCVar2;
  SMotion *pSVar3;
  CVector3f *damage_direction;
  CVector3f *pCVar4;
  CCharacter *this_ptr_00;
  CMotionController *unaff_EDI;
  CCharacter *pCVar5;
  float in_stack_00000008;
  CMotionController *this_ptr_01;
  CVector3f *pCVar6;
  int iVar7;
  
  pCVar1 = &(this_ptr->base).base.model;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar1->motion_controller);
  if ((pSVar3->state_index != 0xc) &&
     (pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&pCVar1->motion_controller), pSVar3->state_index != 0xd)) {
    this_ptr_00 = (CCharacter *)(this_ptr->base).inventory.selected_weapon;
    if (this_ptr->guns_drawn == 0) {
      this_ptr_00 = (CCharacter *)0x0;
    }
    pCVar5 = (CCharacter *)this_ptr->weapon_actor;
    if (((pCVar5 != (CCharacter *)0x0) && (this_ptr_00 != pCVar5)) &&
       ((pCVar5->model).transformed_vertices[0x19].y == 1.12104e-44)) {
      pCVar1 = &(this_ptr->base).base.model;
      pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&pCVar1->motion_controller);
      if (pSVar3->state_index == 0) {
        this_ptr->weapon_actor = (CDemonActor *)0x0;
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0,1);
      }
    }
    this_ptr_01 = &(this_ptr->base).base.model.motion_controller;
    iVar7 = 0;
    while (0.0 < in_stack_00000008) {
      pCVar5 = (CCharacter *)this_ptr->weapon_actor;
      if (this_ptr_00 == pCVar5) {
        if (pCVar5 != (CCharacter *)0x0) {
          switch((pCVar5->model).transformed_vertices[0x19].y) {
          default:
            pCVar5 = (CCharacter *)0x2;
            break;
          case 1.12104e-44:
            pCVar5 = (CCharacter *)0x0;
          }
        }
      }
      else if (pCVar5 == (CCharacter *)0x0) {
        if ((this_ptr_00 != (CCharacter *)0x0) &&
           ((this_ptr_00->model).transformed_vertices[0x19].y != 1.12104e-44)) {
LAB_00558263:
          pCVar5 = (CCharacter *)0x1;
        }
      }
      else {
        if ((pCVar5->model).transformed_vertices[0x19].y != 1.12104e-44) goto LAB_00558263;
        pCVar5 = (CCharacter *)0x0;
      }
      damage_direction =
           (CVector3f *)
           core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042e370
                     ((CCharacter *)this_ptr,&stack0x00000008,(int)pCVar5);
      pCVar6 = damage_direction;
      core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(this_ptr_01);
      if (-1 < (int)damage_direction) {
        pCVar2 = (CCharacter *)this_ptr->weapon_actor;
        if (this_ptr_00 != pCVar2) {
          if ((pCVar2 != (CCharacter *)0x0) &&
             ((CVector3f *)(uint)((pCVar2->model).transformed_vertices[0x19].y != 1.12104e-44) ==
              pCVar6)) {
            (*(((((CCharacter *)this_ptr->weapon_actor)->base).vtable._uc)->_uc).kill)
                      ((CCharacter *)this_ptr->weapon_actor,1,damage_direction,(float)this_ptr_01);
            this_ptr->weapon_actor = (CDemonActor *)0x0;
          }
          if (this_ptr->guns_drawn != 0) {
            if ((this_ptr_00 == (CCharacter *)0x0) ||
               ((this_ptr_00->model).transformed_vertices[0x19].y == 1.12104e-44)) {
              pCVar4 = (CVector3f *)0x0;
            }
            else {
              pCVar4 = (CVector3f *)0x1;
            }
            if (((pCVar4 == pCVar6) &&
                (this_ptr->weapon_actor = &this_ptr_00->base, this_ptr_00 != (CCharacter *)0x0)) &&
               ((*(((this_ptr_00->base).vtable._uc)->_uc).kill)
                          (this_ptr_00,2,damage_direction,(float)this_ptr_01),
               this_ptr->weapon_actor[2].orient.vec.x == 1.12104e-44)) {
              iVar7 = 1;
              this_ptr_01 = unaff_EDI;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(unaff_EDI,6,1);
            }
          }
        }
        core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0
                  ((CCharacter *)this_ptr,(int)pCVar5);
      }
      iVar7 = iVar7 + 1;
      if (1 < iVar7) {
        return;
      }
    }
  }
  return;
}

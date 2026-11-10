// Name: core_scat.cpp_CScat_updateWeaponState_FUN_00541e30
// Address: 00541e30
// Address Range: [[00541e30, 00542085]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_updateWeaponState_FUN_00541e30(CScat *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_scat_cpp_CScat_updateWeaponState_FUN_00541e30(CScat *this_ptr,float delta_time)

{
  CCharacter *pCVar1;
  SMotion *pSVar2;
  CVector3f *damage_direction;
  CVector3f *pCVar3;
  CCharacter *this_ptr_00;
  CMotionController *unaff_EDI;
  CCharacter *pCVar4;
  CMotionController *this_ptr_01;
  CVector3f *pCVar5;
  int iVar6;
  
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&this_ptr->field_0x158);
  if ((*(int *)(pSVar2 + 0x24) != 0xc) &&
     (pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         ((CMotionController *)&this_ptr->field_0x158),
     *(int *)(pSVar2 + 0x24) != 0xd)) {
    this_ptr_00 = *(CCharacter **)&this_ptr->field_0x1fe20;
    if (this_ptr->guns_drawn == 0) {
      this_ptr_00 = (CCharacter *)0x0;
    }
    pCVar4 = (CCharacter *)this_ptr->weapon_actor;
    if (((pCVar4 != (CCharacter *)0x0) && (this_ptr_00 != pCVar4)) &&
       ((pCVar4->model).bone_origins[0x19].y == 1.12104e-44)) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         ((CMotionController *)&this_ptr->field_0x158);
      if (*(int *)(pSVar2 + 0x24) == 0) {
        this_ptr->weapon_actor = (CWeapon *)0x0;
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&this_ptr->field_0x158,0,1);
      }
    }
    this_ptr_01 = (CMotionController *)&this_ptr->field_0x158;
    iVar6 = 0;
    while (0.0 < delta_time) {
      pCVar4 = (CCharacter *)this_ptr->weapon_actor;
      if (this_ptr_00 == pCVar4) {
        if (pCVar4 != (CCharacter *)0x0) {
          switch((pCVar4->model).bone_origins[0x19].y) {
          default:
            pCVar4 = (CCharacter *)0x2;
            break;
          case 1.12104e-44:
            pCVar4 = (CCharacter *)0x0;
          }
        }
      }
      else if (pCVar4 == (CCharacter *)0x0) {
        if ((this_ptr_00 != (CCharacter *)0x0) &&
           ((this_ptr_00->model).bone_origins[0x19].y != 1.12104e-44)) {
LAB_00542033:
          pCVar4 = (CCharacter *)0x1;
        }
      }
      else {
        if ((pCVar4->model).bone_origins[0x19].y != 1.12104e-44) goto LAB_00542033;
        pCVar4 = (CCharacter *)0x0;
      }
      damage_direction =
           (CVector3f *)
           core_charactr_cpp_CCharacter_advanceLayerAction_FUN_004340b0
                     ((CCharacter *)this_ptr,&delta_time,(int)pCVar4);
      pCVar5 = damage_direction;
      core_motion_cpp_CMotionController_getMotionList_FUN_00524a00(this_ptr_01);
      if (-1 < (int)damage_direction) {
        pCVar1 = (CCharacter *)this_ptr->weapon_actor;
        if (this_ptr_00 != pCVar1) {
          if ((pCVar1 != (CCharacter *)0x0) &&
             ((CVector3f *)(uint)((pCVar1->model).bone_origins[0x19].y != 1.12104e-44) == pCVar5)) {
            (*(((((CCharacter *)this_ptr->weapon_actor)->base).vtable._uc)->_uc).kill)
                      ((CCharacter *)this_ptr->weapon_actor,1,damage_direction,(float)this_ptr_01);
            this_ptr->weapon_actor = (CWeapon *)0x0;
          }
          if (this_ptr->guns_drawn != 0) {
            if ((this_ptr_00 == (CCharacter *)0x0) ||
               ((this_ptr_00->model).bone_origins[0x19].y == 1.12104e-44)) {
              pCVar3 = (CVector3f *)0x0;
            }
            else {
              pCVar3 = (CVector3f *)0x1;
            }
            if (((pCVar3 == pCVar5) &&
                (this_ptr->weapon_actor = (CWeapon *)this_ptr_00, this_ptr_00 != (CCharacter *)0x0))
               && ((*(((this_ptr_00->base).vtable._uc)->_uc).kill)
                             (this_ptr_00,2,damage_direction,(float)this_ptr_01),
                  this_ptr->weapon_actor->weapon_type == WEAPON_TYPE_BARON)) {
              iVar6 = 1;
              this_ptr_01 = unaff_EDI;
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(unaff_EDI,6,1);
            }
          }
        }
        core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_00434610
                  ((CCharacter *)this_ptr,(int)pCVar4);
      }
      iVar6 = iVar6 + 1;
      if (1 < iVar6) {
        return;
      }
    }
  }
  return;
}

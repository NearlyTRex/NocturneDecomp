// Name: core_scat.cpp_CScat_updateWeaponState_FUN_0051fd00
// Address: 0051fd00
// Address Range: [[0051fd00, 0051ff5b]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_updateWeaponState_FUN_0051fd00(CScat *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_scat_cpp_CScat_updateWeaponState_FUN_0051fd00(CScat *this_ptr,float delta_time)

{
  CCharacter *pCVar1;
  int iVar2;
  CVector3f *damage_direction;
  CVector3f *pCVar3;
  CCharacter *this_ptr_00;
  CMotionController *unaff_EDI;
  CCharacter *pCVar4;
  CMotionController *this_ptr_01;
  CVector3f *pCVar5;
  
  iVar2 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
  if ((*(int *)(iVar2 + 0x24) != 0xc) &&
     (iVar2 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4), *(int *)(iVar2 + 0x24) != 0xd))
  {
    this_ptr_00 = *(CCharacter **)(&this_ptr->field_0x2498c + *(int *)&this_ptr->field_0x247e4 * 4);
    if (this_ptr->guns_drawn == 0) {
      this_ptr_00 = (CCharacter *)0x0;
    }
    pCVar4 = (CCharacter *)this_ptr->weapon_actor;
    if (((pCVar4 != (CCharacter *)0x0) && (this_ptr_00 != pCVar4)) &&
       (*(int *)&(pCVar4->model).field_0x188 == 9)) {
      iVar2 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
      if (*(int *)(iVar2 + 0x24) == 0) {
        this_ptr->weapon_actor = (CWeapon *)0x0;
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&this_ptr->field_0x2b4,0,1);
      }
    }
    this_ptr_01 = (CMotionController *)&this_ptr->field_0x2b4;
    iVar2 = 0;
    while (0.0 < delta_time) {
      pCVar4 = (CCharacter *)this_ptr->weapon_actor;
      if (this_ptr_00 == pCVar4) {
        if (pCVar4 != (CCharacter *)0x0) {
          switch(*(uint *)&(pCVar4->model).field_0x188) {
          default:
            pCVar4 = (CCharacter *)0x2;
            break;
          case 9:
            pCVar4 = (CCharacter *)0x0;
          }
        }
      }
      else if (pCVar4 == (CCharacter *)0x0) {
        if ((this_ptr_00 != (CCharacter *)0x0) && (*(int *)&(this_ptr_00->model).field_0x188 != 9))
        {
LAB_0051ff09:
          pCVar4 = (CCharacter *)0x1;
        }
      }
      else {
        if (*(int *)&(pCVar4->model).field_0x188 != 9) goto LAB_0051ff09;
        pCVar4 = (CCharacter *)0x0;
      }
      damage_direction =
           (CVector3f *)
           core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042a0c0
                     ((CCharacter *)this_ptr,&delta_time,(int)pCVar4);
      pCVar5 = damage_direction;
      core_motion_cpp_CMotionController_getMotionList_FUN_00503860(this_ptr_01);
      if (-1 < (int)damage_direction) {
        pCVar1 = (CCharacter *)this_ptr->weapon_actor;
        if (this_ptr_00 != pCVar1) {
          if ((pCVar1 != (CCharacter *)0x0) &&
             ((CVector3f *)(uint)(*(int *)&(pCVar1->model).field_0x188 != 9) == pCVar5)) {
            (*(((((CCharacter *)this_ptr->weapon_actor)->base).vtable._uc)->_uc).kill)
                      ((CCharacter *)this_ptr->weapon_actor,1,damage_direction,(float)this_ptr_01);
            this_ptr->weapon_actor = (CWeapon *)0x0;
          }
          if (this_ptr->guns_drawn != 0) {
            if ((this_ptr_00 == (CCharacter *)0x0) ||
               (*(int *)&(this_ptr_00->model).field_0x188 == 9)) {
              pCVar3 = (CVector3f *)0x0;
            }
            else {
              pCVar3 = (CVector3f *)0x1;
            }
            if (((pCVar3 == pCVar5) &&
                (this_ptr->weapon_actor = (CWeapon *)this_ptr_00, this_ptr_00 != (CCharacter *)0x0))
               && ((*(((this_ptr_00->base).vtable._uc)->_uc).kill)
                             (this_ptr_00,2,damage_direction,(float)this_ptr_01),
                  this_ptr->weapon_actor->weapon_type == (WEAPON_TYPE_BARON|WEAPON_TYPE_SHOTGUN))) {
              iVar2 = 1;
              this_ptr_01 = unaff_EDI;
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(unaff_EDI,6,1);
            }
          }
        }
        core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042a620
                  ((CCharacter *)this_ptr,(int)pCVar4);
      }
      iVar2 = iVar2 + 1;
      if (1 < iVar2) {
        return;
      }
    }
  }
  return;
}

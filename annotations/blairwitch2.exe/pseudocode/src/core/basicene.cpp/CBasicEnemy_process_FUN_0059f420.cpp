// Name: core_basicene.cpp_CBasicEnemy_process_FUN_0059f420
// Address: 0059f420
// Address Range: [[0059f420, 0059f56f]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_process_FUN_0059f420(CBasicEnemy *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_basicene_cpp_CBasicEnemy_process_FUN_0059f420(CBasicEnemy *this_ptr,float delta_time)

{
  CHero_full_vtable *pCVar1;
  int iVar2;
  float *unaff_EBP;
  CDemonActor *in_stack_0000000c;
  
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    this_ptr->character_processed = 0;
    return;
  }
  pCVar1 = (this_ptr->base).base.base.vtable._uh;
  this_ptr->character_processed = 1;
  (*(pCVar1->_uh).vfunc87)((CHero *)this_ptr);
  iVar2 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,(float)in_stack_0000000c);
  if (iVar2 == 0) {
    core_muzzle_cpp_FUN_0059da20(&this_ptr->state_machine,in_stack_0000000c);
    (*(((this_ptr->base).base.base.vtable._uh)->_uh).canReachPickup)
              ((CHero *)this_ptr,in_stack_0000000c,1,unaff_EBP);
  }
  else {
    switch((this_ptr->base).base.walk_state) {
    case WALK_STATE_IDLE:
      iVar2 = this_ptr->idle_motion;
      break;
    case WALK_STATE_WALKING:
      iVar2 = this_ptr->walk_motion;
      break;
    case 2:
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,this_ptr->run_motion,1);
      goto LAB_0059f4a2;
    case WALK_STATE_NO_PATH:
      iVar2 = this_ptr->walk_state_3_motion;
      break;
    default:
      iVar2 = this_ptr->idle_motion;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,iVar2,1);
  }
LAB_0059f4a2:
  (*(((this_ptr->base).base.base.vtable._uh)->_uh).doHeroAction)((CHero *)this_ptr);
  if (this_ptr->fade_state != 0) {
    core_basicene_cpp_FUN_0059f5b0();
  }
  core_basicene_cpp_FUN_0059f660();
  core_charactr_cpp_FUN_0042b5e0();
  (*(((this_ptr->base).base.base.vtable._uh)->_uh).isWeaponDrawn)((CHero *)this_ptr);
  return;
}

// Name: core_basicene.cpp_CBasicEnemy_processAlertInvisibleState_FUN_0059ed50
// Address: 0059ed50
// Address Range: [[0059ed50, 0059edf8]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_processAlertInvisibleState_FUN_0059ed50(CBasicEnemy *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_basicene_cpp_CBasicEnemy_processAlertInvisibleState_FUN_0059ed50(CBasicEnemy *this_ptr,float delta_time)

{
  SMotion *pSVar1;
  
  core_basicene_cpp_CBasicEnemy_processAlertState_FUN_0059ec10(this_ptr,delta_time);
  if ((this_ptr->fade_direction == 0) && ((this_ptr->base).victim != (CCharacter *)0x0)) {
    core_basicene_cpp_CBasicEnemy_setFade_FUN_005a01a0(this_ptr,this_ptr->fade_val,1.0,2.0);
    core_basicene_cpp_CBasicEnemy_startFade_FUN_0059f570(this_ptr);
    this_ptr->fade_direction = 1;
    return;
  }
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                     (&(this_ptr->base).base.model.base);
  if ((pSVar1->state_index == this_ptr->idle_motion) && (this_ptr->fade_direction != 0)) {
    core_basicene_cpp_CBasicEnemy_setFade_FUN_005a01a0(this_ptr,this_ptr->fade_val,0.0,10.0);
    core_basicene_cpp_CBasicEnemy_startFade_FUN_0059f570(this_ptr);
    this_ptr->fade_direction = 0;
    return;
  }
  return;
}

// Name: core_vampboss.cpp_CVampireBoss_transformToBat_FUN_005a7250
// Address: 005a7250
// Address Range: [[005a7250, 005a7284]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_transformToBat_FUN_005a7250(CVampireBoss *this_ptr)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_CVampireBoss_transformToBat_FUN_005a7250(CVampireBoss *this_ptr)

{
  CDemonActor_vtable *pCVar1;
  
  this_ptr->form = 1;
  this_ptr->bat_ai_state = 1;
  pCVar1 = (this_ptr->base).base.base.vtable._ub;
  this_ptr->action_timer = 2.0;
  (*pCVar1->playSound)((CDemonActor *)this_ptr,"voicubat.wav");
  return;
}

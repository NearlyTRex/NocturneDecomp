// Name: core_stranger.cpp_CStranger_FUN_005c1f80
// Address: 005c1f80
// Address Range: [[005c1f80, 005c1fd1]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005c1f80(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c1f80(CStranger *this_ptr)

{
  CDemonActor *pCVar1;
  CDemonActor *pCVar2;
  
  pCVar1 = (this_ptr->base).base.carry_hands[1].carry_actor;
  pCVar2 = *(CDemonActor **)(this_ptr->unk5 + 8);
  this_ptr->unk6[4] = '\0';
  this_ptr->unk6[5] = '\0';
  this_ptr->unk6[6] = -0x80;
  this_ptr->unk6[7] = '@';
  if (pCVar1 == pCVar2) {
    this_ptr->unk5[8] = '\0';
    this_ptr->unk5[9] = '\0';
    this_ptr->unk5[10] = '\0';
    this_ptr->unk5[0xb] = '\0';
  }
  (*(((this_ptr->base).base.base.vtable._uc)->_uc).cfunc21)();
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(this_ptr->base).base.model.motion_controller,0,1);
  return;
}

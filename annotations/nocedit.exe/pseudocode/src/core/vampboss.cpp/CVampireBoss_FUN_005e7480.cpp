// Name: core_vampboss.cpp_CVampireBoss_FUN_005e7480
// Address: 005e7480
// Address Range: [[005e7480, 005e74b4]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_FUN_005e7480(CVampireBoss *this_ptr)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_CVampireBoss_FUN_005e7480(CVampireBoss *this_ptr)

{
  CDemonActor_vtable *pCVar1;
  
  this_ptr->form = 1;
  this_ptr->unk4[0x10] = '\x01';
  this_ptr->unk4[0x11] = '\0';
  this_ptr->unk4[0x12] = '\0';
  this_ptr->unk4[0x13] = '\0';
  pCVar1 = (this_ptr->base).base.base.vtable._ub;
  this_ptr->unk4[0] = '\0';
  this_ptr->unk4[1] = '\0';
  this_ptr->unk4[2] = '\0';
  this_ptr->unk4[3] = '@';
  (*pCVar1->playSound)((CDemonActor *)this_ptr,"voicubat.wav");
  return;
}

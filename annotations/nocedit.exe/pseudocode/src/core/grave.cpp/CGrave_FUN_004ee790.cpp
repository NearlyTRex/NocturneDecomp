// Name: core_grave.cpp_CGrave_FUN_004ee790
// Address: 004ee790
// Address Range: [[004ee790, 004ee7e7]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_CGrave_FUN_004ee790(CGrave *this_ptr)

#include "nocturne.h"

void __cdecl core_grave_cpp_CGrave_FUN_004ee790(CGrave *this_ptr)

{
  if ((this_ptr->animation_started == 0) && (this_ptr->grave_state == 0)) {
    this_ptr->grave_state = 1;
    this_ptr->cur_frame = 0.0;
    if (this_ptr->start_sound[0] != '\0') {
      (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->start_sound);
    }
    core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_0056ade0(g_CDemonSetPtr,&this_ptr->base);
  }
  return;
}

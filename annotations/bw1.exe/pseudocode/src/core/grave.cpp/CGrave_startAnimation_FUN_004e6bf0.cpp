// Name: core_grave.cpp_CGrave_startAnimation_FUN_004e6bf0
// Address: 004e6bf0
// Address Range: [[004e6bf0, 004e6c47]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_CGrave_startAnimation_FUN_004e6bf0(CGrave *this_ptr)

#include "nocturne.h"

void __cdecl core_grave_cpp_CGrave_startAnimation_FUN_004e6bf0(CGrave *this_ptr)

{
  if ((this_ptr->animation_started == 0) && (this_ptr->grave_state == 0)) {
    this_ptr->grave_state = 1;
    this_ptr->cur_frame = 0.0;
    if (this_ptr->start_sound[0] != '\0') {
      (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->start_sound);
    }
    core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_0054f060(g_CDemonSetPtr,&this_ptr->base);
  }
  return;
}

// Name: core_grave.cpp_CGrave_startAnimation_FUN_004b0dc0
// Address: 004b0dc0
// Address Range: [[004b0dc0, 004b0e17]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_CGrave_startAnimation_FUN_004b0dc0(CGrave *this_ptr)

#include "nocturne.h"

void __cdecl core_grave_cpp_CGrave_startAnimation_FUN_004b0dc0(CGrave *this_ptr)

{
  if ((this_ptr->animation_started == 0) && (this_ptr->grave_state == 0)) {
    this_ptr->grave_state = 1;
    this_ptr->cur_frame = 0.0;
    if (this_ptr->start_sound[0] != '\0') {
      (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->start_sound);
    }
    core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_00508890(0x01E57284,this_ptr);
  }
  return;
}

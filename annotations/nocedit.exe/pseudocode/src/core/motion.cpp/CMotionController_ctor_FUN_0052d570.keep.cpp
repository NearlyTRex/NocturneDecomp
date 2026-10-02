// Name: core_motion.cpp_CMotionController_ctor_FUN_0052d570
// Address: 0052d570
// MANUAL RECONSTRUCTION
// Address Range: [[0052d570, 0052d592]]
// Convention: __cdecl
// Signature: CMotionController * __cdecl core_motion_cpp_CMotionController_ctor_FUN_0052d570(CMotionController *this_ptr)

#include "nocturne.h"

CMotionController * __cdecl core_motion_cpp_CMotionController_ctor_FUN_0052d570(CMotionController *this_ptr)

{
  this_ptr->vtable = &g_CMotionControllerVTable;
  this_ptr->current_motion_name[0] = '\0';
  this_ptr->motion_list_ptr = (CMotionList *)0x0;
#if !NOCTURNE_AUTHENTIC_MOTION_TWEEN_INIT
  this_ptr->tween_speed = 0.0;
  this_ptr->tween_target_motion = 0;
  this_ptr->tween_target_frame = 0.0;
  this_ptr->tween_direction = 1;
  this_ptr->tween_set_new_state = 0;
#endif
  core_motion_cpp_CMotionController_reset_FUN_0052dad0(this_ptr);
  return this_ptr;
}

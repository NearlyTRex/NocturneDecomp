// Name: core_charactr.cpp_CCharacter_FUN_0042dde0
// Address: 0042dde0
// Address Range: [[0042dde0, 0042de4c]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042dde0(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042dde0(CCharacter *this_ptr)

{
  SMotion *string;
  char *string_00;
  uint *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0(&this_ptr->base_actor,in_stack_00000008)
  ;
  string_00 = (this_ptr->model).model_name;
  core_actor_cpp_crc32ProcessInt_FUN_0040cf50(in_stack_00000008,(int)this_ptr->hit_points);
  if (*string_00 == '\0') {
    return;
  }
  core_actor_cpp_crc32ProcessString_FUN_0040cf90(in_stack_00000008,string_00);
  string = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&(this_ptr->model).motion_controller);
  core_actor_cpp_crc32ProcessString_FUN_0040cf90(in_stack_00000008,string->motion_name);
  core_actor_cpp_crc32ProcessInt_FUN_0040cf50
            (in_stack_00000008,(int)(this_ptr->model).motion_controller.current_frame_number);
  return;
}

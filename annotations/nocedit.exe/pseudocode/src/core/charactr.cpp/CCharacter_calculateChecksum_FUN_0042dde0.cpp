// Name: core_charactr.cpp_CCharacter_calculateChecksum_FUN_0042dde0
// Address: 0042dde0
// Address Range: [[0042dde0, 0042de4c]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_calculateChecksum_FUN_0042dde0(CCharacter *this_ptr,uint *out_crc)

#include "nocturne.h"

void __cdecl
core_charactr_cpp_CCharacter_calculateChecksum_FUN_0042dde0(CCharacter *this_ptr,uint *out_crc)

{
  SMotion *string;
  char *string_00;
  
  core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0(&this_ptr->base,out_crc);
  string_00 = (this_ptr->model).model_name;
  core_actor_cpp_crc32ProcessInt_FUN_0040cf50(out_crc,this_ptr->hit_points);
  if (*string_00 == '\0') {
    return;
  }
  core_actor_cpp_crc32ProcessString_FUN_0040cf90(out_crc,string_00);
  string = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&(this_ptr->model).motion_controller);
  core_actor_cpp_crc32ProcessString_FUN_0040cf90(out_crc,string->motion_name);
  core_actor_cpp_crc32ProcessInt_FUN_0040cf50
            (out_crc,(this_ptr->model).motion_controller.current_frame_number);
  return;
}

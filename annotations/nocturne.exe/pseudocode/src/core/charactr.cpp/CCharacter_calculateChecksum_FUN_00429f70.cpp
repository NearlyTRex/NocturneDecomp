// Name: core_charactr.cpp_CCharacter_calculateChecksum_FUN_00429f70
// Address: 00429f70
// Address Range: [[00429f70, 00429fdc]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_calculateChecksum_FUN_00429f70(CCharacter *this_ptr,uint *out_crc)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_calculateChecksum_FUN_00429f70(CCharacter *this_ptr,uint *out_crc)

{
  SMotion *string;
  char *string_00;
  
  core_actor_cpp_CDemonActor_calculateChecksum_FUN_0040b0d0(&this_ptr->base,out_crc);
  string_00 = (this_ptr->model).model_name;
  core_actor_cpp_crc32ProcessInt_FUN_0040e0e0(out_crc,(int)this_ptr->hit_points);
  if (*string_00 == '\0') {
    return;
  }
  core_actor_cpp_crc32ProcessString_FUN_0040e120(out_crc,string_00);
  string = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&(this_ptr->model).motion_controller);
  core_actor_cpp_crc32ProcessString_FUN_0040e120(out_crc,string->motion_name);
  core_actor_cpp_crc32ProcessInt_FUN_0040e0e0
            (out_crc,(int)(this_ptr->model).motion_controller.current_frame_number);
  return;
}

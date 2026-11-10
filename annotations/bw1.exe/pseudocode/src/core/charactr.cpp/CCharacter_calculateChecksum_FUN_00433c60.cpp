// Name: core_charactr.cpp_CCharacter_calculateChecksum_FUN_00433c60
// Address: 00433c60
// Address Range: [[00433c60, 00433ccc]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_calculateChecksum_FUN_00433c60(CCharacter *this_ptr,uint *out_crc)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_calculateChecksum_FUN_00433c60(CCharacter *this_ptr,uint *out_crc)

{
  SMotion *string;
  char *string_00;
  
  core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409c40(&this_ptr->base,out_crc);
  string_00 = (this_ptr->model).model_name;
  core_actor_cpp_crc32ProcessInt_FUN_0040cf40(out_crc,(int)this_ptr->hit_points);
  if (*string_00 == '\0') {
    return;
  }
  core_actor_cpp_crc32ProcessString_FUN_0040cf80(out_crc,string_00);
  string = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&(this_ptr->model).base);
  core_actor_cpp_crc32ProcessString_FUN_0040cf80(out_crc,(char *)string);
  core_actor_cpp_crc32ProcessInt_FUN_0040cf40
            (out_crc,(int)(this_ptr->model).base.current_frame_number);
  return;
}

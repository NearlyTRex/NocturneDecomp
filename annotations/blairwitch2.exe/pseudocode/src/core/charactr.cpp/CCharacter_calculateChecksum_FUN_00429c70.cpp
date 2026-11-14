// Name: core_charactr.cpp_CCharacter_calculateChecksum_FUN_00429c70
// Address: 00429c70
// Address Range: [[00429c70, 00429cdc]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_calculateChecksum_FUN_00429c70(CCharacter *this_ptr,uint *out_crc)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_calculateChecksum_FUN_00429c70(CCharacter *this_ptr,uint *out_crc)

{
  SMotion *string;
  char *string_00;
  
  core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409df0(&this_ptr->base,out_crc);
  string_00 = (this_ptr->model).model_name;
  core_actor_cpp_crc32ProcessInt_FUN_0040d2a0(out_crc,(int)this_ptr->hit_points);
  if (*string_00 == '\0') {
    return;
  }
  core_actor_cpp_crc32ProcessString_FUN_0040d2e0(out_crc,string_00);
  string = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&(this_ptr->model).base);
  core_actor_cpp_crc32ProcessString_FUN_0040d2e0(out_crc,string->motion_name);
  core_actor_cpp_crc32ProcessInt_FUN_0040d2a0
            (out_crc,(int)(this_ptr->model).base.current_frame_number);
  return;
}

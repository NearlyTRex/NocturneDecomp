// Name: core_charactr.cpp_CCharacter_calculateChecksum_FUN_00429c70
// Address: 00429c70
// Address Range: [[00429c70, 00429cdc]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_calculateChecksum_FUN_00429c70(CCharacter *this_ptr,uint *out_crc)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_calculateChecksum_FUN_00429c70(CCharacter *this_ptr,uint *out_crc)

{
  char *string;
  byte *string_00;
  
  core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409df0(&this_ptr->base,out_crc);
  string_00 = &(this_ptr->model).field_0x2260;
  core_actor_cpp_crc32ProcessInt_FUN_0040d2a0(out_crc,(int)this_ptr->hit_points);
  if (*string_00 == '\0') {
    return;
  }
  core_actor_cpp_crc32ProcessString_FUN_0040d2e0(out_crc,string_00);
  string = (char *)core_motion_cpp_FUN_005035c0(&this_ptr->model);
  core_actor_cpp_crc32ProcessString_FUN_0040d2e0(out_crc,string);
  core_actor_cpp_crc32ProcessInt_FUN_0040d2a0(out_crc,*(int *)&(this_ptr->model).field_0x8);
  return;
}

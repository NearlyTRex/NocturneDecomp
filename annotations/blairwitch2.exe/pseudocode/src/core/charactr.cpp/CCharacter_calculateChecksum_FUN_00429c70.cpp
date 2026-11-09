// Name: core_charactr.cpp_CCharacter_calculateChecksum_FUN_00429c70
// Address: 00429c70
// Address Range: [[00429c70, 00429cdc]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_calculateChecksum_FUN_00429c70(CCharacter *this_ptr,uint *out_crc)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_calculateChecksum_FUN_00429c70(CCharacter *this_ptr,uint *out_crc)

{
  char *string;
  
  core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409df0((CDemonActor *)this_ptr,out_crc);
  core_actor_cpp_crc32ProcessInt_FUN_0040d2a0(out_crc,*(int *)&this_ptr->field_0x25a8);
  if (this_ptr->field_0x2514 == '\0') {
    return;
  }
  core_actor_cpp_crc32ProcessString_FUN_0040d2e0(out_crc,&this_ptr->field_0x2514);
  string = (char *)core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
  core_actor_cpp_crc32ProcessString_FUN_0040d2e0(out_crc,string);
  core_actor_cpp_crc32ProcessInt_FUN_0040d2a0(out_crc,*(int *)&this_ptr->field_0x2bc);
  return;
}

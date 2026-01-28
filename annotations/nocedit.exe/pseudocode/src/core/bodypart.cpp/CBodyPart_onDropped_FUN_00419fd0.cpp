// Name: core_bodypart.cpp_CBodyPart_onDropped_FUN_00419fd0
// Address: 00419fd0
// Address Range: [[00419fd0, 0041a03a]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_onDropped_FUN_00419fd0(CBodyPart *this_ptr,CVector3f *drop_position)

#include "nocturne.h"

void __cdecl
core_bodypart_cpp_CBodyPart_onDropped_FUN_00419fd0(CBodyPart *this_ptr,CVector3f *drop_position)

{
  CVector3f local_10;
  
  this_ptr->unk[0xdd0] = '\0';
  this_ptr->unk[0xdd1] = '\0';
  this_ptr->unk[0xdd2] = '\0';
  this_ptr->unk[0xdd3] = '\0';
  core_bodypart_cpp_CBodyPart_FUN_0041b070(this_ptr);
  if (drop_position == (CVector3f *)0x0) {
    this_ptr->unk[0xb64] = '\0';
    this_ptr->unk[0xb65] = '\0';
    this_ptr->unk[0xb66] = ' ';
    this_ptr->unk[0xb67] = 'A';
    return;
  }
  local_10.z = 0.0;
  local_10.y = 0.0;
  local_10.x = 9.424778;
  core_box_cpp_CBox_setupVelocities_FUN_00420180
            ((CBox *)(this_ptr->unk + 0xb74),drop_position,&local_10);
  this_ptr->unk[0xb64] = '\0';
  this_ptr->unk[0xb65] = '\0';
  this_ptr->unk[0xb66] = ' ';
  this_ptr->unk[0xb67] = 'A';
  return;
}

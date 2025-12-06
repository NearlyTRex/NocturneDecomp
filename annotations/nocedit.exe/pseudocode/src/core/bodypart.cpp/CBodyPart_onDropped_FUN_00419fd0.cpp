// Name: core_bodypart.cpp_CBodyPart_onDropped_FUN_00419fd0
// Address: 00419fd0
// Address Range: [[00419fd0, 0041a03a]]
// Convention: __cdecl
// Signature: void core_bodypart.cpp_CBodyPart_onDropped_FUN_00419fd0(CBodyPart * this_ptr, CVector3f * drop_position)

#include "nocturne.h"

void __cdecl
core_bodypart_cpp_CBodyPart_onDropped_FUN_00419fd0(CBodyPart *this_ptr,CVector3f *drop_position)

{
  BADSPACEBASE *in_ESP;
  CVector3f *in_stack_0000000c;
  float local_c;
  float local_8;
  
  this_ptr->field1_0x158[0xdd0] = '\0';
  this_ptr->field1_0x158[0xdd1] = '\0';
  this_ptr->field1_0x158[0xdd2] = '\0';
  this_ptr->field1_0x158[0xdd3] = '\0';
  core_bodypart_cpp_CBodyPart_FUN_0041b070(this_ptr);
  if (in_stack_0000000c == (CVector3f *)0x0) {
    this_ptr->field1_0x158[0xb64] = '\0';
    this_ptr->field1_0x158[0xb65] = '\0';
    this_ptr->field1_0x158[0xb66] = ' ';
    this_ptr->field1_0x158[0xb67] = 'A';
    return;
  }
  local_8 = 0.0;
  local_c = 9.424778;
  core_box_cpp_CBox_setupVelocities_FUN_00420180
            ((CBox *)(this_ptr->field1_0x158 + 0xb74),in_stack_0000000c,(CVector3f *)&local_c);
  this_ptr->field1_0x158[0xb64] = '\0';
  this_ptr->field1_0x158[0xb65] = '\0';
  this_ptr->field1_0x158[0xb66] = ' ';
  this_ptr->field1_0x158[0xb67] = 'A';
  return;
}

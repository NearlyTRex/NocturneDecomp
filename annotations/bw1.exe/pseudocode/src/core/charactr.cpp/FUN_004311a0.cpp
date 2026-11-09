// Name: core_charactr.cpp_FUN_004311a0
// Address: 004311a0
// Address Range: [[004311a0, 00431209]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_004311a0(CCharacter *this_ptr,int part_index,CVector3f *initial_velocity,int render_in_background)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_004311a0(CCharacter *this_ptr,int part_index,CVector3f *initial_velocity,int render_in_background)

{
  CBodyPart *body_part;
  
  if ((this_ptr->field_0x24a8 != '\0') && (*(int *)(&this_ptr->field_0x2298 + part_index * 4) != 0))
  {
    body_part = core_bodypart_cpp_FUN_00418940
                          ((CVector3f *)&this_ptr->field_0x20,
                           (UOrientationVector *)&this_ptr->field_0x30,initial_velocity,
                           (CDemonActor *)this_ptr,0,0,*(EBloodType *)&this_ptr->field_0x27a0);
    core_charactr_cpp_FUN_00431210(this_ptr,body_part,part_index,render_in_background);
    core_bodypart_cpp_FUN_00419b90(body_part);
    return;
  }
  return;
}

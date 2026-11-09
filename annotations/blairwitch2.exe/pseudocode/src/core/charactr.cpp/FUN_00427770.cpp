// Name: core_charactr.cpp_FUN_00427770
// Address: 00427770
// Address Range: [[00427770, 004277d9]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00427770(CCharacter *this_ptr,int part_index,CVector3f *initial_velocity,int render_in_background)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_00427770(CCharacter *this_ptr,int part_index,CVector3f *initial_velocity,int render_in_background)

{
  CBodyPart *body_part;
  
  if ((this_ptr->field_0x2514 != '\0') && (*(int *)(&this_ptr->field_0x23f4 + part_index * 4) != 0))
  {
    body_part = core_bodypart_cpp_FUN_004154f0
                          ((CVector3f *)&this_ptr->field_0x20,
                           (UOrientationVector *)&this_ptr->field_0x30,initial_velocity,
                           (CDemonActor *)this_ptr,0,0,*(EBloodType *)&this_ptr->field_0x280c);
    core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0
              (this_ptr,body_part,part_index,render_in_background);
    core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416700(body_part);
    return;
  }
  return;
}

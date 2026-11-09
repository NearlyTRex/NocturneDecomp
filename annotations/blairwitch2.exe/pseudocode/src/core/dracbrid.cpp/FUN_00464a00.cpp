// Name: core_dracbrid.cpp_FUN_00464a00
// Address: 00464a00
// Address Range: [[00464a00, 00464a99]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_FUN_00464a00(CDraculaBride *this_ptr,int part_index,CVector3f *initial_velocity,int render_in_background)

#include "nocturne.h"

void __cdecl core_dracbrid_cpp_FUN_00464a00(CDraculaBride *this_ptr,int part_index,CVector3f *initial_velocity,int render_in_background)

{
  CBodyPart *body_part;
  
  if ((this_ptr->field_0x2514 != '\0') && (*(int *)(&this_ptr->field_0x23f4 + part_index * 4) != 0))
  {
    body_part = core_bodypart_cpp_FUN_004154f0
                          ((CVector3f *)&this_ptr->field_0x20,
                           (UOrientationVector *)&this_ptr->field_0x30,initial_velocity,
                           (CDemonActor *)this_ptr,0,0,*(EBloodType *)&this_ptr->field_0x280c);
    core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0
              ((CCharacter *)this_ptr,body_part,part_index,render_in_background);
    core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416700(body_part);
    *(CBodyPart **)(&this_ptr->field_0x10ba8 + *(int *)&this_ptr->field_0x10ba4 * 4) = body_part;
    *(int *)&this_ptr->field_0x10ba4 = *(int *)&this_ptr->field_0x10ba4 + 1;
    *(uint *)&body_part->field_0xfc = 1;
    *(uint *)&body_part->field_0x10c8 = 1;
    *(uint *)&body_part->field_0x10d4 = 0xffff;
    return;
  }
  return;
}

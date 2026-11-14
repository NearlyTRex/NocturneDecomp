// Name: core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520
// Address: 00430520
// Address Range: [[00430520, 00430589]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520(CCharacter *this_ptr,int part_index,CVector3f *initial_velocity,int render_in_background)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520(CCharacter *this_ptr,int part_index,CVector3f *initial_velocity,int render_in_background)

{
  CBodyPart *body_part;
  
  if (((this_ptr->model).model_name[0] != '\0') &&
     ((this_ptr->model).part_data.visibility_flags[part_index] != 0)) {
    body_part = core_bodypart_cpp_createBodyPart_FUN_00414550
                          (&(this_ptr->base).location.position,&(this_ptr->base).orient,
                           initial_velocity,&this_ptr->base,0,0,this_ptr->blood_type);
    core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00430590
              (this_ptr,body_part,part_index,render_in_background);
    core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_004157c0(body_part);
    return;
  }
  return;
}

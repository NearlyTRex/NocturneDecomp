// Name: core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0
// Address: 0042bcc0
// Address Range: [[0042bcc0, 0042bd29]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter *this_ptr,int part_index,CVector3f *initial_velocity,int render_in_background)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter *this_ptr,int part_index,CVector3f *initial_velocity,int render_in_background)

{
  CBodyPart *body_part;
  
  if (((this_ptr->model).model_name[0] != '\0') &&
     ((this_ptr->model).part_data.visibility_flags[part_index] != 0)) {
    body_part = core_bodypart_cpp_createBodyPart_FUN_00418e10
                          (&(this_ptr->base).location.position,&(this_ptr->base).orient,
                           initial_velocity,&this_ptr->base,0,0,this_ptr->blood_type);
    core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
              (this_ptr,body_part,part_index,render_in_background);
    core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_0041a050(body_part);
    return;
  }
  return;
}

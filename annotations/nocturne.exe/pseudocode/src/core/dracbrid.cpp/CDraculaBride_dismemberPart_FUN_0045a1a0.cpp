// Name: core_dracbrid.cpp_CDraculaBride_dismemberPart_FUN_0045a1a0
// Address: 0045a1a0
// Address Range: [[0045a1a0, 0045a239]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_dismemberPart_FUN_0045a1a0(CDraculaBride *this_ptr,int part_index,CVector3f *initial_velocity,int render_in_background)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_dracbrid_cpp_CDraculaBride_dismemberPart_FUN_0045a1a0(CDraculaBride *this_ptr,int part_index,CVector3f *initial_velocity,int render_in_background)

{
  CBodyPart *body_part;
  
  if (((this_ptr->base).base.model.model_name[0] != '\0') &&
     ((this_ptr->base).base.model.part_data.visibility_flags[part_index] != 0)) {
    body_part = core_bodypart_cpp_createBodyPart_FUN_00415b30
                          (&(this_ptr->base).base.base.location.position,
                           &(this_ptr->base).base.base.orient,initial_velocity,
                           (CDemonActor *)this_ptr,0,0,(this_ptr->base).base.blood_type);
    core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00427eb0
              ((CCharacter *)this_ptr,body_part,part_index,render_in_background);
    core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416d40(body_part);
    this_ptr->part_list[this_ptr->part_count] = body_part;
    this_ptr->part_count = this_ptr->part_count + 1;
    (body_part->base).is_transparent = 1;
    body_part->transparent_geometry_flag = 1;
    body_part->render_alpha = 0xffff;
    return;
  }
  return;
}

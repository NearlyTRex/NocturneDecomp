// Name: core_dracbrid.cpp_CDraculaBride_FUN_00485b20
// Address: 00485b20
// Address Range: [[00485b20, 00485bb9]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_FUN_00485b20(CDraculaBride *this_ptr)

#include "nocturne.h"

void __cdecl core_dracbrid_cpp_CDraculaBride_FUN_00485b20(CDraculaBride *this_ptr)

{
  CBodyPart *body_part;
  int in_stack_00000008;
  int in_stack_00000010;
  
  if (((this_ptr->base).base.model.model_name[0] != '\0') &&
     ((this_ptr->base).base.model.part_visibility_flags[in_stack_00000008] != 0)) {
    body_part = core_bodypart_cpp_createBodyPart_FUN_00418e10();
    core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
              ((CCharacter *)this_ptr,body_part,in_stack_00000008,in_stack_00000010);
    core_bodypart_cpp_CBodyPart_FUN_0041a050(body_part);
    *(CBodyPart **)(this_ptr->unk4 + this_ptr->part_count * 4) = body_part;
    this_ptr->part_count = this_ptr->part_count + 1;
    (body_part->base).is_transparent = 1;
    body_part->transparent_geometry_flag = 1;
    body_part->unk6[4] = -1;
    body_part->unk6[5] = -1;
    body_part->unk6[6] = '\0';
    body_part->unk6[7] = '\0';
    return;
  }
  return;
}

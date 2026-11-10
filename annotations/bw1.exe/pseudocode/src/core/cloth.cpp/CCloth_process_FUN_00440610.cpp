// Name: core_cloth.cpp_CCloth_process_FUN_00440610
// Address: 00440610
// Address Range: [[00440610, 00440638]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_process_FUN_00440610(CCloth *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y ,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_process_FUN_00440610(CCloth *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y ,CDeformableModelInstance *model_ptr)

{
  core_cloth_cpp_CCloth_step_FUN_00440640(this_ptr,position,euler,delta_time,floor_y,model_ptr);
  return;
}

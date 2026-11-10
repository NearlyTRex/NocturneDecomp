// Name: core_cloth.cpp_CCloth_process_FUN_0043e270
// Address: 0043e270
// Address Range: [[0043e270, 0043e298]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_process_FUN_0043e270(CCloth *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y ,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_process_FUN_0043e270(CCloth *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y ,CDeformableModelInstance *model_ptr)

{
  core_cloth_cpp_CCloth_step_FUN_0043e2a0(this_ptr,position,euler,delta_time,floor_y,model_ptr);
  return;
}

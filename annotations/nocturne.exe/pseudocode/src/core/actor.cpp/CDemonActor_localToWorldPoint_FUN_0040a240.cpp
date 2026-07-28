// Name: core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
// Address: 0040a240
// Address Range: [[0040a240, 0040a285]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor *this_ptr,CVector3f *output_world_point,CVector3f *input_local_point)

#include "nocturne.h"

CVector3f * __cdecl core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor *this_ptr,CVector3f *output_world_point,CVector3f *input_local_point)

{
  float *pfVar1;
  byte local_10 [12];
  
  pfVar1 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                              (&this_ptr->orient_matrix,local_10,input_local_point);
  output_world_point->x = *pfVar1 + (this_ptr->location).position.x;
  output_world_point->y = pfVar1[1] + (this_ptr->location).position.y;
  output_world_point->z = pfVar1[2] + (this_ptr->location).position.z;
  return output_world_point;
}

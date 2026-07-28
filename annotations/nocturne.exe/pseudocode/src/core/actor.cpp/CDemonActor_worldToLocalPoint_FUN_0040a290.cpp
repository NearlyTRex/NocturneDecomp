// Name: core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
// Address: 0040a290
// Address Range: [[0040a290, 0040a2d4]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor *this_ptr,CVector3f *output_local_point,CVector3f *input_world_point)

#include "nocturne.h"

CVector3f * __cdecl core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor *this_ptr,CVector3f *output_local_point,CVector3f *input_world_point)

{
  float local_10;
  float local_c;
  float local_8;
  
  local_10 = input_world_point->x - (this_ptr->location).position.x;
  local_c = input_world_point->y - (this_ptr->location).position.y;
  local_8 = input_world_point->z - (this_ptr->location).position.z;
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
            (&this_ptr->orient_matrix,output_local_point,&local_10);
  return output_local_point;
}

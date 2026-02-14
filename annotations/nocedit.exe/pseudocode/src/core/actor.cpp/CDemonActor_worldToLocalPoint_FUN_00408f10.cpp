// Name: core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
// Address: 00408f10
// Address Range: [[00408f10, 00408f54]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor *this_ptr,CVector3f *output_local_point,CVector3f *input_world_point)

#include "nocturne.h"

CVector3f * __cdecl core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor *this_ptr,CVector3f *output_local_point,CVector3f *input_world_point)

{
  CVector3f local_10;
  
  local_10.x = input_world_point->x - (this_ptr->location).position.x;
  local_10.y = input_world_point->y - (this_ptr->location).position.y;
  local_10.z = input_world_point->z - (this_ptr->location).position.z;
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
            (&this_ptr->orient_matrix,output_local_point,&local_10);
  return output_local_point;
}

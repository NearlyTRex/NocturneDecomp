// Name: core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
// Address: 00408ec0
// Address Range: [[00408ec0, 00408f05]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor *this_ptr,CVector3f *output_world_point,CVector3f *input_local_point)

#include "nocturne.h"

CVector3f * __cdecl core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor *this_ptr,CVector3f *output_world_point,CVector3f *input_local_point)

{
  CVector3f *pCVar1;
  CVector3f local_10;
  
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                     (&this_ptr->orient_matrix,&local_10,input_local_point);
  output_world_point->x = pCVar1->x + (this_ptr->location).position.x;
  output_world_point->y = pCVar1->y + (this_ptr->location).position.y;
  output_world_point->z = pCVar1->z + (this_ptr->location).position.z;
  return output_world_point;
}

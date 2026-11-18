// Name: core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408d70
// Address: 00408d70
// Address Range: [[00408d70, 00408dd9]]
// Convention: __stack2_esi
// Signature: CVector3f * __stack2_esi core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70(CDemonActor *this_ptr,CVector3f *input_local_point,CVector3f *output_world_point)

#include "nocturne.h"

CVector3f * __stack2_esi core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70(CDemonActor *this_ptr,CVector3f *input_local_point,CVector3f *output_world_point)

{
  float *pfVar1;
  byte bVar2;
  float afStackY_1014 [1016];
  float local_2c;
  float local_28;
  float local_24;
  CVector3f local_20;
  float local_14;
  float local_10 [2];
  
  bVar2 = 0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530
            (&this_ptr->orient_matrix,input_local_point,&local_20);
  local_2c = local_20.x;
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar2 * -8) =
       *(uint *)((int)&local_20 + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)((int)&local_20 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  local_14 = local_2c + (this_ptr->location).position.x;
  local_10[0] = local_28 + (this_ptr->location).position.y;
  local_10[1] = local_24 + (this_ptr->location).position.z;
  pfVar1 = (float *)((int)output_world_point + (uint)bVar2 * -8 + 4);
  output_world_point->x = local_14;
  *pfVar1 = local_10[(uint)bVar2 * -2];
  pfVar1[(uint)bVar2 * -2 + 1] = local_10[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  return output_world_point;
}

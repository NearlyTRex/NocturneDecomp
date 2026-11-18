// Name: core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
// Address: 00408de0
// Address Range: [[00408de0, 00408e40]]
// Convention: __stack2_esi
// Signature: CVector3f * __stack2_esi core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0(CDemonActor *this_ptr,CVector3f *input_world_point,CVector3f *output_local_point)

#include "nocturne.h"

CVector3f * __stack2_esi core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0(CDemonActor *this_ptr,CVector3f *input_world_point,CVector3f *output_local_point)

{
  uint *puVar1;
  byte bVar2;
  float afStackY_ffc [1010];
  CVector3f CStack_2c;
  float local_20;
  float local_1c;
  float local_18;
  CVector3f local_14;
  
  bVar2 = 0;
  CStack_2c.x = input_world_point->x - (this_ptr->location).position.x;
  CStack_2c.y = input_world_point->y - (this_ptr->location).position.y;
  CStack_2c.z = input_world_point->z - (this_ptr->location).position.z;
  local_20 = CStack_2c.x;
  local_1c = CStack_2c.y;
  local_18 = CStack_2c.z;
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_004495a0
            (&this_ptr->orient_matrix,&CStack_2c,&local_14);
  puVar1 = (uint *)((int)output_local_point + (uint)bVar2 * -8 + 4);
  output_local_point->x = local_14.x;
  *puVar1 = *(uint *)((int)&local_14 + (uint)bVar2 * -8 + 4);
  puVar1[(uint)bVar2 * -2 + 1] =
       *(uint *)((int)&local_14 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  return output_local_point;
}

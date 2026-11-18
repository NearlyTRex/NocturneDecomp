// Name: core_actor.cpp_CDemonActor_transformVector_FUN_00408b00
// Address: 00408b00
// Address Range: [[00408b00, 00408b30]]
// Convention: __stack2_esi
// Signature: CVector3f * __stack2_esi core_actor_cpp_CDemonActor_transformVector_FUN_00408b00(CDemonActor *this_ptr,CVector3f *input,CVector3f *output)

#include "nocturne.h"

CVector3f * __stack2_esi core_actor_cpp_CDemonActor_transformVector_FUN_00408b00(CDemonActor *this_ptr,CVector3f *input,CVector3f *output)

{
  uint *puVar1;
  byte bVar2;
  float afStackY_ffc [1016];
  CVector3f local_14;
  
  bVar2 = 0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045b800(&this_ptr->orient_matrix,input,&local_14)
  ;
  puVar1 = (uint *)((int)output + (uint)bVar2 * -8 + 4);
  output->x = local_14.x;
  *puVar1 = *(uint *)((int)&local_14 + (uint)bVar2 * -8 + 4);
  puVar1[(uint)bVar2 * -2 + 1] =
       *(uint *)((int)&local_14 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  return output;
}

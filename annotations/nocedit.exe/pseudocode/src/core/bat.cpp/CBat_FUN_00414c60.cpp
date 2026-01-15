// Name: core_bat.cpp_CBat_FUN_00414c60
// Address: 00414c60
// Address Range: [[00414c60, 00414cd5]]
// Convention: __cdecl
// Signature: int * core_bat.cpp_CBat_FUN_00414c60(CBat * this_ptr)

#include "nocturne.h"

int * __cdecl core_bat_cpp_CBat_FUN_00414c60(CBat *this_ptr)

{
  CKeyFramedModelInstance *this_ptr_00;
  CKeyFramedModel *pCVar1;
  CVector3f *pCVar2;
  double dVar3;
  float *in_stack_00000008;
  
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)*(float *)(this_ptr->course_filename + 0x2c));
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr_00);
  pCVar2 = pCVar1->frame_bounds + (int)ROUND(dVar3) * 2;
  *in_stack_00000008 = pCVar2->x;
  in_stack_00000008[1] = pCVar2->y;
  in_stack_00000008[2] = pCVar2->z;
  in_stack_00000008[3] = pCVar2[1].x;
  in_stack_00000008[4] = pCVar2[1].y;
  in_stack_00000008[5] = pCVar2[1].z;
  return (int *)in_stack_00000008;
}

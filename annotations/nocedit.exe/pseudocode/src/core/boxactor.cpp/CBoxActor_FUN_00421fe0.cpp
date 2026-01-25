// Name: core_boxactor.cpp_CBoxActor_FUN_00421fe0
// Address: 00421fe0
// Address Range: [[00421fe0, 00422055]]
// Convention: __cdecl
// Signature: float * core_boxactor.cpp_CBoxActor_FUN_00421fe0(CBoxActor * this_ptr)

#include "nocturne.h"

float * __cdecl core_boxactor_cpp_CBoxActor_FUN_00421fe0(CBoxActor *this_ptr)

{
  CKeyFramedModel *pCVar1;
  CVector3f *pCVar2;
  double dVar3;
  float *in_stack_00000008;
  
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)(float)this_ptr->field7_0x310);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)this_ptr->model_name);
  pCVar2 = pCVar1->frame_bounds + (int)ROUND(dVar3) * 2;
  *in_stack_00000008 = pCVar2->x;
  in_stack_00000008[1] = pCVar2->y;
  in_stack_00000008[2] = pCVar2->z;
  in_stack_00000008[3] = pCVar2[1].x;
  in_stack_00000008[4] = pCVar2[1].y;
  in_stack_00000008[5] = pCVar2[1].z;
  return in_stack_00000008;
}

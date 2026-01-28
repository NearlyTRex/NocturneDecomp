// Name: core_vampboss.cpp_CVampireBoss_FUN_005e7280
// Address: 005e7280
// Address Range: [[005e7280, 005e7310]]
// Convention: __cdecl
// Signature: int __cdecl core_vampboss_cpp_CVampireBoss_FUN_005e7280(CVampireBoss *this_ptr)

#include "nocturne.h"

int __cdecl core_vampboss_cpp_CVampireBoss_FUN_005e7280(CVampireBoss *this_ptr)

{
  float fVar1;
  float fVar2;
  CBoundingBox3D *pCVar3;
  float *in_stack_00000008;
  CBoundingBox3D CStack_34;
  float fStack_8;
  
  pCVar3 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                     ((CDemonActor *)this_ptr,&CStack_34);
  fVar1 = ((pCVar3->min).y + (pCVar3->max).y) * 0.5f;
  fVar2 = ((pCVar3->min).z + (pCVar3->max).z) * 0.5f;
  if (in_stack_00000008 == &fStack_8) {
    return 1;
  }
  *in_stack_00000008 = ((pCVar3->min).x + (pCVar3->max).x) * 0.5f;
  in_stack_00000008[1] = fVar1;
  in_stack_00000008[2] = fVar2;
  return 1;
}

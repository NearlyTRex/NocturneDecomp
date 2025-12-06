// Name: core_simbox.cpp_CSimBox_FUN_00589160
// Address: 00589160
// Address Range: [[00589160, 005891ad]]
// Convention: __cdecl
// Signature: float * core_simbox.cpp_CSimBox_FUN_00589160(CSimBox * this_ptr)

#include "nocturne.h"

float * __cdecl core_simbox_cpp_CSimBox_FUN_00589160(CSimBox *this_ptr)

{
  CVector3f *pCVar1;
  CKeyFramedModel *pCVar2;
  float *in_stack_00000008;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)this_ptr->field1_0x158);
  pCVar1 = pCVar2->frame_bounds;
  *in_stack_00000008 = pCVar1->x;
  in_stack_00000008[1] = pCVar1->y;
  in_stack_00000008[2] = pCVar1->z;
  in_stack_00000008[3] = pCVar1[1].x;
  in_stack_00000008[4] = pCVar1[1].y;
  in_stack_00000008[5] = pCVar1[1].z;
  return in_stack_00000008;
}

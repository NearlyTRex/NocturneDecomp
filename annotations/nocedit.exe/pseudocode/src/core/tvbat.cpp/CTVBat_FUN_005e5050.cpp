// Name: core_tvbat.cpp_CTVBat_FUN_005e5050
// Address: 005e5050
// Address Range: [[005e5050, 005e50c5]]
// Convention: __cdecl
// Signature: int * core_tvbat.cpp_CTVBat_FUN_005e5050(CTVBat * this_ptr)

#include "nocturne.h"

int * __cdecl core_tvbat_cpp_CTVBat_FUN_005e5050(CTVBat *this_ptr)

{
  CKeyFramedModel *pCVar1;
  CVector3f *pCVar2;
  uint in_EDX;
  double dVar3;
  int unaff_retaddr;
  float *in_stack_00000008;
  
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,this_ptr->field1_0xbeb4 + 0xc));
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(SUB84 /* extract 2-byte value */(dVar3,0));
  pCVar2 = pCVar1->frame_bounds + unaff_retaddr * 2;
  *in_stack_00000008 = pCVar2->x;
  in_stack_00000008[1] = pCVar2->y;
  in_stack_00000008[2] = pCVar2->z;
  in_stack_00000008[3] = pCVar2[1].x;
  in_stack_00000008[4] = pCVar2[1].y;
  in_stack_00000008[5] = pCVar2[1].z;
  return (int *)in_stack_00000008;
}

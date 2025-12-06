// Name: core_crossbow.cpp_CCrossbow_FUN_00448eb0
// Address: 00448eb0
// Address Range: [[00448eb0, 00448f1d]]
// Convention: __cdecl
// Signature: int core_crossbow.cpp_CCrossbow_FUN_00448eb0(CCrossbow * this_ptr)

#include "nocturne.h"

int __cdecl core_crossbow_cpp_CCrossbow_FUN_00448eb0(CCrossbow *this_ptr)

{
  float fVar1;
  float fVar2;
  CKeyFramedModel *pCVar3;
  uint *in_stack_00000008;
  
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     (&(this_ptr->base_weapon).model);
  fVar1 = (pCVar3->bounds_max).y;
  fVar2 = (pCVar3->bounds_max).z;
  *in_stack_00000008 = 0;
  in_stack_00000008[1] = fVar1;
  in_stack_00000008[2] = fVar2;
  return (int)in_stack_00000008;
}

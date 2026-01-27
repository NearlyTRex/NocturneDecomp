// Name: core_trigger.cpp_CTrigger_FUN_005e0c30
// Address: 005e0c30
// Address Range: [[005e0c30, 005e0cc6]]
// Convention: __cdecl
// Signature: int core_trigger.cpp_CTrigger_FUN_005e0c30(CTrigger * this_ptr)

#include "nocturne.h"

int __cdecl core_trigger_cpp_CTrigger_FUN_005e0c30(CTrigger *this_ptr)

{
  float fVar1;
  float fVar2;
  CBoundingBox3D *pCVar3;
  float *in_stack_00000008;
  CBoundingBox3D CStack_34;
  float afStack_14 [4];
  
  if (*(int *)(this_ptr->unk + 0x1c) != 4) {
    return 0;
  }
  pCVar3 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_34);
  fVar1 = ((pCVar3->min).y + (pCVar3->max).y) * 0.5f;
  fVar2 = ((pCVar3->min).z + (pCVar3->max).z) * 0.5f;
  if (in_stack_00000008 != afStack_14) {
    *in_stack_00000008 = ((pCVar3->min).x + (pCVar3->max).x) * 0.5f;
    in_stack_00000008[1] = fVar1;
    in_stack_00000008[2] = fVar2;
  }
  return 1;
}

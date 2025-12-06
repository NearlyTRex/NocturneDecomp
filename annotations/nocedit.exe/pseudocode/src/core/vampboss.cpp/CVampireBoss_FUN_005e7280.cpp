// Name: core_vampboss.cpp_CVampireBoss_FUN_005e7280
// Address: 005e7280
// Address Range: [[005e7280, 005e7310]]
// Convention: __cdecl
// Signature: int core_vampboss.cpp_CVampireBoss_FUN_005e7280(CVampireBoss * this_ptr)

#include "nocturne.h"

int __cdecl core_vampboss_cpp_CVampireBoss_FUN_005e7280(CVampireBoss *this_ptr)

{
  CVampireBoss *pCVar1;
  CVampireBoss *pCVar2;
  CBoundingBox3D *pCVar3;
  BADSPACEBASE *in_ESP;
  CVampireBoss **in_stack_00000008;
  CBoundingBox3D aCStack_34 [2];
  
  pCVar3 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->getBoundingBox)
                     ((CDemonActor *)this_ptr,aCStack_34);
  pCVar1 = (CVampireBoss *)(((pCVar3->min).y + (pCVar3->max).y) * 0.5f);
  pCVar2 = (CVampireBoss *)(((pCVar3->min).z + (pCVar3->max).z) * 0.5f);
  if (in_stack_00000008 == &this_ptr) {
    return 1;
  }
  *in_stack_00000008 = (CVampireBoss *)(((pCVar3->min).x + (pCVar3->max).x) * 0.5f);
  in_stack_00000008[1] = pCVar1;
  in_stack_00000008[2] = pCVar2;
  return 1;
}

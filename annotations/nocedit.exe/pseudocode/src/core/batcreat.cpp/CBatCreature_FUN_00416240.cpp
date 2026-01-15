// Name: core_batcreat.cpp_CBatCreature_FUN_00416240
// Address: 00416240
// Address Range: [[00416240, 0041628f]]
// Convention: __cdecl
// Signature: int core_batcreat.cpp_CBatCreature_FUN_00416240(CBatCreature * this_ptr)

#include "nocturne.h"

int __cdecl core_batcreat_cpp_CBatCreature_FUN_00416240(CBatCreature *this_ptr)

{
  CVector3f *pCVar1;
  CVector3f *in_stack_00000008;
  CVector3f local_14;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base_enemy).base_character.model,&local_14,DAT_0082274c);
  if (in_stack_00000008 == pCVar1) {
    return 1;
  }
  in_stack_00000008->x = pCVar1->x;
  in_stack_00000008->y = pCVar1->y;
  in_stack_00000008->z = pCVar1->z;
  return 1;
}

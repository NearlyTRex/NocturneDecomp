// Name: core_werewolf.cpp_CWerewolf_FUN_005f1df0
// Address: 005f1df0
// Address Range: [[005f1df0, 005f1e3e]]
// Convention: __cdecl
// Signature: int core_werewolf.cpp_CWerewolf_FUN_005f1df0(CWerewolf * this_ptr)

#include "nocturne.h"

int __cdecl core_werewolf_cpp_CWerewolf_FUN_005f1df0(CWerewolf *this_ptr)

{
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  CVector3f *in_stack_00000008;
  CVector3f local_10;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base_enemy).base_character.model,&local_10,
                      *(int *)this_ptr->field4_0xbec0);
  if (in_stack_00000008 == pCVar1) {
    return 1;
  }
  in_stack_00000008->x = pCVar1->x;
  in_stack_00000008->y = pCVar1->y;
  in_stack_00000008->z = pCVar1->z;
  return 1;
}

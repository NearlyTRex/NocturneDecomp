// Name: core_charactr.cpp_CCharacter_FUN_0042c110
// Address: 0042c110
// Address Range: [[0042c110, 0042c176]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042c110(CCharacter * this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042c110(CCharacter *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  CVector3f *in_stack_00000008;
  CDemonActor *in_stack_00000010;
  char *in_stack_00000030;
  
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (&this_ptr->base_actor,(CVector3f *)&stack0xfffffff0,in_stack_00000008);
  iVar1 = (*((this_ptr->base_actor).vtable)->testCylinderCollision)
                    (&this_ptr->base_actor,(SCollisionReturnInfo *)&stack0xfffffff4,
                     in_stack_00000010);
  if (iVar1 == 0) {
    in_stack_00000030[4] = '\0';
    in_stack_00000030[5] = '\0';
    in_stack_00000030[6] = '\0';
    in_stack_00000030[7] = '\0';
    return 0;
  }
  (*(this_ptr->base_actor).vtable[1].playAmbientSoundWithVolume)
            (&this_ptr->base_actor,in_stack_00000030,(float)in_stack_00000010);
  return 1;
}

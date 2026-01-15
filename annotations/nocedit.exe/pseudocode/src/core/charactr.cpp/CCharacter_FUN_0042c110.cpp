// Name: core_charactr.cpp_CCharacter_FUN_0042c110
// Address: 0042c110
// Address Range: [[0042c110, 0042c176]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042c110(CCharacter * this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042c110(CCharacter *this_ptr)

{
  int iVar1;
  float unaff_EBX;
  CVector3f *in_stack_00000008;
  CDemonActor *in_stack_0000000c;
  char *in_stack_0000001c;
  float local_10;
  
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (&this_ptr->base_actor,(CVector3f *)&local_10,in_stack_00000008);
  iVar1 = (*((this_ptr->base_actor).vtable)->testCylinderCollision)
                    (&this_ptr->base_actor,(SCollisionReturnInfo *)&local_10,in_stack_0000000c);
  if (iVar1 == 0) {
    in_stack_0000001c[4] = '\0';
    in_stack_0000001c[5] = '\0';
    in_stack_0000001c[6] = '\0';
    in_stack_0000001c[7] = '\0';
    return 0;
  }
  local_10 = 6.130527e-39;
  (*(this_ptr->base_actor).vtable[1].playAmbientSoundWithVolume)
            (&this_ptr->base_actor,in_stack_0000001c,unaff_EBX);
  return 1;
}

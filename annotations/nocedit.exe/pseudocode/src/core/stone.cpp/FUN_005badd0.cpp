// Name: core_stone.cpp_FUN_005badd0
// Address: 005badd0
// Address Range: [[005badd0, 005bae09]]
// Convention: __cdecl
// Signature: void __cdecl core_stone_cpp_FUN_005badd0(void)

#include "nocturne.h"

/* Signature: byte actors_other_stone.cpp_FUN_005badd0(uint param_1, uint param_2)
    */

void __cdecl core_stone_cpp_FUN_005badd0(void)

{
  CBoxActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_boxactor_cpp_CBoxActor_getPropertyList_FUN_004226e0(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (in_stack_00000008,"Our destination",in_stack_00000004 + 1,1,
             "CActorDestination",(CDemonActor_CActorPropertyValidatorFunc *)0x0);
  return;
}

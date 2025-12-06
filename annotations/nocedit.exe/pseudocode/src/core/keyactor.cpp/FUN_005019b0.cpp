// Name: core_keyactor.cpp_FUN_005019b0
// Address: 005019b0
// Address Range: [[005019b0, 005019fd]]
// Convention: unknown
// Signature: undefined core_keyactor.cpp_FUN_005019b0()

#include "nocturne.h"

/* Signature: byte actors_other_keyactor.cpp_FUN_005019b0(uint param_1, byte
   param_2) */

CDemonActor * core_keyactor_cpp_FUN_005019b0(void)

{
  CDemonActor *ptr;
  void *ptr_00;
  CDemonActor *in_stack_00000004;
  byte in_stack_00000008;
  byte in_stack_0000000c;
  
  if ((in_stack_00000008 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(in_stack_00000004,&g_CKeyActorTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return in_stack_00000004;
  }
  ptr = core_actor_cpp_CDemonActor_dtor_FUN_00408a30(in_stack_00000004,1);
  if ((in_stack_0000000c & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}

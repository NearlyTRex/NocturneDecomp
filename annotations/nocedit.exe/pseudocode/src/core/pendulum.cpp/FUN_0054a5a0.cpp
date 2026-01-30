// Name: core_pendulum.cpp_FUN_0054a5a0
// Address: 0054a5a0
// Address Range: [[0054a5a0, 0054a5da]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_FUN_0054a5a0(void)

#include "nocturne.h"

/* Signature: byte actors_other_pendulum.cpp_FUN_0054a5a0(uint param_1, byte
   param_2, uint param_3) */

void __cdecl core_pendulum_cpp_FUN_0054a5a0(void)

{
  CDemonActor *pCVar1;
  CDemonActor *in_stack_00000004;
  char *in_stack_0000000c;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CPendulumClassInfo.name_hash);
  sprintf
            (in_stack_0000000c,"%f",(double)(pCVar1[2].unk4.z * (float)0.5));
  return;
}

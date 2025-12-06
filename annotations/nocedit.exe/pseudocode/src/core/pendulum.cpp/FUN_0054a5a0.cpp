// Name: core_pendulum.cpp_FUN_0054a5a0
// Address: 0054a5a0
// Address Range: [[0054a5a0, 0054a5da]]
// Convention: unknown
// Signature: undefined core_pendulum.cpp_FUN_0054a5a0()

#include "nocturne.h"

/* Signature: byte actors_other_pendulum.cpp_FUN_0054a5a0(uint param_1, byte
   param_2, uint param_3) */

void core_pendulum_cpp_FUN_0054a5a0(void)

{
  CDemonActor *pCVar1;
  CDemonActor *in_stack_00000004;
  char *in_stack_00000010;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CPendulumClassInfo.name_hash);
  crt_stdio_c_sprintf_FUN_005fdbd0
            (in_stack_00000010,"%f",
             (double)(pCVar1[2].field13_0xec.z * (float)0.5));
  return;
}

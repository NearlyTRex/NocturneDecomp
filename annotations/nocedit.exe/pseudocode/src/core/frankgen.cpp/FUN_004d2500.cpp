// Name: core_frankgen.cpp_FUN_004d2500
// Address: 004d2500
// Address Range: [[004d2500, 004d2557]]
// Convention: unknown
// Signature: undefined core_frankgen.cpp_FUN_004d2500()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_other_frankgen.cpp_FUN_004d2500(uint param_1, uint
   param_2) */

void core_frankgen_cpp_FUN_004d2500(void)

{
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  CActorPropertyList *in_stack_00000014;
  int aiStack_64 [24];
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  crt_stdio_c_sprintf_FUN_005fdbd0
            ((char *)aiStack_64,"Master frame (%0..%g)",(double)_DAT_0065e670);
  aiStack_64[0] = 0;
  aiStack_64[0] = core_frankgen_cpp_CFrankenstienMachine_findLeader_FUN_004d2330();
  aiStack_64[0] = aiStack_64[0] + 0x15c;
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000014);
  return;
}

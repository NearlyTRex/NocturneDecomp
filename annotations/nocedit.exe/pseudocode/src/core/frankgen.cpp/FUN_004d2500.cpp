// Name: core_frankgen.cpp_FUN_004d2500
// Address: 004d2500
// Address Range: [[004d2500, 004d2557]]
// Convention: unknown
// Signature: void core_frankgen_cpp_FUN_004d2500(void)

#include "nocturne.h"

void core_frankgen_cpp_FUN_004d2500(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  char local_68 [100];
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  crt_stdio_c_sprintf_FUN_005fdbd0(local_68,"Master frame (%0..%g)",(double)2300.0f);
  core_frankgen_cpp_CFrankenstienMachine_findLeader_FUN_004d2330();
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  return;
}

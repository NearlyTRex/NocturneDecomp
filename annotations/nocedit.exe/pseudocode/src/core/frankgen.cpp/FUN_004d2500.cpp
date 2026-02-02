// Name: core_frankgen.cpp_FUN_004d2500
// Address: 004d2500
// Address Range: [[004d2500, 004d2557]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_FUN_004d2500(void)

#include "nocturne.h"

void __cdecl core_frankgen_cpp_FUN_004d2500(void)

{
  CDemonActor *pCVar1;
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  CDemonActor_CActorPropertyValidatorFunc *callback;
  char local_68 [100];
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  sprintf(local_68,"Master frame (%0..%g)",(double)2300.0f);
  callback = (CDemonActor_CActorPropertyValidatorFunc *)0x0;
  pCVar1 = core_frankgen_cpp_CFrankenstienMachine_findLeader_FUN_004d2330();
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,local_68,(float *)(pCVar1[1].actor_name + 4),callback);
  return;
}

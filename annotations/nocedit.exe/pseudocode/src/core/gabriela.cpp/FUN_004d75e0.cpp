// Name: core_gabriela.cpp_FUN_004d75e0
// Address: 004d75e0
// Address Range: [[004d75e0, 004d760c]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_FUN_004d75e0(void)

#include "nocturne.h"

/* Signature: byte actors_hero_gabriella.cpp_FUN_004d75e0(uint param_1, uint
   param_2) */

void __cdecl core_gabriela_cpp_FUN_004d75e0(void)

{
  CFlame *pCVar1;
  CCharacter *in_stack_00000004;
  CDemonActor *in_stack_00000008;
  
  core_charactr_cpp_CCharacter_onActorDeleted_FUN_0042f8a0(in_stack_00000004,in_stack_00000008);
  if (*(CDemonActor **)(in_stack_00000004[2].field66_0x33cc[0x1c].on_event + 0x3c) !=
      in_stack_00000008) {
    return;
  }
  pCVar1 = in_stack_00000004[2].field66_0x33cc;
  pCVar1[0x1c].on_event[0x3c] = '\0';
  pCVar1[0x1c].on_event[0x3d] = '\0';
  pCVar1[0x1c].on_event[0x3e] = '\0';
  pCVar1[0x1c].on_event[0x3f] = '\0';
  return;
}

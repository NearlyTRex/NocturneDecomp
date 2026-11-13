// Name: core_doc.cpp_FUN_0044fec0
// Address: 0044fec0
// Address Range: [[0044fec0, 0044fed9] [0044fee0, 0044fee2] [0044ff06, 0044ff0b]]
// Convention: unknown
// Signature: undefined4 core_doc_cpp_FUN_0044fec0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint core_doc_cpp_FUN_0044fec0(void)

{
  CDemonActor *pCVar1;
  CDemonActor *in_stack_00000004;
  
  if (in_stack_00000004 == (CDemonActor *)0x0) {
    return 0;
  }
  switch(in_stack_00000004[1].particle_systems[0].stop_after_fade) {
  case 0:
  case 5:
  case 0xc:
    return 1;
  default:
    return 3;
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xd:
    break;
  }
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                     (in_stack_00000004,g_CMeleeClassInfo.name_hash);
  if ((pCVar1 != (CDemonActor *)0x0) && (pCVar1[2].particle_systems[0].fade_end != 0.0)) {
    return 5;
  }
  return 0;
}

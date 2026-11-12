// Name: core_doc.cpp_FUN_0044febe
// Address: 0044febe
// Address Range: [[0044febe, 0044fed9] [0044fee0, 0044fee2] [0044ff06, 0044ff0b]]
// Convention: unknown
// Signature: undefined4 core_doc_cpp_FUN_0044febe(CDemonActor *param_1)

#include "nocturne.h"

uint core_doc_cpp_FUN_0044febe(CDemonActor *param_1)

{
  CDemonActor *pCVar1;
  
  if (param_1 == (CDemonActor *)0x0) {
    return 0;
  }
  switch(param_1[1].particle_systems[0].stop_after_fade) {
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
  pCVar1 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c8f0(param_1,g_CMeleeClassInfo.name_hash);
  if ((pCVar1 != (CDemonActor *)0x0) && (pCVar1[2].particle_systems[0].fade_end != 0.0)) {
    return 5;
  }
  return 0;
}

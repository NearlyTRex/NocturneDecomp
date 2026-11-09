// Name: core_actor.cpp_FUN_00408800
// Address: 00408800
// Address Range: [[00408800, 0040882c]]
// Convention: unknown
// Signature: undefined4 core_actor_cpp_FUN_00408800(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_actor_cpp_FUN_00408800(uint param_1)

{
  _DAT_01d1d400 = "..\\core\\actor.cpp";
  _DAT_01d1d404 = 0x22b;
  core_main_c_FUN_005030e0("CDemonActor::getActorType called for %s.  Should never be called for this base class!",param_1);
  return 0;
}

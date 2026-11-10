// Name: core_actor.cpp_CDemonActor_getActorType_FUN_00408800
// Address: 00408800
// Address Range: [[00408800, 0040882c]]
// Convention: __cdecl
// Signature: CDemonActorType * __cdecl core_actor_cpp_CDemonActor_getActorType_FUN_00408800(CDemonActor *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActorType * __cdecl core_actor_cpp_CDemonActor_getActorType_FUN_00408800(CDemonActor *this_ptr)

{
  _DAT_01d1d400 = "..\\core\\actor.cpp";
  _DAT_01d1d404 = 0x22b;
  core_main_c_FUN_005030e0("CDemonActor::getActorType called for %s.  Should never be called for this base class!",this_ptr);
  return (CDemonActorType *)0x0;
}

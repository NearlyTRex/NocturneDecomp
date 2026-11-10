// Name: core_actor.cpp_CDemonActor_getActorType_FUN_00408840
// Address: 00408840
// Address Range: [[00408840, 0040886c]]
// Convention: __cdecl
// Signature: CDemonActorType * __cdecl core_actor_cpp_CDemonActor_getActorType_FUN_00408840(CDemonActor *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActorType * __cdecl core_actor_cpp_CDemonActor_getActorType_FUN_00408840(CDemonActor *this_ptr)

{
  _DAT_01d71de0 = "..\\core\\actor.cpp";
  _DAT_01d71de4 = 0x22b;
  core_main_c_FUN_004e4330("CDemonActor::getActorType called for %s.  Should never be called for this base class!",this_ptr);
  return (CDemonActorType *)0x0;
}

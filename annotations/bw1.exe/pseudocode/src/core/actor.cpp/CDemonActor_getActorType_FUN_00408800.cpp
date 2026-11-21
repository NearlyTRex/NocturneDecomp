// Name: core_actor.cpp_CDemonActor_getActorType_FUN_00408800
// Address: 00408800
// Address Range: [[00408800, 0040882c]]
// Convention: __cdecl
// Signature: CDemonActorType * __cdecl core_actor_cpp_CDemonActor_getActorType_FUN_00408800(CDemonActor *this_ptr)

#include "nocturne.h"

CDemonActorType * __cdecl core_actor_cpp_CDemonActor_getActorType_FUN_00408800(CDemonActor *this_ptr)

{
  g_CurrentFilename = "..\\core\\actor.cpp";
  g_CurrentLineNumber = 555;
  core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonActor::getActorType called for %s.  Should never be called for this base class!");
  return (CDemonActorType *)0x0;
}

// Name: core_actor.cpp_CDemonActor_getActorType_FUN_00408b50
// Address: 00408b50
// Address Range: [[00408b50, 00408b8e]]
// Convention: __cdecl
// Signature: CDemonActorType * __cdecl core_actor_cpp_CDemonActor_getActorType_FUN_00408b50(CDemonActor *this_ptr)

#include "nocturne.h"

CDemonActorType * __cdecl core_actor_cpp_CDemonActor_getActorType_FUN_00408b50(CDemonActor *this_ptr)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",550);
  g_CurrentLineNumber = 554;
  g_CurrentFilename = "..\\core\\actor.cpp";
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonActor::getActorType called.  Should never be called for this base class!");
  return (CDemonActorType *)0x0;
}

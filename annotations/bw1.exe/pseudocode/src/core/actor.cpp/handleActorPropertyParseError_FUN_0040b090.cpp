// Name: core_actor.cpp_handleActorPropertyParseError_FUN_0040b090
// Address: 0040b090
// Address Range: [[0040b090, 0040b107]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040b090(char *property_description,char *property_type)

#include "nocturne.h"

void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040b090(char *property_description,char *property_type)

{
  if (g_CurrentActorBeingProcessed != (CDemonActor *)0x0) {
    core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(g_CurrentActorBeingProcessed);
  }
  g_CurrentFilename = "..\\core\\actor.cpp";
  g_CurrentLineNumber = 2115;
  core_main_c_displayErrorAndQuit_FUN_005030e0("Error %sing actor property.\nActor name: %s\nActor type: %s\nProperty description: %s\nProperty type: %s\n");
  return;
}

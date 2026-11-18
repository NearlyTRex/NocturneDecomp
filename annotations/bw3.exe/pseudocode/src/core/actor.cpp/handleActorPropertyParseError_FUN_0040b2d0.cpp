// Name: core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0
// Address: 0040b2d0
// Address Range: [[0040b2d0, 0040b347]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0(char *property_description,char *property_type)

#include "nocturne.h"

void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0(char *property_description,char *property_type)

{
  if (g_CurrentActorBeingProcessed != (CDemonActor *)0x0) {
    core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870(g_CurrentActorBeingProcessed);
  }
  g_CHAR_PTR_01d71de0 = "..\\core\\actor.cpp";
  g_INT_01d71de4 = 0x85d;
  core_main_c_displayErrorAndQuit_FUN_004e4330("Error %sing actor property.\nActor name: %s\nActor type: %s\nProperty description: %s\nProperty type: %s\n");
  return;
}

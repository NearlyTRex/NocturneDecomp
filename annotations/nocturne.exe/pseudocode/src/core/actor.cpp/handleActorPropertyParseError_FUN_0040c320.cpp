// Name: core_actor.cpp_handleActorPropertyParseError_FUN_0040c320
// Address: 0040c320
// Address Range: [[0040c320, 0040c397]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040c320(char *property_description,char *property_type)

#include "nocturne.h"

void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040c320(char *property_description,char *property_type)

{
  if (DAT_00763e8c != (CDemonActor *)0x0) {
    core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(DAT_00763e8c);
  }
  g_CurrentFilename = "..\\core\\actor.cpp";
  g_CurrentLineNumber = 2043;
  core_main_c_displayErrorAndQuit_FUN_004c8440("Error %sing actor property.\nActor name: %s\nActor type: %s\nProperty description: %s\nProperty type: %s\n");
  return;
}

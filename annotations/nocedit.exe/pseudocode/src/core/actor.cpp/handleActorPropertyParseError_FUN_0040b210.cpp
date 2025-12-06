// Name: core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
// Address: 0040b210
// Address Range: [[0040b210, 0040b287]]
// Convention: __cdecl
// Signature: void core_actor.cpp_handleActorPropertyParseError_FUN_0040b210(char * property_description, char * property_type)

#include "nocturne.h"

void __cdecl
core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
          (char *property_description,char *property_type)

{
  CDemonActor *pCVar1;
  char *pcVar2;
  char *pcVar3;
  CDemonActor *pCVar4;
  char *pcVar5;
  
  pCVar1 = g_CurrentActorBeingProcessed;
  pcVar2 = "(unknown)";
  pCVar4 = (CDemonActor *)"(unknown)";
  if (g_CurrentActorBeingProcessed != (CDemonActor *)0x0) {
    pcVar2 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(g_CurrentActorBeingProcessed)
    ;
    pCVar4 = pCVar1;
  }
  pcVar5 = property_type;
  if (property_type == (char *)0x0) {
    pcVar5 = "(unknown)";
  }
  pcVar3 = "load";
  if (g_ActorReadingMode == 2) {
    pcVar3 = "save";
  }
  g_CurrentFilename = "..\\core\\actor.cpp";
  g_CurrentLineNumber = 0x7ec;
  core_main_c_displayErrorAndQuit_FUN_00506f10
            ("Error %sing actor property.\nActor name: %s\nActor type: %s\nProperty description: %s\nProperty type: %s\n",pcVar3,pCVar4,pcVar2,pcVar5,property_type);
  return;
}

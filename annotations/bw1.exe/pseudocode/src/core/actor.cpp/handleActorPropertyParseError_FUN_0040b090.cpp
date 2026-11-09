// Name: core_actor.cpp_handleActorPropertyParseError_FUN_0040b090
// Address: 0040b090
// Address Range: [[0040b090, 0040b107]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040b090(char *property_description,char *property_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040b090(char *property_description,char *property_type)

{
  CDemonActor *pCVar1;
  char *pcVar2;
  byte *puVar3;
  CDemonActor *pCVar4;
  
  pCVar1 = DAT_007c303c;
  pcVar2 = "(unknown)";
  pCVar4 = (CDemonActor *)"(unknown)";
  if (DAT_007c303c != (CDemonActor *)0x0) {
    pcVar2 = core_actor_cpp_FUN_00408830(DAT_007c303c);
    pCVar4 = pCVar1;
  }
  if (property_type == (char *)0x0) {
    property_type = "(unknown)";
  }
  puVar3 = &DAT_005d299d;
  if (DAT_007c3038 == 2) {
    puVar3 = &DAT_005d29a2;
  }
  _DAT_01d1d400 = "..\\core\\actor.cpp";
  _DAT_01d1d404 = 0x843;
  core_main_c_FUN_005030e0
            ("Error %sing actor property.\nActor name: %s\nActor type: %s\nProperty description: %s\nProperty type: %s\n",puVar3,pCVar4,pcVar2,property_type,
             property_description);
  return;
}

// Name: core_actor.cpp_handleActorPropertyParseError_FUN_0040b380
// Address: 0040b380
// Address Range: [[0040b380, 0040b3f7]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040b380(char *property_description,char *property_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040b380(char *property_description,char *property_type)

{
  char *pcVar1;
  char *pcVar2;
  byte *puVar3;
  char *pcVar4;
  
  pcVar1 = DAT_007bc03c;
  pcVar2 = "(unknown)";
  pcVar4 = "(unknown)";
  if (DAT_007bc03c != (char *)0x0) {
    pcVar2 = (char *)core_actor_cpp_FUN_00408a50(DAT_007bc03c);
    pcVar4 = pcVar1;
  }
  if (property_type == (char *)0x0) {
    property_type = "(unknown)";
  }
  puVar3 = &DAT_005caa3a;
  if (DAT_007bc038 == 2) {
    puVar3 = &DAT_005caa3f;
  }
  _DAT_01d046a0 = "..\\core\\actor.cpp";
  _DAT_01d046a4 = 0x85e;
  core_main_c_FUN_004e4500
            ("Error %sing actor property.\nActor name: %s\nActor type: %s\nProperty description: %s\nProperty type: %s\n",puVar3,pcVar4,pcVar2,property_type,
             property_description);
  return;
}

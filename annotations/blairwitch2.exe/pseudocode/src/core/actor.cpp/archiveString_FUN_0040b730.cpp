// Name: core_actor.cpp_archiveString_FUN_0040b730
// Address: 0040b730
// Address Range: [[0040b730, 0040b843]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveString_FUN_0040b730(char *string_buffer,char *property_type)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveString_FUN_0040b730(char *string_buffer,char *property_type)

{
  int iVar1;
  
  if (g_ActorReadingMode != 1) {
    _fprintf(g_ActorDataFile,"%s\"%s\"");
    core_actor_cpp_archiveDescription_FUN_0040b400("String",property_type);
    return;
  }
  do {
    iVar1 = _fgetc(g_ActorDataFile);
  } while ((g_CharacterClassificationTable[(byte)((char)iVar1 + 1)] & 2) != 0);
  if (iVar1 != 0x22) {
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b380("String",property_type);
  }
  iVar1 = _fgetc(g_ActorDataFile);
  if (iVar1 == 0x22) {
    *string_buffer = '\0';
  }
  else {
    _ungetc(iVar1,g_ActorDataFile);
    iVar1 = _fscanf(g_ActorDataFile,"%[^\"]");
    if (iVar1 != 1) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b380("String",property_type);
    }
    iVar1 = _fgetc(g_ActorDataFile);
    if (iVar1 != 0x22) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b380("String",property_type);
      core_actor_cpp_archiveDescription_FUN_0040b400("String",property_type);
      return;
    }
  }
  core_actor_cpp_archiveDescription_FUN_0040b400("String",property_type);
  return;
}

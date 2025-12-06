// Name: core_actor.cpp_serializeString_FUN_0040b5c0
// Address: 0040b5c0
// Address Range: [[0040b5c0, 0040b6d3]]
// Convention: __cdecl
// Signature: void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)

#include "nocturne.h"

void __cdecl core_actor_cpp_serializeString_FUN_0040b5c0(char **string_buffer,char *property_type)

{
  int iVar1;
  
  if (g_ActorReadingMode != 1) {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (g_ActorDataFile,"%s\"%s\"",g_PropertyNamePrefix,string_buffer);
    core_actor_cpp_serializeDescription_FUN_0040b290("String",property_type);
    return;
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(g_ActorDataFile);
  } while ((g_CharacterClassificationTable[(byte)((char)iVar1 + 1)] & 2U) != 0);
  if (iVar1 != 0x22) {
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b210("String",property_type);
  }
  iVar1 = crt_stdio_c_fgetc_FUN_005fe840(g_ActorDataFile);
  if (iVar1 == 0x22) {
    *(byte *)string_buffer = 0;
  }
  else {
    crt_stdio_c_fputc_FUN_005fea10(iVar1,g_ActorDataFile);
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile,"%[^\"]",string_buffer);
    if (iVar1 != 1) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210("String",property_type);
    }
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(g_ActorDataFile);
    if (iVar1 != 0x22) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210("String",property_type);
      core_actor_cpp_serializeDescription_FUN_0040b290("String",property_type);
      return;
    }
  }
  core_actor_cpp_serializeDescription_FUN_0040b290("String",property_type);
  return;
}

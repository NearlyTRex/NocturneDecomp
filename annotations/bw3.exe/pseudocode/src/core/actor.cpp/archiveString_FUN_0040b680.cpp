// Name: core_actor.cpp_archiveString_FUN_0040b680
// Address: 0040b680
// Address Range: [[0040b680, 0040b793]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveString_FUN_0040b680(char *string_buffer,char *property_type)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveString_FUN_0040b680(char *string_buffer,char *property_type)

{
  int iVar1;
  
  if (DAT_007df9b8 != 1) {
    FUN_005a3140(DAT_007df9b4,"%s\"%s\"",&DAT_005f0990,string_buffer);
    core_actor_cpp_archiveDescription_FUN_0040b350("String",property_type);
    return;
  }
  do {
    iVar1 = _fgetc(DAT_007df9b4);
  } while (((&DAT_006074b8)[(byte)((char)iVar1 + 1)] & 2) != 0);
  if (iVar1 != 0x22) {
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0("String",property_type);
  }
  iVar1 = _fgetc(DAT_007df9b4);
  if (iVar1 == 0x22) {
    *string_buffer = '\0';
  }
  else {
    _ungetc(iVar1,DAT_007df9b4);
    iVar1 = _fscanf(DAT_007df9b4,"%[^\"]",string_buffer);
    if (iVar1 != 1) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0("String",property_type);
    }
    iVar1 = _fgetc(DAT_007df9b4);
    if (iVar1 != 0x22) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0("String",property_type);
      core_actor_cpp_archiveDescription_FUN_0040b350("String",property_type);
      return;
    }
  }
  core_actor_cpp_archiveDescription_FUN_0040b350("String",property_type);
  return;
}

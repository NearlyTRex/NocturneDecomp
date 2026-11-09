// Name: core_actor.cpp_archiveString_FUN_0040b440
// Address: 0040b440
// Address Range: [[0040b440, 0040b553]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveString_FUN_0040b440(char *string_buffer,char *property_type)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveString_FUN_0040b440(char *string_buffer,char *property_type)

{
  int iVar1;
  
  if (DAT_007c3038 != 1) {
    FUN_005c03c0(DAT_007c3034,"%s\"%s\"",&DAT_006106c0,string_buffer);
    core_actor_cpp_archiveDescription_FUN_0040b110("String",property_type);
    return;
  }
  do {
    iVar1 = _fgetc(DAT_007c3034);
  } while (((&DAT_00626114)[(byte)((char)iVar1 + 1)] & 2) != 0);
  if (iVar1 != 0x22) {
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b090("String",property_type);
  }
  iVar1 = _fgetc(DAT_007c3034);
  if (iVar1 == 0x22) {
    *string_buffer = '\0';
  }
  else {
    _ungetc(iVar1,DAT_007c3034);
    iVar1 = _fscanf(DAT_007c3034,"%[^\"]",string_buffer);
    if (iVar1 != 1) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b090("String",property_type);
    }
    iVar1 = _fgetc(DAT_007c3034);
    if (iVar1 != 0x22) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b090("String",property_type);
      core_actor_cpp_archiveDescription_FUN_0040b110("String",property_type);
      return;
    }
  }
  core_actor_cpp_archiveDescription_FUN_0040b110("String",property_type);
  return;
}

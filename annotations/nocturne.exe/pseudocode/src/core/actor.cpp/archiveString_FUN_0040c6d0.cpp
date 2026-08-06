// Name: core_actor.cpp_archiveString_FUN_0040c6d0
// Address: 0040c6d0
// Address Range: [[0040c6d0, 0040c7e3]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveString_FUN_0040c6d0(char *string_buffer,char *property_type)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveString_FUN_0040c6d0(char *string_buffer,char *property_type)

{
  int iVar1;
  
  if (DAT_00763e88 != 1) {
    _fprintf(DAT_00763e84,"%s\"%s\"",&DAT_005acc90,string_buffer);
    core_actor_cpp_archiveDescription_FUN_0040c3a0("String",property_type);
    return;
  }
  do {
    iVar1 = _fgetc(DAT_00763e84);
  } while (((&DAT_005c168c)[(byte)((char)iVar1 + 1)] & 2) != 0);
  if (iVar1 != 0x22) {
    core_actor_cpp_handleActorPropertyParseError_FUN_0040c320("String",property_type);
  }
  iVar1 = _fgetc(DAT_00763e84);
  if (iVar1 == 0x22) {
    *string_buffer = '\0';
  }
  else {
    _ungetc(iVar1,DAT_00763e84);
    iVar1 = _fscanf(DAT_00763e84,"%[^\"]",string_buffer);
    if (iVar1 != 1) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040c320("String",property_type);
    }
    iVar1 = _fgetc(DAT_00763e84);
    if (iVar1 != 0x22) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040c320("String",property_type);
      core_actor_cpp_archiveDescription_FUN_0040c3a0("String",property_type);
      return;
    }
  }
  core_actor_cpp_archiveDescription_FUN_0040c3a0("String",property_type);
  return;
}

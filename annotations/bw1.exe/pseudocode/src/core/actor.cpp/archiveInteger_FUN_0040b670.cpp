// Name: core_actor.cpp_archiveInteger_FUN_0040b670
// Address: 0040b670
// Address Range: [[0040b670, 0040b6e3]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveInteger_FUN_0040b670(int *int_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveInteger_FUN_0040b670(int *int_ptr,char *property_name)

{
  int iVar1;
  
  if (g_ActorReadingMode == 1) {
    iVar1 = _fscanf(g_ActorDataFile,"%d");
    if (iVar1 != 1) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b090
                ("Integer value",property_name);
    }
  }
  else {
    _fprintf(g_ActorDataFile,"%s%d");
  }
  core_actor_cpp_archiveDescription_FUN_0040b110("Integer value",property_name);
  return;
}

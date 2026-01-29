// Name: core_actor.cpp_serializeInteger_FUN_0040b7f0
// Address: 0040b7f0
// Address Range: [[0040b7f0, 0040b863]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_serializeInteger_FUN_0040b7f0(int *int_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_serializeInteger_FUN_0040b7f0(int *int_ptr,char *property_name)

{
  int iVar1;
  
  if (g_ActorReadingMode == 1) {
    iVar1 = _fscanf(g_ActorDataFile,"%d",int_ptr);
    if (iVar1 != 1) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                ("Integer value",property_name);
    }
  }
  else {
    _fprintf(g_ActorDataFile,"%s%d",g_PropertyNamePrefix,*int_ptr);
  }
  core_actor_cpp_serializeDescription_FUN_0040b290("Integer value",property_name);
  return;
}

// Name: core_actor.cpp_archiveFloat_FUN_0040b8e0
// Address: 0040b8e0
// Address Range: [[0040b8e0, 0040b956]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveFloat_FUN_0040b8e0(float *float_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveFloat_FUN_0040b8e0(float *float_ptr,char *property_name)

{
  int iVar1;
  
  if (g_ActorReadingMode == 1) {
    iVar1 = _fscanf(g_ActorDataFile,"%f");
    if (iVar1 != 1) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
                ("Floating point value",property_name);
    }
  }
  else {
    _fprintf(g_ActorDataFile,"%s%g");
  }
  core_actor_cpp_archiveDescription_FUN_0040b400("Floating point value",property_name);
  return;
}

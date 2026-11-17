// Name: core_actor.cpp_archiveOrientation_FUN_0040b550
// Address: 0040b550
// Address Range: [[0040b550, 0040b5e0]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveOrientation_FUN_0040b550(COrientation *orient_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveOrientation_FUN_0040b550(COrientation *orient_ptr,char *property_name)

{
  int iVar1;
  
  if (g_ActorReadingMode == 1) {
    iVar1 = _fscanf(g_ActorDataFile,"%f,%f,%f");
    if (iVar1 != 3) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
                ("Euler PBH orientation",property_name);
    }
  }
  else {
    _fprintf(g_ActorDataFile,"%s%g,%g,%g");
  }
  core_actor_cpp_archiveDescription_FUN_0040b400("Euler PBH orientation",property_name);
  return;
}

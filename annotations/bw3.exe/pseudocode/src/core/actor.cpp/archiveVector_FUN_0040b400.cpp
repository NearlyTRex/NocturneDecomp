// Name: core_actor.cpp_archiveVector_FUN_0040b400
// Address: 0040b400
// Address Range: [[0040b400, 0040b490]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveVector_FUN_0040b400(CVector3f *vector_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveVector_FUN_0040b400(CVector3f *vector_ptr,char *property_name)

{
  int iVar1;
  
  if (g_ActorReadingMode == 1) {
    iVar1 = _fscanf(g_ActorDataFile,"%f,%f,%f");
    if (iVar1 != 3) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0
                ("3D vector",property_name);
    }
  }
  else {
    _fprintf(g_ActorDataFile,"%s%g,%g,%g");
  }
  core_actor_cpp_archiveDescription_FUN_0040b350("3D vector",property_name);
  return;
}

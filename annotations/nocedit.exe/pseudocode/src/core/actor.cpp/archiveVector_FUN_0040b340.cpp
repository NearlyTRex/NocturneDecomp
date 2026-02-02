// Name: core_actor.cpp_archiveVector_FUN_0040b340
// Address: 0040b340
// Address Range: [[0040b340, 0040b3d0]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveVector_FUN_0040b340(CVector3f *vector_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveVector_FUN_0040b340(CVector3f *vector_ptr,char *property_name)

{
  int iVar1;
  
  if (g_ActorReadingMode == 1) {
    iVar1 = _fscanf(g_ActorDataFile,"%f,%f,%f");
    if (iVar1 != 3) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210("3D vector",property_name);
    }
  }
  else {
    _fprintf(g_ActorDataFile,"%s%g,%g,%g",g_PropertyNamePrefix,(double)vector_ptr->x,
               (double)vector_ptr->y,(double)vector_ptr->z);
  }
  core_actor_cpp_archiveDescription_FUN_0040b290("3D vector",property_name);
  return;
}

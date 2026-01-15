// Name: core_actor.cpp_serializeVector_FUN_0040b340
// Address: 0040b340
// Address Range: [[0040b340, 0040b3d0]]
// Convention: __cdecl
// Signature: void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_serializeVector_FUN_0040b340(CVector3f *vector_ptr,char *property_name)

{
  int iVar1;
  
  if (g_ActorReadingMode == 1) {
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile,"%f,%f,%f");
    if (iVar1 != 3) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210("3D vector",property_name);
    }
  }
  else {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (g_ActorDataFile,"%s%g,%g,%g",g_PropertyNamePrefix,(double)vector_ptr->x,
               (double)vector_ptr->y,(double)vector_ptr->z);
  }
  core_actor_cpp_serializeDescription_FUN_0040b290("3D vector",property_name);
  return;
}

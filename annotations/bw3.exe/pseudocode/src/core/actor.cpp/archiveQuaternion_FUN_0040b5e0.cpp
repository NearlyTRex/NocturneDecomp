// Name: core_actor.cpp_archiveQuaternion_FUN_0040b5e0
// Address: 0040b5e0
// Address Range: [[0040b5e0, 0040b67d]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveQuaternion_FUN_0040b5e0(CQuaternion4f *quat_ptr,char *property_type)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveQuaternion_FUN_0040b5e0(CQuaternion4f *quat_ptr,char *property_type)

{
  int iVar1;
  
  if (g_ActorReadingMode == 1) {
    iVar1 = _fscanf(g_ActorDataFile,"%f,%f,%f,%f");
    if (iVar1 != 4) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0("Quaternion",property_type)
      ;
    }
  }
  else {
    _fprintf(g_ActorDataFile,"%s%g,%g,%g,%g");
  }
  core_actor_cpp_archiveDescription_FUN_0040b350("Quaternion",property_type);
  return;
}

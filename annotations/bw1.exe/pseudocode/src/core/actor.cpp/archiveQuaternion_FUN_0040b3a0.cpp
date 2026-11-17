// Name: core_actor.cpp_archiveQuaternion_FUN_0040b3a0
// Address: 0040b3a0
// Address Range: [[0040b3a0, 0040b43d]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveQuaternion_FUN_0040b3a0(CQuaternion4f *quat_ptr,char *property_type)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveQuaternion_FUN_0040b3a0(CQuaternion4f *quat_ptr,char *property_type)

{
  int iVar1;
  
  if (g_ActorReadingMode == 1) {
    iVar1 = _fscanf(g_ActorDataFile,"%f,%f,%f,%f");
    if (iVar1 != 4) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b090("Quaternion",property_type)
      ;
    }
  }
  else {
    _fprintf(g_ActorDataFile,"%s%g,%g,%g,%g");
  }
  core_actor_cpp_archiveDescription_FUN_0040b110("Quaternion",property_type);
  return;
}

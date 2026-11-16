// Name: core_actor.cpp_archiveQuaternion_FUN_0040b690
// Address: 0040b690
// Address Range: [[0040b690, 0040b72d]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveQuaternion_FUN_0040b690(CQuaternion4f *quat_ptr,char *property_type)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveQuaternion_FUN_0040b690(CQuaternion4f *quat_ptr,char *property_type)

{
  int iVar1;
  
  if (DAT_007bc038 == 1) {
    iVar1 = _fscanf(DAT_007bc034,"%f,%f,%f,%f");
    if (iVar1 != 4) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b380("Quaternion",property_type)
      ;
    }
  }
  else {
    _fprintf(DAT_007bc034,"%s%g,%g,%g,%g");
  }
  core_actor_cpp_archiveDescription_FUN_0040b400("Quaternion",property_type);
  return;
}

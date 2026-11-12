// Name: core_actor.cpp_archiveQuaternion_FUN_0040b5e0
// Address: 0040b5e0
// Address Range: [[0040b5e0, 0040b67d]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveQuaternion_FUN_0040b5e0(CQuaternion4f *quat_ptr,char *property_type)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveQuaternion_FUN_0040b5e0(CQuaternion4f *quat_ptr,char *property_type)

{
  int iVar1;
  
  if (DAT_007df9b8 == 1) {
    iVar1 = _fscanf(DAT_007df9b4,"%f,%f,%f,%f");
    if (iVar1 != 4) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0("Quaternion",property_type)
      ;
    }
  }
  else {
    FUN_005a3140
              (DAT_007df9b4,"%s%g,%g,%g,%g",&DAT_005f0990,(double)quat_ptr->w,
               (double)quat_ptr->x,(double)quat_ptr->y,(double)quat_ptr->z);
  }
  core_actor_cpp_archiveDescription_FUN_0040b350("Quaternion",property_type);
  return;
}

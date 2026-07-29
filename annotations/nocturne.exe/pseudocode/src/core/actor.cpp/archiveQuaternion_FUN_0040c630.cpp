// Name: core_actor.cpp_archiveQuaternion_FUN_0040c630
// Address: 0040c630
// Address Range: [[0040c630, 0040c6cd]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveQuaternion_FUN_0040c630(CQuaternion4f *quat_ptr,char *property_type)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveQuaternion_FUN_0040c630(CQuaternion4f *quat_ptr,char *property_type)

{
  int iVar1;
  
  if (DAT_00763e88 == 1) {
    iVar1 = _fscanf(DAT_00763e84,"%f,%f,%f,%f");
    if (iVar1 != 4) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040c320("Quaternion",property_type)
      ;
    }
  }
  else {
    _fprintf(DAT_00763e84,"%s%g,%g,%g,%g",&DAT_005acc90,(double)quat_ptr->w,
               (double)quat_ptr->x,(double)quat_ptr->y,(double)quat_ptr->z);
  }
  core_actor_cpp_archiveDescription_FUN_0040c3a0("Quaternion",property_type);
  return;
}

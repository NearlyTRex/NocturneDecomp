// Name: core_actor.cpp_serializeQuaternion_FUN_0040b520
// Address: 0040b520
// Address Range: [[0040b520, 0040b5bd]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_serializeQuaternion_FUN_0040b520(CQuaternion4f *quat_ptr,char *property_type)

#include "nocturne.h"

void __cdecl
core_actor_cpp_serializeQuaternion_FUN_0040b520(CQuaternion4f *quat_ptr,char *property_type)

{
  int iVar1;
  
  if (g_ActorReadingMode == 1) {
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                      (g_ActorDataFile,"%f,%f,%f,%f",quat_ptr,&quat_ptr->x,&quat_ptr->y);
    if (iVar1 != 4) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210("Quaternion",property_type)
      ;
    }
  }
  else {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (g_ActorDataFile,"%s%g,%g,%g,%g",g_PropertyNamePrefix,(double)quat_ptr->w,
               (double)quat_ptr->x,(double)quat_ptr->y,(double)quat_ptr->z);
  }
  core_actor_cpp_serializeDescription_FUN_0040b290("Quaternion",property_type);
  return;
}

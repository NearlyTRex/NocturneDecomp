// Name: core_actor.cpp_archiveVector_FUN_0040b1c0
// Address: 0040b1c0
// Address Range: [[0040b1c0, 0040b250]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveVector_FUN_0040b1c0(CVector3f *vector_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveVector_FUN_0040b1c0(CVector3f *vector_ptr,char *property_name)

{
  int iVar1;
  
  if (DAT_007c3038 == 1) {
    iVar1 = _fscanf(DAT_007c3034,"%f,%f,%f");
    if (iVar1 != 3) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b090
                ("3D vector",property_name);
    }
  }
  else {
    FUN_005c03c0
              (DAT_007c3034,"%s%g,%g,%g",&DAT_006106c0,(double)vector_ptr->x,
               (double)vector_ptr->y,(double)vector_ptr->z);
  }
  core_actor_cpp_archiveDescription_FUN_0040b110("3D vector",property_name);
  return;
}

// Name: core_actor.cpp_archiveVector_FUN_0040b4b0
// Address: 0040b4b0
// Address Range: [[0040b4b0, 0040b540]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveVector_FUN_0040b4b0(CVector3f *vector_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveVector_FUN_0040b4b0(CVector3f *vector_ptr,char *property_name)

{
  int iVar1;
  
  if (DAT_007bc038 == 1) {
    iVar1 = _fscanf(DAT_007bc034,"%f,%f,%f");
    if (iVar1 != 3) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
                ("3D vector",property_name);
    }
  }
  else {
    FUN_005b8010
              (DAT_007bc034,"%s%g,%g,%g",&DAT_00609590,(double)vector_ptr->x,
               (double)vector_ptr->y,(double)vector_ptr->z);
  }
  core_actor_cpp_archiveDescription_FUN_0040b400("3D vector",property_name);
  return;
}

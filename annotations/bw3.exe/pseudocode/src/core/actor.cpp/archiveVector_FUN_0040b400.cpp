// Name: core_actor.cpp_archiveVector_FUN_0040b400
// Address: 0040b400
// Address Range: [[0040b400, 0040b490]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveVector_FUN_0040b400(CVector3f *vector_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveVector_FUN_0040b400(CVector3f *vector_ptr,char *property_name)

{
  int iVar1;
  
  if (DAT_007df9b8 == 1) {
    iVar1 = _fscanf(DAT_007df9b4,"%f,%f,%f");
    if (iVar1 != 3) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0
                ("3D vector",property_name);
    }
  }
  else {
    FUN_005a3140
              (DAT_007df9b4,"%s%g,%g,%g",&DAT_005f0990,(double)vector_ptr->x,
               (double)vector_ptr->y,(double)vector_ptr->z);
  }
  core_actor_cpp_archiveDescription_FUN_0040b350("3D vector",property_name);
  return;
}

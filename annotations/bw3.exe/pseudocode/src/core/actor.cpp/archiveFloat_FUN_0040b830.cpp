// Name: core_actor.cpp_archiveFloat_FUN_0040b830
// Address: 0040b830
// Address Range: [[0040b830, 0040b8a6]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveFloat_FUN_0040b830(float *float_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveFloat_FUN_0040b830(float *float_ptr,char *property_name)

{
  int iVar1;
  
  if (DAT_007df9b8 == 1) {
    iVar1 = _fscanf(DAT_007df9b4,&DAT_005b5aed);
    if (iVar1 != 1) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0
                ("Floating point value",property_name);
    }
  }
  else {
    FUN_005a3140(DAT_007df9b4,&DAT_005b5af0,&DAT_005f0990,(double)*float_ptr);
  }
  core_actor_cpp_archiveDescription_FUN_0040b350("Floating point value",property_name);
  return;
}

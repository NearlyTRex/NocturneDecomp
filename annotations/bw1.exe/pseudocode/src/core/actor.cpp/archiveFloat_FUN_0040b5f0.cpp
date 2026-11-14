// Name: core_actor.cpp_archiveFloat_FUN_0040b5f0
// Address: 0040b5f0
// Address Range: [[0040b5f0, 0040b666]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveFloat_FUN_0040b5f0(float *float_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveFloat_FUN_0040b5f0(float *float_ptr,char *property_name)

{
  int iVar1;
  
  if (DAT_007c3038 == 1) {
    iVar1 = _fscanf(DAT_007c3034,&DAT_005d2aa1);
    if (iVar1 != 1) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b090
                ("Floating point value",property_name);
    }
  }
  else {
    FUN_005c03c0(DAT_007c3034,&DAT_005d2aa4,&DAT_006106c0,(double)*float_ptr);
  }
  core_actor_cpp_archiveDescription_FUN_0040b110("Floating point value",property_name);
  return;
}

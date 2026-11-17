// Name: core_actor.cpp_archiveFloat_FUN_0040b830
// Address: 0040b830
// Address Range: [[0040b830, 0040b8a6]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveFloat_FUN_0040b830(float *float_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveFloat_FUN_0040b830(float *float_ptr,char *property_name)

{
  int iVar1;
  
  if (g_INT_007df9b8 == 1) {
    iVar1 = _fscanf(g_FILE_PTR_007df9b4,"%f");
    if (iVar1 != 1) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0
                ("Floating point value",property_name);
    }
  }
  else {
    _fprintf(g_FILE_PTR_007df9b4,"%s%g");
  }
  core_actor_cpp_archiveDescription_FUN_0040b350("Floating point value",property_name);
  return;
}

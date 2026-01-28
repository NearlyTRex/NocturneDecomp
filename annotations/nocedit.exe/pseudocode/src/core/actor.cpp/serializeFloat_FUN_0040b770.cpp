// Name: core_actor.cpp_serializeFloat_FUN_0040b770
// Address: 0040b770
// Address Range: [[0040b770, 0040b7e6]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_serializeFloat_FUN_0040b770(float *float_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_serializeFloat_FUN_0040b770(float *float_ptr,char *property_name)

{
  int iVar1;
  
  if (g_ActorReadingMode == 1) {
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile,"%f");
    if (iVar1 != 1) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                ("Floating point value",property_name);
    }
  }
  else {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (g_ActorDataFile,"%s%g",g_PropertyNamePrefix,(double)*float_ptr);
  }
  core_actor_cpp_serializeDescription_FUN_0040b290("Floating point value",property_name);
  return;
}

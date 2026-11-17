// Name: core_actor.cpp_archiveFloat_FUN_0040c880
// Address: 0040c880
// Address Range: [[0040c880, 0040c8f6]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveFloat_FUN_0040c880(float *float_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveFloat_FUN_0040c880(float *float_ptr,char *property_name)

{
  int iVar1;
  
  if (g_INT_00763e88 == 1) {
    iVar1 = _fscanf(g_FILE_PTR_00763e84,"%f");
    if (iVar1 != 1) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040c320
                ("Floating point value",property_name);
    }
  }
  else {
    _fprintf(g_FILE_PTR_00763e84,"%s%g",g_CHAR_ARRAY_005acc90,(double)*float_ptr);
  }
  core_actor_cpp_archiveDescription_FUN_0040c3a0("Floating point value",property_name);
  return;
}

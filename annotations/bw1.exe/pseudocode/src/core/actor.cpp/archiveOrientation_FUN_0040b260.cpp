// Name: core_actor.cpp_archiveOrientation_FUN_0040b260
// Address: 0040b260
// Address Range: [[0040b260, 0040b2f0]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveOrientation_FUN_0040b260(COrientation *orient_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveOrientation_FUN_0040b260(COrientation *orient_ptr,char *property_name)

{
  int iVar1;
  
  if (g_INT_007c3038 == 1) {
    iVar1 = _fscanf(g_FILE_PTR_007c3034,"%f,%f,%f");
    if (iVar1 != 3) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b090
                ("Euler PBH orientation",property_name);
    }
  }
  else {
    _fprintf(g_FILE_PTR_007c3034,"%s%g,%g,%g");
  }
  core_actor_cpp_archiveDescription_FUN_0040b110("Euler PBH orientation",property_name);
  return;
}

// Name: core_actor.cpp_archiveOrientation_FUN_0040b4a0
// Address: 0040b4a0
// Address Range: [[0040b4a0, 0040b530]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveOrientation_FUN_0040b4a0(COrientation *orient_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveOrientation_FUN_0040b4a0(COrientation *orient_ptr,char *property_name)

{
  int iVar1;
  
  if (g_INT_007df9b8 == 1) {
    iVar1 = _fscanf(g_FILE_PTR_007df9b4,"%f,%f,%f");
    if (iVar1 != 3) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0
                ("Euler PBH orientation",property_name);
    }
  }
  else {
    _fprintf(g_FILE_PTR_007df9b4,"%s%g,%g,%g");
  }
  core_actor_cpp_archiveDescription_FUN_0040b350("Euler PBH orientation",property_name);
  return;
}

// Name: core_actor.cpp_archiveInteger_FUN_0040b8b0
// Address: 0040b8b0
// Address Range: [[0040b8b0, 0040b923]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveInteger_FUN_0040b8b0(int *int_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveInteger_FUN_0040b8b0(int *int_ptr,char *property_name)

{
  int iVar1;
  
  if (DAT_007df9b8 == 1) {
    iVar1 = _fscanf(DAT_007df9b4,&DAT_005b5af5);
    if (iVar1 != 1) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0
                ("Integer value",property_name);
    }
  }
  else {
    FUN_005a3140(DAT_007df9b4,&DAT_005b5af8,&DAT_005f0990,*int_ptr);
  }
  core_actor_cpp_archiveDescription_FUN_0040b350("Integer value",property_name);
  return;
}

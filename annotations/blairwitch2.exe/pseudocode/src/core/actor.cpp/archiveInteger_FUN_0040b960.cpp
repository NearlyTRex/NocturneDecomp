// Name: core_actor.cpp_archiveInteger_FUN_0040b960
// Address: 0040b960
// Address Range: [[0040b960, 0040b9d3]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveInteger_FUN_0040b960(int *int_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveInteger_FUN_0040b960(int *int_ptr,char *property_name)

{
  int iVar1;
  
  if (DAT_007bc038 == 1) {
    iVar1 = _fscanf(DAT_007bc034,&DAT_005cab46);
    if (iVar1 != 1) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
                ("Integer value",property_name);
    }
  }
  else {
    FUN_005b8010(DAT_007bc034,&DAT_005cab49,&DAT_00609590,*int_ptr);
  }
  core_actor_cpp_archiveDescription_FUN_0040b400("Integer value",property_name);
  return;
}

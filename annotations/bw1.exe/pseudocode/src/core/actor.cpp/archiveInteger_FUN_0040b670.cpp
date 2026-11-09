// Name: core_actor.cpp_archiveInteger_FUN_0040b670
// Address: 0040b670
// Address Range: [[0040b670, 0040b6e3]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveInteger_FUN_0040b670(int *int_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveInteger_FUN_0040b670(int *int_ptr,char *property_name)

{
  int iVar1;
  
  if (DAT_007c3038 == 1) {
    iVar1 = _fscanf(DAT_007c3034,&DAT_005d2aa9,int_ptr);
    if (iVar1 != 1) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b090
                ("Integer value",property_name);
    }
  }
  else {
    FUN_005c03c0(DAT_007c3034,&DAT_005d2aac,&DAT_006106c0,*int_ptr);
  }
  core_actor_cpp_archiveDescription_FUN_0040b110("Integer value",property_name);
  return;
}

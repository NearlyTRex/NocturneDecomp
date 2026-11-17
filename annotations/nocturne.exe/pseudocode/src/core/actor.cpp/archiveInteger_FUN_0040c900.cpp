// Name: core_actor.cpp_archiveInteger_FUN_0040c900
// Address: 0040c900
// Address Range: [[0040c900, 0040c973]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveInteger_FUN_0040c900(int *int_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveInteger_FUN_0040c900(int *int_ptr,char *property_name)

{
  int iVar1;
  
  if (g_ActorReadingMode == 1) {
    iVar1 = _fscanf(g_ActorDataFile,"%d",int_ptr);
    if (iVar1 != 1) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040c320
                ("Integer value",property_name);
    }
  }
  else {
    _fprintf(g_ActorDataFile,"%s%d",g_PropertyNamePrefix,*int_ptr);
  }
  core_actor_cpp_archiveDescription_FUN_0040c3a0("Integer value",property_name);
  return;
}

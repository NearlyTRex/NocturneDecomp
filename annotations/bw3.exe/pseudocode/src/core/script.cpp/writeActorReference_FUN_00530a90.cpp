// Name: core_script.cpp_writeActorReference_FUN_00530a90
// Address: 00530a90
// Address Range: [[00530a90, 00530ac1]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_writeActorReference_FUN_00530a90(_FILE *file_handle,CDemonActor **actor)

#include "nocturne.h"

void __cdecl core_script_cpp_writeActorReference_FUN_00530a90(_FILE *file_handle,CDemonActor **actor)

{
  if (*actor == (CDemonActor *)0x0) {
    FUN_005a3140(file_handle,"\"%s\"\n","(none)");
    return;
  }
  FUN_005a3140(file_handle,"\"%s\"\n",*actor);
  return;
}

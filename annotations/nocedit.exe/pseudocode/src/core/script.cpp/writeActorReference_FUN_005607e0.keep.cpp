// Name: core_script.cpp_writeActorReference_FUN_005607e0
// Address: 005607e0
// MANUAL RECONSTRUCTION
// Address Range: [[005607e0, 00560811]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_writeActorReference_FUN_005607e0(_FILE *file_handle,CDemonActor **actor)

#include "nocturne.h"

void __cdecl core_script_cpp_writeActorReference_FUN_005607e0(_FILE *file_handle,CDemonActor **actor)

{
  if (*actor == (CDemonActor *)0x0) {
    _fprintf(file_handle,"\"%s\"\n","(none)");
    return;
  }
  _fprintf(file_handle,"\"%s\"\n",(*actor)->actor_name);
  return;
}

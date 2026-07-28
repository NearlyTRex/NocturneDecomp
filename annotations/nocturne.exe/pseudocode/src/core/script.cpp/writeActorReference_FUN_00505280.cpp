// Name: core_script.cpp_writeActorReference_FUN_00505280
// Address: 00505280
// Address Range: [[00505280, 005052b1]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_writeActorReference_FUN_00505280(_FILE *file_handle,CDemonActor **actor)

#include "nocturne.h"

void __cdecl core_script_cpp_writeActorReference_FUN_00505280(_FILE *file_handle,CDemonActor **actor)

{
  if (*actor == (CDemonActor *)0x0) {
    _fprintf(file_handle,"\"%s\"\n","(none)");
    return;
  }
  _fprintf(file_handle,"\"%s\"\n",*actor);
  return;
}

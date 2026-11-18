// Name: core_script.cpp_writeActorReference_FUN_0054b3a0
// Address: 0054b3a0
// Address Range: [[0054b3a0, 0054b3d1]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_writeActorReference_FUN_0054b3a0(_FILE *file_handle,CDemonActor **actor)

#include "nocturne.h"

void __cdecl core_script_cpp_writeActorReference_FUN_0054b3a0(_FILE *file_handle,CDemonActor **actor)

{
  if (*actor == (CDemonActor *)0x0) {
    _fprintf(file_handle,"\"%s\"\n");
    return;
  }
  _fprintf(file_handle,"\"%s\"\n");
  return;
}

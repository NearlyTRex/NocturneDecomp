// Name: core_script.cpp_writeActorReference_FUN_0052a090
// Address: 0052a090
// Address Range: [[0052a090, 0052a0c1]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_writeActorReference_FUN_0052a090(_FILE *file_handle,CDemonActor **actor)

#include "nocturne.h"

void __cdecl core_script_cpp_writeActorReference_FUN_0052a090(_FILE *file_handle,CDemonActor **actor)

{
  if (*actor == (CDemonActor *)0x0) {
    _fprintf(file_handle,"\"%s\"\n");
    return;
  }
  _fprintf(file_handle,"\"%s\"\n");
  return;
}

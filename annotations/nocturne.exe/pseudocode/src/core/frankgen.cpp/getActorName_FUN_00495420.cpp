// Name: core_frankgen.cpp_getActorName_FUN_00495420
// Address: 00495420
// Address Range: [[00495420, 00495426]]
// Convention: __cdecl
// Signature: char * __cdecl core_frankgen_cpp_getActorName_FUN_00495420(CDemonActor *actor)

#include "nocturne.h"

char * __cdecl core_frankgen_cpp_getActorName_FUN_00495420(CDemonActor *actor)

{
  return *(char **)actor->actor_name;
}

// Name: core_frankgen.cpp_getActorName_FUN_004d2890
// Address: 004d2890
// Address Range: [[004d2890, 004d2896]]
// Convention: __cdecl
// Signature: char * __cdecl core_frankgen_cpp_getActorName_FUN_004d2890(CDemonActor *actor)

#include "nocturne.h"

char * __cdecl core_frankgen_cpp_getActorName_FUN_004d2890(CDemonActor *actor)

{
  return *(char **)actor->actor_name;
}

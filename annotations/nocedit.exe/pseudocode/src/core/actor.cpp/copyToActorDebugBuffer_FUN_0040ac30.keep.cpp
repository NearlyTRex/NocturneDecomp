// Name: core_actor.cpp_copyToActorDebugBuffer_FUN_0040ac30
// Address: 0040ac30
// MANUAL RECONSTRUCTION
// Address Range: [[0040ac30, 0040ac73]]
// Convention: __cdecl
// Signature: char * __cdecl core_actor_cpp_copyToActorDebugBuffer_FUN_0040ac30(char *source_string)

#include "nocturne.h"

char * __cdecl core_actor_cpp_copyToActorDebugBuffer_FUN_0040ac30(char *source_string)

{
  memset(g_ActorDebugBuffer,0,0x32);
  if (source_string == (char *)0x0) {
    return g_ActorDebugBuffer;
  }
  memcpy(g_ActorDebugBuffer,source_string,0x31);
  return g_ActorDebugBuffer;
}

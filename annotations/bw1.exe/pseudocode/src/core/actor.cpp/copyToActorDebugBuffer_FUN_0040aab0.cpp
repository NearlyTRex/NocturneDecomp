// Name: core_actor.cpp_copyToActorDebugBuffer_FUN_0040aab0
// Address: 0040aab0
// Address Range: [[0040aab0, 0040aaf3]]
// Convention: __cdecl
// Signature: char * __cdecl core_actor_cpp_copyToActorDebugBuffer_FUN_0040aab0(char *source_string)

#include "nocturne.h"

char * __cdecl core_actor_cpp_copyToActorDebugBuffer_FUN_0040aab0(char *source_string)

{
  int iVar1;
  char *pcVar2;
  byte bVar3;
  
  bVar3 = 0;
  memset((void *)0x7c2fc0,0,0x32);
  if (source_string == (char *)0x0) {
    return (char *)0x7c2fc0;
  }
  pcVar2 = (char *)0x7c2fc0;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pcVar2 = *(uint *)source_string;
    source_string = source_string + (uint)bVar3 * -8 + 4;
    pcVar2 = pcVar2 + (uint)bVar3 * -8 + 4;
  }
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pcVar2 = *source_string;
    source_string = source_string + (uint)bVar3 * -2 + 1;
    pcVar2 = pcVar2 + (uint)bVar3 * -2 + 1;
  }
  return (char *)0x7c2fc0;
}

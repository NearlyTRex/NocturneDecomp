// Name: core_actor.cpp_copyToActorDebugBuffer_FUN_0040bd40
// Address: 0040bd40
// Address Range: [[0040bd40, 0040bd83]]
// Convention: __cdecl
// Signature: char * __cdecl core_actor_cpp_copyToActorDebugBuffer_FUN_0040bd40(char *source_string)

#include "nocturne.h"

char * __cdecl core_actor_cpp_copyToActorDebugBuffer_FUN_0040bd40(char *source_string)

{
  int iVar1;
  char *pcVar2;
  byte bVar3;
  
  bVar3 = 0;
  memset(&DAT_00763e10,0,0x32);
  if (source_string == (char *)0x0) {
    return (char *)&DAT_00763e10;
  }
  pcVar2 = (char *)&DAT_00763e10;
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
  return (char *)&DAT_00763e10;
}

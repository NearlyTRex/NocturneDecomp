// Name: core_actor.cpp_adjustIndentationLevel_FUN_0040ad60
// Address: 0040ad60
// Address Range: [[0040ad60, 0040ada5]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_adjustIndentationLevel_FUN_0040ad60(int indent_delta)

#include "nocturne.h"

int __cdecl core_actor_cpp_adjustIndentationLevel_FUN_0040ad60(int indent_delta)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar3 = 0xffffffff;
  pcVar4 = &DAT_006106c0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar2 = indent_delta + (~uVar3 - 1);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  (&DAT_006106c0)[iVar2] = 0;
  for (; 0 < iVar2; iVar2 = iVar2 + -1) {
    (&DAT_006106bf)[iVar2] = 9;
  }
  return iVar2;
}
